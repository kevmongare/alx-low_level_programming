#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char CAP;
	/*declared two types of variables*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar (ch);
	}
	for (CAP = 'A'; CAP <= 'Z'; CAP++)
	{
	putchar (CAP);
	}
	putchar ('\n');
	return (0);
}
