#include "../std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void print_array(int a[], int n){
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

void f(int aa[], int n){
	int la[10]; // 10 elemű la int típusú array
	for(int i = 0; i < 10; ++i)
		la[i] = ga[i];
	print_array(la, 10);
	cout << endl;

	int* p = new int[n];
	for(int i = 0; i<n; ++i)
		p[i] = aa[i];
	print_array(p, n);
	cout << endl;
	delete[] p;
}

int main()
try{
	f(ga, 10);
	int aa[10] = {1};
	for(int i = 1; i < 10; ++i)
		aa[i] = aa[i-1]*(i+1); //első 10 faktoriális
	f(aa,10);
}
catch(exception& e) {
	cerr << "Exception: " << e.what() << endl;
}
catch(...){
	cerr << "Exception\n0";
}

