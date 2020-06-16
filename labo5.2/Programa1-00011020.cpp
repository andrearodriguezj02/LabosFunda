#include <iostream>
using namespace std;

int MCD()
{

int mayor, menor, residuo;

cout<<"Ingrese el número mayor"<<endl;
cin>>mayor;

cout<<"Ingrese el número menor"<<endl;
cin>>menor;

do
{
   residuo=mayor%menor;
   if (residuo!=0)
   {mayor=menor; menor=residuo;}

} while (residuo!=0);
cout<<"-----------------"<<endl;
cout<<"  El MCD es: "<<menor<<endl;
cout<<"-----------------"<<endl;

return 0;
}

int main ()
{

MCD ();
return 0;

}