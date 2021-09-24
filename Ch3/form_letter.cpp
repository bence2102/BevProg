#include "/home/bence/Bevprog/std_lib_facilities.h"

int main()
{

	cout<<"Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;

	cout<<"Enter the age of the recipient:\n";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");

	cout<<"Enter the name of another friend:\n";
	string friend_name;
	cin >> friend_name;

	cout<<"Enter the friend's sex (m for male, f for female) \n";
	char friend_sex = '0';
	cin >> friend_sex;
	
	cout<<"\nDear " << first_name << ",\n";

	cout<<"\n\tHow are you? I miss you.\n\n";

	cout<<"Have you seen " << friend_name << " lately?\n";

	if (friend_sex == 'm')

		cout<<"If you see " << friend_name << " please ask him to call me.\n";

	if (friend_sex == 'f') 

		cout<<"If you see "<< friend_name <<" please ask her to call me.\n";

	cout<<"\nI hear you had a birthday and you are "<< age <<" years old.\n";

	if (age < 12)
		cout<<"Next year you will be "<< age + 1<< ".\n";
	else if (age == 17)
		cout<<"Next year you will be able to vote.\n";
	else if (age > 70)
		cout<<"I hope you are enjoying retirement.\n";

	cout<<"\nYours sincerely,\n\n\n";
	cout<<"Bence\n";
	
	
	return 0;
}