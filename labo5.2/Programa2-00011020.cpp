#include <iostream>
#include <ctime>
using namespace std;

long tiempo()
{

time_t ahorita1= time(0);
tm*hora=localtime(&ahorita1);

cout<<"La fecha y hora normal es: "<<asctime(hora); //el orden importa. si los cout están seguidos al final, ambos
                                            // mostrarán la primera hora que esté, ignorando la segunda. 
                                            //solución: hacer cout después de cada proceso. 


time_t sumado= ahorita1+1;
tm*hora1=localtime(&sumado);

cout<<"La fecha y hora más 1 segundo es: "<<asctime(hora1);
return 0;

}

int main ()
{

    tiempo ();
    return 0;
}