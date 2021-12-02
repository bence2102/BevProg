#include "../std_lib_facilities.h"

//Part 1/4
void print_array10(ostream& os, int* a){
	for(int i = 0; i < 10; ++i)
		os << a[i] << '\n';
}

//Part 1/7
void print_array(ostream& os, int* a, int n){
	for(int i = 0; i < n; ++i)
		os << a[i] << '\n';
}

//Part 1/10
void print_vector(ostream& os, vector<int> v){
	for(int i = 0; i < v.size(); ++i)
		os << v[i] << '\n';
}

int main()
try{
	//Part 1/1
	int* a = new int[10]; //new-val memóriát foglalunk

	//Part 1/2
	cout << "Part 1/2" << "\n";
	for(int i = 0; i < 10; ++i)
		cout << a[i] << "\n";
	cout << endl;

	//Part 1/3
	delete[] a;

	//Part 1/5
	cout << "Part 1/5" << "\n";
	int* b = new int[10];
	for(int i = 0; i < 10; ++i)
		b[i] = 100 + i;
	print_array10(cout, b);
	delete[] b;
	cout << endl;

	//Part 1/6
	cout << "Part 1/6" << "\n";
	int* c = new int[11];
	for(int i = 0; i < 11; ++i)
		c[i] = 100+i;
	print_array10(cout, c);
	cout << c[10] << "\n"; //a függvény csak 10-et irat ki
	delete[] c;
	cout << endl;

	cout << "Part 1/8" << "\n";
	int* d = new int[20];
	for(int i = 0; i<20; ++i)
		d[i] = 100+i;
	print_array(cout, d, 20);
	delete[] d;
	cout << endl;

	cout << "Part 1/10/1" << "\n";
	vector <int> v1;
	for(int i = 0; i<10; ++i)
		v1.push_back(100+i);
	print_vector(cout,v1);
	cout << endl;

	cout << "Part 1/10/2" << "\n";
	vector <int> v2;
	for(int i = 0; i<11; ++i)
		v2.push_back(100+i);
	print_vector(cout,v2);
	cout << endl;

	cout << "Part 1/10/3" << "\n";
	vector <int> v3;
	for(int i = 0; i<20; ++i)
		v3.push_back(100+i);
	print_vector(cout,v3);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
