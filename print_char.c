#include "main.h"
/**
 * print_char - print character to stdout.
 * @arguments: char inputs
 * @buffer: buffer pointer
 * @buffSize: index to buffer pointer
 * Return: 1 on success.
*/
int print_char(va_list arguments, char *buffer, unsigned int buffSize)
{
    char c;
    c = va_arg(arguments, int);
    handle_buffer(buffer, c, buffSize);
    return (1);
}
