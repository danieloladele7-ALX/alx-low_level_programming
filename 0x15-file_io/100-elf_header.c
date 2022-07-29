#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * elf_indent - Checks and prints the elf_indent of the ELF Header.
 * @e_ident: A pointer to an array containing the
 * ELF content (for the ELF magic numbers).
 *
 * Return: Void or exit code 98 on failure.
 */
void elf_indent(unsigned char *e_ident)
{
	int idx;
	/* Check Elf magic numbers - EI_MAG0 to 3 */
	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 && e_ident[idx] != 'E' &&
		    e_ident[idx] != 'L' && e_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: This is not an ELF file\n");
			exit(98);
		}
	}
	/* Print Magic Numbers */
	printf("ELF Header:\n  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);
		idx == EI_NIDENT - 1 ? printf("\n") : printf(" ");
	}
	/* Print Data and Class */
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);

	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}
/**
 * elf_version - Prints the version of an ELF header.
 * @e_version: A pointer to an array containing the ELF version.
 *
 * Return: void.
 */
void elf_version(unsigned char *e_version)
{
	printf("  Version:                           %d", e_version[EI_VERSION]);

	if (e_version[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
/**
 * elf_osabi - Prints the OS/ABI of an ELF header.
 * @os_abi: A pointer to an array containing the ELF version.
 *
 * Return: void.
 */
void elf_osabi(unsigned char *os_abi)
{
	printf("  OS/ABI:                            ");

	switch (os_abi[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", os_abi[EI_OSABI]);
	}
	printf("  ABI Version:                       %d\n", os_abi[EI_ABIVERSION]);
}
/**
 * elf_type - Print ELF type file.
 * @type: ELF type.
 * @class: ELF Class
 *
 * Return: void.
 */
void elf_type(unsigned int type, unsigned char *class)
{
	if (class[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}
/**
 * elf_entry - Print ELF entry.
 * @entry: ELF type.
 * @class: ELF Class
 *
 * Return: void.
 */
void elf_entry(unsigned long int entry, unsigned char *class)
{
	printf("  Entry point address:               ");

	if (class[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}
/**
 * main - Displays the information contained in the ELF header at the
 *        start of an ELF file.
 * @ac: Number of arguments passed into the program
 * @av: Array of arguments passed.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	Elf64_Ehdr *header;
	int openn, readd;

	if (ac != 2 || av[1] == NULL)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]), exit(98);
	openn = open(av[1], O_RDONLY);
	if (openn == -1)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]), exit(98);
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: No memory allocated for %s\n", av[1]);
		if (close(openn) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openn);
		exit(98);
	}
	readd = read(openn, header, sizeof(Elf64_Ehdr));
	if (readd == -1)
	{
		printf("Error: Cannot read file %s\n", av[1]);
		free(header);
		if (close(openn) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openn);
		exit(98);
	}
	elf_indent(header->e_ident);
	elf_version(header->e_ident);
	elf_osabi(header->e_ident);
	elf_type(header->e_type, header->e_ident);
	elf_entry(header->e_entry, header->e_ident);

	free(header);
	if (close(openn) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openn);
		exit(98);
	}
	return (0);
}
