#include <iostream>
#include <string>
using namespace std;
int main ()
{

string str1;
cout << "Ingrese una palabra"<<endl;
cin >> str1;

if (str1[0] == str1[str1.length()-1])
{
    cout << "La palabra ingresada inicia y finaliza con la misma letra"<<endl;
}
else 
{ cout << "La palabra ingresada no inicia ni finaliza con la misma letra"<<endl;}

}