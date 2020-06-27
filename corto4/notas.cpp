#include <iostream>
using namespace std;

void llenadoMatriz (int n, float matriz [][5]);
void nota(int n, float matriz[][5]);

void llenadoMatriz (int n, float matriz [n][5])
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<"Ingrese la nota "<<j+1<<" del estudiante "<<i+1<<endl;
            cin>>matriz[i][j];
        }
 
    }


}

void nota (int n, float matriz[n][5])
{
 float prom;
 float notasAlum[n][5];
 
 
 for (int i=0; i<n; i++)
  {
      for (int j=0; j<5; j++)
        {
            matriz[i][j]*=0.2;
            prom+=matriz[i][j];
            
        }
     cout<<"El promedio del estudiante "<<i+1<< " es: "<<prom<<endl;
     prom=0;
  }


}

int main ()
{
 int n;
 cout<<"Ingrese la cantidad de estudiantes: "<<endl;
 cin>>n;

 float matriz[n][5];

    llenadoMatriz (n, matriz);
    nota (n,matriz);

    return 0; 

}