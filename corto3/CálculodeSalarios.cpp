 #include <iostream>
 using namespace std;

 int salarioTotal (int horasRegulares, int horasExtra)
 {

 float PagoHrsReg, PagoHrsExtra, salarioTotal, salarioReal;

 PagoHrsReg=horasRegulares*1.75;
 PagoHrsExtra=horasExtra*2.50;
 salarioTotal=PagoHrsExtra+PagoHrsReg;
 salarioReal=(salarioTotal)-(salarioTotal*10.25)/100;
 if (salarioTotal>500)
 {
 salarioReal=(PagoHrsExtra+PagoHrsReg)- ((PagoHrsExtra+PagoHrsReg)*20.25)/100;
 }
 return salarioTotal, salarioReal;
 }

 int main (){
 float horasRegulares,horasExtra;    
 cout<<"Ingrese sus horas trabajadas en horario regular"<<endl;
 cin>>horasRegulares;
 cout<<"Ingrese las horas trabajadas en horario extraordinario"<<endl;
 cin>>horasExtra;

 cout<<"Su salario total es: "<<salarioTotal(horasRegulares, horasExtra)<<endl;
 }