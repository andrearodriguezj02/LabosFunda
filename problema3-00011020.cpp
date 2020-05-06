#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
float a;
cout << "Escriba 'a'"<<endl;
cin >> a;

float b;
cout << "Escriba 'b'"<<endl;
cin >> b;

float c;
cout << "Escriba 'c'"<<endl;
cin >> c;

double xa = -b+sqrt(powf(b,2)-4 * a * c);
double x1 = xa/2 * a;

double xb = -b-sqrt((powf(b,2)-4 * a * c));
double x2 = xb/2 * a;

if ((powf(b,2)-4 * a * c > 0))
{ cout << "x1 = ";
cout << x1 <<endl;

cout << "x2 = "; 
cout << x2 <<endl;}


else { 
    double x = (-b)/2*a; 
if ((powf(b,2)-4 * a * c == 0)) 
{
    cout << "X = ";
    cout << x <<endl;
    }
else {
    cout << "No hay solución real" <<endl; } 
}
    }