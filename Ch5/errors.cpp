#include  "/home/bence/Bevprog/std_lib_facilities.h"

int main(){

try {

	//Cout << "Success!\n";
	cout << "1st Success!\n";

	//cout << "Success!\n;
	cout << "2nd Success!\n";

	//cout << "Success" << !\n"
	cout << "3rd Success!\n";

	//cout << success << '\n';
	cout << "4th Success!\n";

 	//string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
 	int res = 7; vector<int> v(10); v[5] = res; cout << "5th Success!\n";

	//vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
	vector<int> v2(10); v2[5] = 7; if (v2[5]==7) cout << "6th Success!\n";

 	//if (cond) cout << "Success!\n"; else cout << "Fail!\n";
 	if (1+1==2) cout << "7th Success!\n"; else cout << "Fail!\n";

 	//bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
 	bool c = false; if (c!=true) cout << "8th Success!\n"; else cout << "Fail!\n";

 	//string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
 	string s = "ape"; bool d = "fool"<s; if (!d) cout << "9th Success!\n";

 	//string s = "ape"; if (s=="fool") cout << "Success!\n";
 	string s2 = "ape"; if (s2!="fool") cout << "10th Success!\n";

	//string s = "ape"; if (s=="fool") cout < "Success!\n";
	string s3 = "ape"; if (s3!="fool") cout << "11th Success!\n";

 	//string s = "ape"; if (s+"fool") cout < "Success!\n";
 	string s4 = "ape"; if (s4!="fool") cout << "12th Success!\n";

 	//vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
 	vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "13th Success!\n";

	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "14th Success!\n";

 	//string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
 	string s5 = "15th Success!\n"; for (int i=0; i<14; ++i) cout << s5[i];

 	//if (true) then cout << "Success!\n"; else cout << "Fail!\n";
 	if (2-1==1) cout << "16th Success!\n"; else cout << "Fail!\n";

	//int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	int x = 2000; int c2 = x; if (c2==2000) cout << "17th Success!\n";

	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	string s6 = "18th success!\n"; for (int i=0; i<1; ++i) cout << s6; //<1, 2-nél már 2szer jeleníti meg

 	//vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
 	vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << "19th Success!\n";

	//int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
	int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "20th Success!\n";

	//int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
	int x2 = 7; double g = 5/(x2-2); if (g==2*x2+(-13)) cout << "21th Success!\n";

	//string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
	string z = "22nd Success!\n"; for (int i=0; i <= 15; ++i) cout << z[i];

	//int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
	int i2=0; int j2 = 8; while (i2<10) ++i2; if (j2<i2) cout << "23rd Success!\n";

	//int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
	int x3 = 3; double h = 5/(x3-2); if (h==2*x3-1) cout << "24th Success!\n";

	//cin << "Success!\n";
	cout << "25th Success!\n";

	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
	}
}