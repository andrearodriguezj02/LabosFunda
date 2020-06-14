#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

 int numeroMagico ()
 { int numSecreto, acierto, acum, intentos;
 
 srand(time(NULL));

  numSecreto = rand()% 100+1; // random number from 1 thru 100

 acum = -3;// al sumar uno al acum(0) y restar uno al intento(5), en el tercer intento 
           //se rompía la condición acum<=intentos, solución: acum=-3

 intentos = 5; // número de intentos 

 while (acum<=intentos)
 { 
   cout<<"------------------------------------------------------"<<endl;
   cout<<"      DE YA NO QUERER JUGAR, PRESIONAR 101"<<endl;
   cout<<"------------------------------------------------------"<<endl;
   cout<<"Adivine el número. Usted tiene "<<intentos<<" Intentos"<<endl;
   cin>> acierto;
   cout<<endl;

   if (acierto==101)
   {cout<<"El juego ha terminado."<<endl;;
     break;}

    else if (numSecreto==acierto)
   {cout<<"¡Felicidades! Ha acertado."<<endl;
     break;}

    if (numSecreto<acierto)
   {cout<<"El número secreto es menor."<<endl;} 
   
   else if (numSecreto>acierto)
   {cout<<"El número secreto es mayor."<<endl;}

   if (acierto>101)
   {cout<<"El número secreto es de 1 a 100."<<endl;}

   else if (acierto<0)
   {cout<<"El número secreto es positivo."<<endl;}

   acum++;
   intentos--;} 
   cout<<"------------------------------------------------------"<<endl;
   cout<<"El número secreto era: "<<numSecreto<<". ¡Suerte a la próxima!"<<endl;

   return 0;}
 

 int main ()
 {
 numeroMagico ();
 return 0;
 }