#include <stdio.h>

/**
 *
 * main - Entry point
 *
 *
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{
int a;
long int b;
char c;
long long int d;
float e;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
	    return (0);
}