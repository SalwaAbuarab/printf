#include "main.h"
/**
 * print_percent - print character to stdout.
 * @c: char input
 * @buffer: buffer pointer
 * @i: buffer pointer index 
 * Return: on success 1.
*/
int print_percent(va_list c __attribute__((unused)),char *buffer, unsigned int i)
{
    handle_buffer(buffer, '%', i);
    return (1);
}