/*include header*/
#include <unistd.h>
#include <string.h>
/**
 * main - this is the entry point
 *const char - to declare constant string.
 *size_t msg_len - to find the size of the string.
 *write function - to write the required string literal to standard error.
 *Return: -  returns 1.
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" ";
	size_t msg_len = strlen(msg);
	const char *msg1 = "- Dora Korpar, 2015-10-19";
	size_t msg_lng = strlen(msg1);

	write(STDERR_FILENO, msg, msg_len);
	write(STDERR_FILENO, msg1, msg_lng);

	return (1);
}
