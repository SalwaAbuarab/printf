#include "main.h"
/**
 * printy - return amount of conversion specifier
 * @s: hold conversion specifier
 * @index: index of conversion specifier
 * Return: amount of conversion specifier.
*/
int printy(const char *s, int index)
{
    print arr[] = {
        {"c", print_char}, 
        {"s", print_str}, 
        {"%", print_percent},
        {"b", print_binary},
        {"d", print_int}, {"i", print_int},
        {"r", print_reverse}, {"R", print_rot13}
    };

    int i = 0, j = 0, first_input;

    first_input = index;
    while (arr[i].c)
    {
        if (s[index] == arr[i].c[j])
        {
            if (arr[i].c[j + 1] != '\0')
            {
                index++;
                j++;
            }
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = first_input;
        }
    }
    return (j);   
}