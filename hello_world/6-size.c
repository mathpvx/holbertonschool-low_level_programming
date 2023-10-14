#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the size of various data types.
 *              It uses the sizeof operator to determine the size in bytes.
 *
 * Return: 0 (success)
 */
int main(void) 
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
