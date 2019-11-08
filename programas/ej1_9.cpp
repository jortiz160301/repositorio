#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a=0.0;
float b=0.0;
float c=0.0;
float resultado_suma_numerador=0.0;
float resultado_resta_numerador=0.0;
float resultado_suma;
float resultado_resta;

cout<<"Por favor, introduzca los valores de a, b y c para realizar una ecuación de segundo grado donde: [-b±√(b²-4*a*c)]/2*a. Se calculará tanto el resultado de la suma como el de la resta.(Por favor, introduzca solo números.)"<<endl;

cout<<"Introduzca el valor de a, luego pulse INTRO"<<endl;
cin>> a;
cout<<"Introduzca el valor de b, luego pulse INTRO"<<endl;
cin>> b;
cout<<"Introduzca el valor de c, luego pulse INTRO"<<endl;
cin>> c;

resultado_suma_numerador = -b+(sqrt((b*b)-(4*a*c)));
resultado_suma = resultado_suma_numerador /2*a;//separo la fórmula en dos para evitar problemas de compilación

resultado_resta_numerador = -b-(sqrt((b*b)-(4*a*c)));//separo la fórmula en dos para evitar problemas de compilación
resultado_resta = resultado_resta_numerador /2*a;

cout <<"El resultado de la suma es: " <<resultado_suma <<endl;//imprimo en pantalla los dos resultados.
cout <<"El resultado de la resta es: " <<resultado_resta <<endl;
}
