#include<stdio>
/**
 * main - a program that prints the size of various computer type
 * Retrun: 0 (sucseed)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %zu byte\n", sizeof(a));
printf("Size of int: %zu bytes\n", sizeof(b));
printf("Size of a long int: %lu", sizeof(c));
printf("Size of long long int: %lld", sizeof(d));
printf("Size of float: %zu bytes\n", sizeof(f));
return (0);
}
