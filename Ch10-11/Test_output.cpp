#include "../std_lib_facilities.h"

int main()
{
int birth_year = 2002;
int a;
int b;
int c;
int d;

cout << "Decimal: " << '\t'<< birth_year << '\n' << hex;
cout << "Hexadecimal: " << '\t'<< birth_year << '\n' << oct;
cout << "Octal: " << '\t'<< birth_year << '\n';

cout << dec << "My age:\t" << 2021 - birth_year << '\n';

cin >> a >> oct >> b >> hex >> c >> d;
cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

cout << defaultfloat << 1234567.89 << '\n' << fixed << 1234567.89 << '\n' << scientific << 1234567.89 << endl;

cout<<
		"| " << setw(9) << "Barta" << " |" << setw(9) << "Bence" << " | " << setw(11) << "06308822655" << " | " << setw(15) << "bence@gmail.com" << " | " << '\n' <<
		"| " << setw(9) << "Kurta" << " |" << setw(9) << "Fruzsi" << " | " << setw(11) << "063082556833" << " | " << setw(15) << "fruzs@gmail.com" << " | " << '\n' <<
		"| " << setw(9) << "Kovács" << " |" << setw(9) << "János" << " | " << setw(11) << "06302003458" << " | " << setw(15) << "janik@gmail.com" << " | " <<'\n' <<
		"| " << setw(9) << "Lakatos" << " |" << setw(9) << "Dezső" << " | " << setw(11) << "06302223335" << " | " << setw(15) << "dezso@gmail.com" << " | " << '\n' <<
		"| " << setw(9) << "Kolompár" << " |" << setw(9) << "Dzsunior" << "| " << setw(11) << "06306865422" << " | " << setw(15) << "dzsun@gmail.com" << " | " << '\n' <<	
		"| " << setw(9) << "Vas" << " |" << setw(9) << "Pál" << " | " << setw(11) << "06305386429" << " | " << setw(15) << "pali@gmail.com" << " | " << '\n' << endl;

return 0;
}