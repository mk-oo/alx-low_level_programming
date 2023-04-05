#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
 
/* Function to print reverse of the passed string */
void _print_rev_recursion(char *str)
{
   if (*str)
   {
       reverse(str+1);
       _putchar("%c", *str);
   }
}
 
/* Driver program to test above function */
int main()
{
   char a[] = "I am Mostafa";
   _print_rev_recursion(a);
   return 0;
}
