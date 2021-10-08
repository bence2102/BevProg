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
	int db = 0;
	double res = 0;
	string unit = " ";
	vector <double> values;

	cout << "Enter 1 double and a unit, terminate with '|': \n";


	while(cin >> num >> unit){
		cout << num << unit <<'\n';

		if(unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
			cout << unit << " is an illegal unit.\n";
			break;
		}
		else{
			res = conv_to_m(num, unit);
			if(db == 0){
				cout << num << unit << " is the first number, the smallest and the largest so far.\n";
				smallest = res;
				largest = res;
			++db;
			}				
			else if(res < smallest){
				cout << num << unit << " is the smallest so far.\n";
				smallest = res;
			++db;
			}			
			else if(res > largest){
				cout << num << unit << " is the largest so far.\n";
				largest = res;
			++db;
			}
			sum += res;
			values.push_back(res);
		}

	if(num == '|')
		break;

	}
	cout << "The smallest value is: " << smallest << "m \n";
	cout << "The largest value is: " << largest << "m \n";
	cout << "Number of values: " << db << '\n';
	cout << "The sum of values: " << sum << "m \n";

	sort(values);
	for (double value: values)
		cout << value << "m\n";
			
	
	return 0;
}