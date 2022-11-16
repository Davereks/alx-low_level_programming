#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function
 * Description: Executes
 * each element of an array
 * @array: pointer parameter of type int
 * @size: size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !action)
return;
while (size > 0)
{
  
