// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double c
(const double x, const double y, const double z);  
// прототип
double g(const double x, const double y, const double z)  // визначення
{
	return(x * x + sin(y) + 1) / (1 + z * z);
}
int main()
{
	double x, y;
    cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	double c = (g(x*x, 1, y) - g(y*y, x, 1)/(1+g(sqrt(x),y,1)));
	cout << "c = " << c << endl;
	return 0;
}
