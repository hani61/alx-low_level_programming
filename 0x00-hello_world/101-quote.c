/*
 * File: 101-quote.c
 * Auth: hani ahmed 
 */

#include <stdio.h>
/**
 * main -prints "and thats piece of art is useful" - Dora korpar, 2015-10-19",
 * followed by a ney line, to standard error
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" -  Dora korpar, 2015-10-19\n",59);
	return (1);
}
