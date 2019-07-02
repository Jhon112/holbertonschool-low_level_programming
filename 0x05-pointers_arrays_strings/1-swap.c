/**
 * swap_int - swap the value of two variables
 * @a: pointer to value of first parameter
 * @b: pointer to value of second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
