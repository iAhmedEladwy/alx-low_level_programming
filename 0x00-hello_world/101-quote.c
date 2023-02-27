#include <stdio.h>
#define STDERR_FILENO 2
/**
 * main - Entry point
 * Return:Always 1 (Success)
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDERR_FILENO, message, sizeof(message\n) - 1);
return (1);
}
