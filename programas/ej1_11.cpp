#include <iostream>
#include <cmath>
using namespace std;
int main() {
double teoria;
double practicas;
double problemas;
double nota_final;

cout<<"Por favor, introduzca las notas de teoría, prácticas y problemas respectivamente separadas con un espacio."<<endl;
cin >> teoria >> practicas >> problemas;

nota_final = ((teoria*7) + (practicas*2) + (problemas*1))/10;
cout << "La nota final es de: " << nota_final << " puntos." << endl;
}
