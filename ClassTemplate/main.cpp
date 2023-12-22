#include <iostream>
#include "Container.h"

int main()
{
	Container<int> cint(10, 3);

	Container<char> cchar(5, 'a');

	Container<double> cdouble(8, 2.5);

	Container<std::string> cstring(4, "inscription");

	return 0;
}