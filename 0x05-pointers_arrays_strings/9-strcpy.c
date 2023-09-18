#include "holberton.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The destination character array.
 * @src: The source character array.
 *
 * Description: This function copies the string pointed to by src, including
 * the null-terminator, to the buffer pointed to by dest.
 *
 * Return: A pointer to the destination string (dest).
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i]; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Ensure the destination string is null-terminated
    return dest;
}
