#include "main.h"
/**
 * str_length - gets the length of string
 * @s: string
 *
 * Return: return length of string
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_length(++s));
}
/**
 * check_palindrome - check is palidrome for each left and right
 * char in string, recursively
 * @l: left index of string
 * @r: right index of string
 * @s: string
 *
 * Return: 1 if true and 0 if false.
 */
int check_palindrome(int l, int r, char *s)
{
	/* Base case */
	if (l >= r)
		return (1);
	if (s[l] != s[r])
		return (0);
	/* recursion */
	return (check_palindrome(l + 1, r - 1, s));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if false
 */
int is_palindrome(char *s)
{
	int i;

	i = str_length(s) - 1;
	return (check_palindrome(0, i, s));
}
