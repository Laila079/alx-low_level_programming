/**
* *create_array - create an array
* @size: size of the array to create
* @c: char to initialize
* Return: pointer to the array if not empty
*/


char *create_array(unsigned int size, char c)
{
char *n = malloc(size);

if (size == 0  || n == 0)
return (0);

for (int i = 0; i < size; i++)
{
n[size] = c;
}
return (n);
free(n);
}
