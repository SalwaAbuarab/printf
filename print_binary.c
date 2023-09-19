#include "main.h"
/**
 * print_binary - print decimal in binary
 * @arguments: inputs
 * @buffer: buffer pointer
 * @buffIndex: buffer pointer index
 * Return: number of chars printed.
*/
int print_binary(va_list arguments, char *buffer, unsigned int buffIndex)
{
    char *binary;
    int integer, i = 0, x = 0, result;
    int isNegative = 0;
    integer = va_arg(arguments, int);
    if (integer == 0)
    {
        buffIndex = handle_buffer(buffer, '0', buffIndex);
        return (1);
    }
    if (integer < 0)
    {
        integer = (integer * -1) - 1;
        isNegative = 1;
    }
    binary = malloc(sizeof(char) * (32 + 1));
    binary = binary_list(binary, isNegative, integer, 32);
    for (result = i; binary[i]; i++)
    {
        if (x == 0 && binary[i] == '1')
        {
            x = 1;
        }
        if (x == 1)
        {
            buffIndex = handle_buffer(buffer, binary[i], buffIndex);
            result++;
        }   
    }
    free(binary);
    return (result);   
}
