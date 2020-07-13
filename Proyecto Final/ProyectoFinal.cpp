#include <iostream>
#include <string>
const int longCad=20;
using namespace std;

struct costoPorArticulo //se define una estructura con los datos de cada articulo
{
    char nombreArticulo[longCad+1];
    int cantidad;
    float precio;
    float CostoPorArticulo;
};

//se define una función que incorpore los datos de cada articulo a un arreglo

void datos(int n, costoPorArticulo cadaArt[n]) 
{ 
    cout<<"Ingrese el nombre del artículo, la cantidad, y su debido precio unitario: "<<endl;
    string nombre;
    for (int i=0; i<n; i++)
    {   
        cin.ignore(100,'\n'); //se coloca en esta posición específicamente
        cout<<"Nombre del artículo (POR FAVOR INGRESAR MENOS DE 12 CARACTERES): "<<endl;
        getline(cin, nombre, '\n'); 
        strncpy(cadaArt[i].nombreArticulo, nombre.c_str( ),longCad); //se incorpora el nombre del arreglo de caracteres al string
        cout<<"Digite la cantidad: "<<endl;
        cin>>cadaArt[i].cantidad;
        cout<<"Digite el precio: "<<endl;
        cin>>cadaArt[i].precio;
        
    }
 
}

void costo(int n, costoPorArticulo cadaArt2[n]) //se define una función que calculará el costo por cada art.
{   
    datos(n, cadaArt2);

    for (int i=0; i<n; i++)
    {
       cadaArt2[i].CostoPorArticulo = cadaArt2[i].cantidad*cadaArt2[i].precio;

    }

}

void contenido(int n, costoPorArticulo despliegue[n])//se define una función que despliega los datos de cada art. 
{
    costo(n, despliegue);

    for (int i=0; i<n; i++)
    {   
        cout<<" _____________________________________________________ "<<endl;
        cout<<endl;
        cout<<"     Artículo: "<<despliegue[i].nombreArticulo<<endl;
        cout<<"     Cantidad de "<<despliegue[i].nombreArticulo<<": "<<despliegue[i].cantidad<<endl;
        cout<<"     Precio unitario por "<<despliegue[i].nombreArticulo<<": "<<despliegue[i].precio<<endl;
        cout<<"     Costo total "<<despliegue[i].nombreArticulo<<": "<<despliegue[i].CostoPorArticulo<<endl;
        cout<<"______________________________________________________"<<endl;
        cout<<endl;
    }

}

//la función es tipo float, int devolvía el resultado en entero

float suma(int n, costoPorArticulo suma[n])//se define una función que suma los subtotales de cada art. 
{
    float costoTotal=0; //se crea una variable que contendrá el precio de la compra
    for (int i=0; i<n; i++)
    {
        costoTotal+=(float)suma[i].CostoPorArticulo;
    }
 return costoTotal;
}


int main ()
{
    int cantArt;
    cout<<"Por favor ingrese el número de artículos a comprar: "<<endl;
    cin>>cantArt;

    costoPorArticulo cadaArt[cantArt];

    contenido(cantArt, cadaArt);
    
    cout<<" *************************************************"<<endl;
    cout<<endl;
    cout<<"      El costo total de la compra es de: $";
    cout<<suma(cantArt,cadaArt)<<endl;
    cout<<endl;
    cout<<" *************************************************"<<endl;
    cout<<endl;
    
}

