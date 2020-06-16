#include <iostream>
using namespace std;

int AñoBisiesto()
{
int año, prueba1, prueba2, prueba3, comprobacion;
 
 cout <<"Ingrese el año a comprobar: "<<endl; 
 cin>>año;
 
 prueba1=año%400;
 prueba2=año%4;
 prueba3=año%100;
 comprobacion=prueba2==0 & prueba3!=0;

 if (prueba1==0)
 {cout<<"El año ingresado es bisiesto."<<endl;}

 else if (comprobacion==false) 
 {cout<<"El año ingresado no es bisiesto."<<endl;}

 else if (comprobacion==true)
 {cout<<"El año ingresado es bisiesto."<<endl;}

 return 0;}

 int main ()
 {
     AñoBisiesto();
     
     return 0;
 }