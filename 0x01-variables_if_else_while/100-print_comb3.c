#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *  Return: Always 0 (successful)
 */
int main(void)
{
	int f;
	int l;

	for (f = '0'; f <= '9'; f++)
	{
		for (l = (f + 1); l <= '9'; l++)
		{
			putchar(f);
			putchar(l);	
			if (f != '8' || l != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
