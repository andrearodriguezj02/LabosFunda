#include <iostream>
using namespace std;

int main ()
{
int numero1, numero2, numero3;
cout << "Inserte un numero entero" <<endl;
cin >> numero1;

cout << "Inserte un numero entero" <<endl;
cin >> numero2;

cout << "Inserte un numero entero" <<endl;
cin >> numero3;

int numero4 = 3;
float suma = numero1+numero2+numero3;
float div = suma/numero4;

cout << "El promedio de los numeros es "; 
cout << div <<endl;
cout << "Gracias" <<endl;


}