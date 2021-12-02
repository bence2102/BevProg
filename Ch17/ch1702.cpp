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
try {
    //Part 2/1 
    int e = 7;
    int* p1 = &e;
    cout << "\n";

    cout << "Part 2/2" << "\n";
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";

    //Part 2/3 
    int* p2 = new int[7];
    for(int i = 0; i<7; ++i)
        p2[i] = pow(2,i);

    cout << "Part 2/4" << "\n";
    cout << "p2: " << p2 << "\n";
    print_array(cout,p2,7);
    cout << "\n";

    //Part 2/5
    int* p3 = p2;

    //Part 2/6 
    p2 = p1;

    //Part 2/7
    p2 = p3;

    cout << "Part 2/8" << "\n"; 
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";
    cout << "\n";

    //Part 2/9
    delete[] p2;
    p3 = 0;

    //Part 2/10
    p1 = new int[10];
    for(int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    //Part 2/11
    p2 = new int[10];

    cout << "Part 2/12" << "\n";
    for(int i = 0; i<10; ++i)
        p2[i] = p1[i];
    print_array(cout,p2,10);
    cout << "\n";

    cout << "Part 2/13" << "\n";
    // 10-es
    vector<int> v1;
    for(int i = 0; i < 10; ++i)
        v1.push_back(pow(2,i)); // 2 i-edik hatványai
    
    // 12-es
    vector<int> v2;
    for(int i = 0; i < v1.size(); ++i)
        v2.push_back(v1[i]);
    print_vector(cout,v2);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";

    return 0;
   }