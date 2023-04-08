#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

/* This function outputs a character to the standard output */
int _putchar(char c);

/* This function converts a binary string to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* This function prints the binary representation of a number */
void print_binary(unsigned long int n);

/* This function retrieves the value of a bit at a specified index in a number */
int get_bit(unsigned long int n, unsigned int index);

/* This function sets the value of a bit at a specified index in a number to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* This function sets the value of a bit at a specified index in a number to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* This function returns the number of bits that need to be flipped in n to get m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* This function checks the endianness of the system */
int get_endianness(void);

#endif /* MAIN_H */

