#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{

int n = 0;

for (n = 0 ; n < 100 ; n++)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');

if (n != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
