#include <iostream>
using namespace std;

int estatura()
{
 float arr[25], cont, prom;
 int i, cont2, cont3;
 for (i=0; i<25; i++)
 {cout<<"Ingrese la estatura (en metros) del estudiante "<<i+1<<endl;
 cin>>arr[i];
 cont+=arr[i];}

 prom=cont/25; //promedio de la estatura

 cont2=0;  //contador para niños que estén bajo la estatura promedio
 for (i=0; i<25; i++)
 {if (arr[i]<prom)
 {cont2++;}}

 cont3=0; //contador para niños sobre la estatura promedio
 for (i=0; i<25; i++)
 {if (arr[i]>prom)
 cont3++;}
 
 cout<<"---------------------------------------------------------------------"<<endl;
 cout <<"La estatura promedio de los estudiantes es: "<<prom<<endl;
 cout<<"La cantidad de estudiantes que están abajo del promedio son: "<<cont2<<endl;
 cout<<"La cantidad de estudiantes que están arriba del promedio son: "<<cont3<<endl;
 cout<<"---------------------------------------------------------------------"<<endl;
}

int main ()
{

estatura();
}