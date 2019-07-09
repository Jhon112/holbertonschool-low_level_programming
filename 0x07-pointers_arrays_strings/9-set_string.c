/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * @s: pointer that points to a pointer that points to a string
 * @to: pointer that points to a string
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
