#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: how many element will be printed
 * @action: pointer to print in regular or hex
 * Return: nil
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
