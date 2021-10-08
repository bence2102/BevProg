#include "/home/bence/Bevprog/std_lib_facilities.h"

constexpr double cm_to_m = 0.01;
constexpr double inch_to_cm = 2.54;
constexpr double ft_to_inch = 12.0;

double conv_to_m(double num, string unit){

	double res = 0;

	if(unit == "cm")
		res = num * cm_to_m;
	else if(unit == "ft")
		res = ((num * ft_to_inch)* inch_to_cm)*cm_to_m;
	else if(unit == "in")
		res = (num * inch_to_cm)*cm_to_m;
	else		
		res = num;

	return res;


}
int main(){

	double num = 0;
	double smallest = 0;
	double largest = 0 ;
	double result = 0;
	double sum = 0;
	double db = 0;
	double res = 0;
	string unit = " ";

	cout << "Enter 1 double and a unit, terminate with '|': \n";


	while(cin >> num >> unit){
		cout << num << unit <<'\n';

		if(unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
			cout << unit << " is an illegal unit.\n";
			break;
		}

		if(db == 0){
			cout << num << " is the first number, the smallest and the largest so far.\n";
			res = conv_to_m(num, unit);
			smallest = num;
			largest = num;
			++db;
		}
		else if(num < smallest){
			cout << num << " is the smallest so far.\n";
			res = conv_to_m(num, unit);
			smallest = num;
			++db;
		}
		else if(num > largest){
			cout << num << " is the largest so far.\n";
			res = conv_to_m(num, unit);
			largest = num;
			++db;
		}
		sum += res;


	if(num == '|')
		break;

	}
	cout << "The smallest number is: " << smallest << '\n';
	cout << "The largest number is: " << smallest << '\n';
	cout << "Number of values: " << db << '\n';
	cout << "The sum of values: " << sum << "m \n";
			
	
	return 0;
}