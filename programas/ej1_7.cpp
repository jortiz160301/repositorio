#include <iostream>
using namespace std;

int main(){
double num1, num2, suma, resta, mult, div;//declaración de variables
cout<<"¡¡¡Bienvenid@ a la mini calculadora CalcuTron!!! Por favor, introduzca dos números reales y se le calculará la suma, resta, multiplicación y división. (Recuerde solo escribir números o el resultado no tendrá sentido)."<<endl;
cin>> num1 >> num2;
suma = num1 + num2; //sumo
resta = num1 - num2;//resto
mult = num1 * num2;//multiplico
div = num1/num2;//divido
cout<< "Su suma es: "<< suma <<endl;//muestro los resultados en pantalla.
cout<< "Su resta es: "<< resta <<endl;
cout<< "Su multipicación es: "<< mult <<endl;
cout<< "Su división es: "<< div <<endl;
}
