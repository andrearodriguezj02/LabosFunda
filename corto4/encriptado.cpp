#include <iostream>
using namespace std;

int frase ()
{

int n;
char arr[n];

cout<<"Ingrese los caracteres de su frase (tomar en cuenta espacios):"<<endl;
cin>>n;

cout<<"Ingrese la frase: "<<endl;
for (int i=0; i<n; i++)
{cin>>arr[i];}

cout<<"La frase encriptada es: "<<endl;

for (int i=0; i<=n; i++)
{
switch (arr[i])
{
 case 'm':
 arr[i]='0';
 break;

 case 'u':
 arr[i]='1';
 break;

 case 'r':
 arr[i]='2';
 break;

 case 'c':
 arr[i]='3';
 break;

 case 'i':
 arr[i]='4';
 break;

 case 'e':
 arr[i]='5';
 break;

 case 'l':
 arr[i]='6';
 break;

 case 'a':
 arr[i]='7';
 break;

 case 'g':
 arr[i]='8';
 break;

 case 'o':
 arr[i]='9';
 break;

 default:
 arr[i]=arr[i];
 break;

}
}

}


int main ()
{

frase ();


}