/*include header file(s) cotaining necessary functions*/
#include "main.h"

/**
 * reverse_array - entry point
 * @a: - param 1
 * @n: - param 2
 * strt_arr, end_of_arr, temp - variables
 * while loop
 */

void reverse_array(int *a, int n)
{
	int strt_arr = 0;
	int end_of_arr = n - 1;

	while (strt_arr < end_of_arr)
	{
		int temp = a[strt_arr];

		a[strt_arr] = a[end_of_arr];
		a[end_of_arr] = temp;

		strt_arr++;

		end_of_arr--;
	}
}
