#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary Search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where 'value' is located
 */
int binary_search(int *array, size_t size, int value)
{
int l = 0;
int r = (int)size - 1;
int mid;

while (l <= r)
{
printf("Searching in array: ");
for (int i = l; i <= r; i++)
{
printf("%d", array[i]);
if (i < r)
{
printf(", ");
}
}
printf("\n");

mid = l + (r - l) / 2;

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
l = mid + 1;
}
else
{
r = mid - 1;
}
}
return (-1);
}
