 #include <iostream>
 using namespace std;

 string salarioTotal ()
 {
 int horasRegulares, horasExtra;
 float PagoHrsReg, PagoHrsExtra, salarioTotal, salarioReal;

 int nem;
 
 string result;
 
 int acum = 1; //comienza por el empleado 1

 
 cout<<"Ingrese el número de empleados"<<endl;
 cin>>nem;
 while (acum<=nem)
 { cout<<"Ingrese horas trabajadas en horario regular"<<endl;
 cin>>horasRegulares;
 cout<<"Ingrese horas trabajadas en horario extraordinario"<<endl;
 cin>>horasExtra;
 
 PagoHrsReg=horasRegulares*1.75;
 PagoHrsExtra=horasExtra*2.50;
 salarioTotal=PagoHrsExtra+PagoHrsReg;
 salarioReal=(salarioTotal)-(salarioTotal*10.25)/100;

 if (salarioTotal>500)
 {salarioReal=(PagoHrsExtra+PagoHrsReg)- ((PagoHrsExtra+PagoHrsReg)*20.25)/100;
 }
 result = to_string(salarioTotal)+ ", " +to_string(salarioReal); //hecho para poder printear total, salario real
 cout<<"------------------------------------------------------------------------------"<<endl;
 cout<<"Su salario total y con descuento, respectivamente, es: $"<<result<<endl;
 cout<<"------------------------------------------------------------------------------"<<endl;
 acum++;
 }

 return 0;
 }

 int main (){

     salarioTotal();
     return 0;
 }