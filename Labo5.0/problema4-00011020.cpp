#include <iostream>
using namespace std;
 int main ()
 {
 string palabra;
 cout << "Escriba una palabra"<<endl;
 cin >> palabra;

 int len = palabra.length ();
 if (len > 10)
 {
     cout << "La palabra es mayor a 10 caracteres"<<endl; }
else 
 { cout << "La palabra es menor a 10 caracteres"<<endl;
 } 

 if (len % 2 == 0)
 {cout << "La longitud de la palabra es par"<<endl;}
 else 
 {cout << "La longitud de la palabra es impar"<<endl;}

 }