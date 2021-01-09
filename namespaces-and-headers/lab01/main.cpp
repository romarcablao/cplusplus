#include <iostream>
#include "myLibrary.h"

using namespace myLibrary_01;
using namespace myLibrary_02;

int main()
{

	Student juan;
	juan.course = "MIT";

	myLibrary_01::print("Hello World!");
	myLibrary_02::print("Hello BSCS!");

	return 0;
}
