#include <unistd.h>

/**
 * _putchar - writes the charchter c to stdout
 * * @c :; The charecter to print 
 * Return ; On succcess 
 * On error , -1 is returned , and errno is set appropraitely
 */

int _putchar(char c )
{
	return (write(1,&c, 1));
}


