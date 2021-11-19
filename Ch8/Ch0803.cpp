#include "std_lib_facilities.h"

namespace X{
	int var = 0;
	void print() {cout << "X értéke: " << var << '\n';}
}

namespace Y{
	int var = 0;
	void print() {cout << "Y értéke: " << var << '\n';}
}

namespace Z{
	int var = 0;
	void print() {cout << "Z értéke: " << var << '\n';}
}

int main()
{

	X::var = 7;
	X::print(); // print X's var
	using namespace Y;
	var = 9;
	print(); // print Y's var
	{	using Z::var;
		using Z::print; // print Z's var
		var = 11;
		print();
	}
	print();
	X::print();
}