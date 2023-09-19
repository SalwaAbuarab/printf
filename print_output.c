#include "main.h"
/**
 * print_output - print buffer
 * @buffer: buffer pointer
 * buffSize: buffer size to print
 * Return: number of bytes printed.
*/
int print_output(char *buffer, unsigned int buffSize)
{
    return (write(1, buffer, buffSize));
}