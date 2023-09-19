#include "main.h"
/**
 * print_int - print integer and decimal numbes
 * @arguments: inputs
 * @buffer: buffer pointer
 * @buffIndex: index of buffer pointer
 * Return: number of chars printed.
*/
int print_int(va_list arguments, char *buffer, unsigned int buffIndex)
{
    unsigned int integer, temp_int, i, x; 
    int input;
    unsigned int isNegative = 0;
    input = va_arg(arguments, int);
    if (input < 0)
    {
        integer = input * -1;
        buffIndex = handle_buffer(buffer, '-', buffIndex);
        isNegative = 1;
    }
    else
    {
        integer = input;
    }
    temp_int = integer;
    x = 1;
    while (temp_int > 9)
    {
        x *= 10;
        temp_int /= 10;
    }
    for (i = 0; x > 0; x /= 10, i++)
    {
        buffIndex = handle_buffer(buffer, ((integer / x) % 10) + '0', buffIndex);
    }
    return (i + isNegative);
}