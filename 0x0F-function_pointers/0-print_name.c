/**
 * print_name - to print name
 * @name: name to be printer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
