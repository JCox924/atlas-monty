#include "monty.h"

int main(int argc, char argv)
{
	if (argc != 2)
	{
		arg_error();
	}
	executer(argv);

	return (0);
}
