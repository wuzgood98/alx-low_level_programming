#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always return 1
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	return 1;
}
