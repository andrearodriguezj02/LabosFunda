#include <iostream>
using namespace std;
int main()
{
    string nombre;
cout << "Escriba el nombre de su producto" <<endl;
cin >> nombre;

float precio;
cout << "Digite el precio del producto" <<endl;
cin >> precio;

int cantidad;
cout << "Digite la cantidad comprada" <<endl;
cin >> cantidad;

float dinero = precio*cantidad;

cout << "Usted ha gastado $";
cout << dinero <<endl;

}