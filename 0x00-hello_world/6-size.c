/*include standard io header*/
#include <stdio.h>
/**
 * main - this is the entry point.
 * myArray - containing the various types.
 * sizeTypes - containing the array values.
 * printf - prints the value of the sizes of the types.
 * Return: -returns 0
 */
int main(void)
{
	int myArray[5] = {char, int, long int, long long int, float};
	int sizeTypes = sizeof(myArray[0]);

	printf("Size of a char: %d byte(s)\n", myArray[0]);
	printf("Size of an int: %d byte(s)\n", myArray[1]);
	printf("Size of a long int: %d byte(s)\n", myArray[2]);
	printf("Size of a long long int: %d byte(s)\n", myArray[3]);
	printf("Size of a float: %d byte(s)\n", myArray[4]);

	return (0);
}
