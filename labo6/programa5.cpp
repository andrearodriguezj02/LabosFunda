#include <iostream>
using namespace std;

int main ()
{
    int n, cont; 
    int arr[100];
 n=100, cont=0;
 cout<<"Los números impares entre 1 y 100 son: "<<endl;

 for (int i=100; i>0; i--)
 {arr[i]=n--;
 if (arr[i]%2!=0)
 {cout<<arr[i]<<endl;}}
    
}
