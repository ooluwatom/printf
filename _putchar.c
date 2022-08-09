#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is there returned
 */

int _putchar(char c)
{
<<<<<<< HEAD
return (write(1, &c, 1));
=======
    return (write(1, &c, 1));
>>>>>>> 19b99087a4bbab7dd24904725b2ee84f711e0240
}
