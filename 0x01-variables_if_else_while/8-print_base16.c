#include <stdio.h>
/**
*main - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
*Return: Always 0
*/
int main(void)
{
          int num;
          char la;

            for(num = 0; num < 10; num++)
                        putchar((num % 10) + '0');
             for (la = 'a'; la <= 'f'; la++)
                        putchar(la);

             putchar('\n');
             return (0);
}

