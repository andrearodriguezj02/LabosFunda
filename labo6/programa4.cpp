#include <iostream>
using namespace std;

int lecturaArreglo1 (int arreglo1[], int numArreglo)
{

 for (int i=0;i<numArreglo; i++)
 {cout<<"Ingrese el valor de la posición "<<i<<":"<<endl;
    cin>>arreglo1[i];}

 for (int i=0; i<numArreglo; i++)
 {cout<<"Los valores del primer arreglo son: "<<arreglo1[i]<<endl;}

}

int lecturaArreglo2(int arreglo2[], int numArreglo)

 {for (int i=0; i<numArreglo; i++)
 {cout<<"Ingrese el valor de la posición "<<i<<" del segundo arreglo: "<<endl;
 cin>>arreglo2[i];}

 for (int i=0; i<numArreglo; i++)
 {cout<<"Los valores del segundo arreglo son: "<<arreglo2[i]<<endl;}
}

int sumaArreglos(int arreglo1[], int arreglo2[], int numArreglo, int suma[])
{int x;
 for (int i=0; i<numArreglo ; i++)
 {suma[i]=arreglo1[i]+arreglo2[i];
 cout<<"--------------------------------------"<<endl;
 cout<<"Los valores del tercer arreglo son: "<<suma[i]<<endl;
 cout<<"--------------------------------------"<<endl;}
}

int main ()
{
 int numArreglo;
 cout<<"Ingrese el tamaño de los arreglos: "<<endl;
 cin>>numArreglo;
 int arreglo1m[numArreglo], arreglo2m[numArreglo], arreglo3m[numArreglo];

 lecturaArreglo1 (arreglo1m, numArreglo);
 lecturaArreglo2 (arreglo2m, numArreglo);
 sumaArreglos (arreglo1m, arreglo2m, numArreglo, arreglo3m);

  
}