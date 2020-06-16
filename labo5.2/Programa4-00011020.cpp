#include <iostream>
using namespace std;


int fecha()
{int dia, mes, año, mes31, mes30, febrero, prueba2, prueba3, comprobacion;
  

 cout<<"Por favor ingrese el día (fecha): "<<endl;
 cin>>dia;

 cout<<"Por favor ingrese el mes (en número, 1-12): "<<endl;
 cin>>mes;

 cout<<"Por favor ingresa el año: "<<endl;
 cin>>año;

 //pruebas para verificar si es año bisiesto o no
 prueba2=año%4;
 prueba3=año%100;
 comprobacion=prueba2==0 & prueba3!=0;

 mes31=1, 3, 5, 7, 8, 9, 12;
 mes30=4, 6, 9, 11;
 febrero=2;
 
 //meses con 31 días
 while (mes == mes31)
 {   if (dia<31)
    {cout<<"El día siguiente es "<<dia+1<<" del mes "<<mes<<" del año "<<año<<endl;}
    else if (dia == 31)
    {cout<<"El día siguiente es "<<dia-30<<" del mes "<<mes+1<<" del año "<<año<<endl;}
    else if (dia>31)
    {cout<<"Fecha inválida."<<endl;} 
    break;}

 //meses con 30 días
 while (mes == mes30)
  {if (dia<30)
    {cout<<"El día siguiente es "<<dia+1<<" del mes "<<mes<<" del año "<<año<<endl;}
    else if (dia == 30)
    {cout<<"El día siguiente es "<<dia-29<<" del mes "<<mes+1<<" del año "<<año<<endl;}
    else if (dia>30)
    {cout<<"Fecha inválida."<<endl;} 
    break;} 

  while (comprobacion==true)
 {if (dia<29)
    {cout<<"El día siguiente es "<<dia+1<<" del mes "<<mes<<" del año "<<año<<endl;}
    else if (dia == 29)
    {cout<<"El día siguiente es "<<dia-28<<" del mes "<<mes+1<<" del año "<<año<<endl;}
    else if (dia>29)
    {cout<<"Fecha inválida."<<endl;}
    break;}
 
 while (comprobacion==false)
 {if (dia<28)
    {cout<<"El día siguiente es "<<dia+1<<" del mes "<<mes<<" del año "<<año<<endl;}
    else if (dia == 28)
    {cout<<"El día siguiente es "<<dia-27<<" del mes "<<mes+1<<" del año "<<año<<endl;}
    else if (dia>28)
    {cout<<"Fecha inválida."<<endl;}
    break;}
 
 if (dia==31 & mes==12==true)
 {cout<<"El día siguiente es "<<dia-30<<" del mes "<<mes-11<<" del año "<<año+1<<endl;}

 if (mes>12)
 {cout<<"Fecha inválida."<<endl;}
 
 return 0;}

 int main ()
 {
 fecha ();
 return 0;
 }