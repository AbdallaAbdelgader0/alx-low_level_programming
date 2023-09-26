#include <unistd.h>

/**
 * _putchar: write the charecter c to stdout
 * @c: the charecter to print
 *
 * Return: on seccess 1
 * on error: -1 is returned, and errno is set an apropperiately 
 */
int _putchar(char c)
{
	return (write(1 ,&c ,1 ));
}
