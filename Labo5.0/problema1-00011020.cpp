#include "iostream"
using namespace std;
int main ()
{

int numero1, numero2;
cout << "Ingrese el dividendo entero "<<endl;
cin >> numero1;
cout << "Ingrese el divisor entero "<<endl;
cin >> numero2;

if ((numero1/numero2) % 2 == 0)
{cout << "Los números son divisibles entre sí";}

else { cout << "Los números no son divisibles entre sí"<<endl;}

}