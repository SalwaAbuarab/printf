#include "main.h"

/**
 * binary_list - print decimal in binary
 * @binary: binary pointer.
 * @isNegative: check if number is negative.
 * @integer: input number.
 * @binarySize: size of binary
 * Return: number of chars printed.
*/
char *binary_list(char *binary, int isNegative, long int integer, int binarySize)
{
    int i;
    
    for (i = 0; i < binarySize; i++)
    {
        binary[binarySize] = '0';
    }
    binary[binarySize] = '\0';
    for (i = binarySize - 1; integer > 1; i--)
    {
        if (integer == 2)
        {
            binary[i] = '0';
        }
        else
        {
            binary[i] = (integer % 2) + '0';
        }
        integer /= 2;
    }
    if (integer != 0)
    {
        binary[i] = '1';
    }
    if (isNegative)
    {
        for (i = 0; binary[i]; i++)
        {
            if (binary[i] == '0')
            {
                binary[i] = '1';
            }
            else
            {
                binary[i] = '0';
            }   
        }
    } 
    return (binary);
}