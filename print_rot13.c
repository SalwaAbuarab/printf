#include "main.h"
/**
 * print_rot13 - print strings in ROT13 format
 * @arguments: inputs
 * @buffer: buffer pointer
 * @buffIndex: buffer pointer index
 * Return: number of characters
*/
int print_rot13(va_list arguments, char *buffer, unsigned int buffIndex)
{
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char *str;
    unsigned int i,j, x;
    str = va_arg(arguments, char *);
    char arr[] = "(AHYY)";
    if (str == NULL)
    {
        for (i = 0; arr [i]; i++)
        {
            /* code */
            buffIndex = handle_buffer(buffer, arr[i], buffIndex);
        }
        return(2);
    }
    for (i = 0; str[i]; i++)
    {
        /* code */
        for (x = j = 0; input[j]; j++)
        {
            if (str[i] == input[j])
            {
                x = 1;
                buffIndex = handle_buffer(buffer, output[j], buffIndex);
                break;
            }
        }
        if (x == 0)
        {
            buffIndex = handle_buffer(buffer, str[i], buffIndex);
        }
    }
    return (i);
}
