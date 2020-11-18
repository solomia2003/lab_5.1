//lab_5.1
//Щепітка Соломія
//Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b); // прототип

int main()
{
	double s, t;

	cout << "s= "; cin >> s;
	cout << "t= "; cin >> t;

	double c = (g(2, s) + pow((1 + pow(g(t, 1), 2)), 3)) / sqrt(1 + pow(g(t, 1), 2));

	cout << "c= " << c << endl;

	return 0;
}

double g(const double a, const double b) // визначення

{
	return (a * b) / (pow(a, 2) + pow(b, 2));

}