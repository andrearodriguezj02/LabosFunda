#include <iostream>
using namespace std;
int main ()
{
int numero;
cout << "Ingrese un número"<<endl;
cin >> numero;

if (numero > 0)
{cout << "El número es positivo"<<endl;}

else if (numero < 0)
{cout << "El número es negativo"<<endl;}

else 
{cout << "El número es 0"<<endl;}

}