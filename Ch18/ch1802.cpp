#include "../std_lib_facilities.h"

vector<int> gv;

void print_vector(vector<int> v){
	for(int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
}

void f(vector<int> v){
	vector<int> lv(v.size());
	lv = gv;
	print_vector(lv);
	cout << "\n";
	vector<int> lv2(v);
	print_vector(lv2);
	cout << "\n";
	
}

int main()
try{
	for(int i = 0; i < 10; ++i)
		gv.push_back(pow(2,i));
	cout << "\n";
	f(gv);
	vector<int> vv;
	vv.push_back(1);
	for(int i = 1; i < 10; ++i)
		vv.push_back(vv[i-1]*(i+1));
	f(vv);
}
catch(exception& e){
	cerr << "Exception: " << e.what() << endl;
}
catch(...){
	cerr << "Exception\n";
}