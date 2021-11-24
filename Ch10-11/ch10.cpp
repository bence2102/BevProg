#include "../std_lib_facilities.h"

// 1. Pont definiálás
struct Point {
    int x;
    int y;
};

// 2. Pontok input
istream& operator>>(istream& is, Point& p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2;
    char ch3;
    int xx;
    int yy;
    is >> xx >> ch2 >> yy >> ch3;
    if (!is || ch3 != ')') {
        if (is.eof()) return is;
        error("bad point");
    }
    p.x = xx;
    p.y = yy;
    return is;
}

// 3. Pontok kiírhatóvá tétele
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')'; // ()-ek között
}

// 5. Read points back in from file
void fill_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};
    ist.exceptions(ist.exceptions()|ios_base::badbit);

    if (!ist) error("can't open input file ", name);
    for (Point p; ist >> p; )
        points.push_back(p);
}

int main()
try {
    // 2. Felhasználónak üzenet, vektorba tevés
    cout << "Please enter seven pairs of x, y points:\n";
    vector<Point> original_points;

    while (original_points.size() < 7) {
        Point p;
        cin >> p;
        original_points.push_back(p);
    } 

    // 3. Eredeti pontok kiíratása
    for (Point p : original_points)
        cout << p;
    cout << '\n';

    // 4. Output
    string fname = "mydata.txt";
    ofstream ost { fname };
    if (!ost) error("could not open file ", fname);

    for (Point p : original_points)
        ost << p;
    ost.close();

    // 5. Fájl visszaolvasás vektorba
    vector<Point> processed_points;
    fill_from_file(processed_points, fname);

    for (Point p : processed_points)
        cout << p;
    cout << '\n';

    if (original_points.size() != processed_points.size())
        cout << "Something's wrong!\n";
}
catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Something terrible has happened!\n";
    return 2;
}