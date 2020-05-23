#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
const double PI = 3.141592653589793238463;

float radio;
cout << "Ingresar el radio"<<endl;
cin >> radio;

  float perimetro = 2 * PI * radio;

 float area = PI * powf (radio, 2);
  cout << "El perimetro es " <<endl;
  cout << perimetro <<endl;
  
  cout << "El area es " <<endl;
  cout << area <<endl;


}
