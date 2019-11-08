#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x1 = 0;
double x2 = 0;
double x3 = 0;
double media = 0;
double desv_tip = 0;
cout<<"Escriba las valores de x1, x2 y x3 para calcular su media y desviación típica."<<endl;

cout<<"Escriba el valor de x1: "<< endl;
cin>> x1;

cout<<"Escriba el valor de x2: "<< endl;
cin>> x2;

cout<<"Escriba el valor de x3: "<< endl;
cin>> x3;

media = (x1 + x2 + x3)/3;
desv_tip = sqrt((pow((x1-media),2) + pow((x2-media),2) + pow((x3-media),2))/3);

cout <<"La media es "<< media <<"."<<endl;
cout <<"La desviación típica es " << desv_tip<<"."<<endl;
}
