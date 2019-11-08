#include <iostream>
using namespace std;
int main() {
int entrada_segundos;//la variable que va a guardar el número de segundos que nosotros demos
int dias;
int horas;
int minutos;
int segundos;
cout << "Escriba el número de segundos que quiere convertir a dias, horas, minutos y segundos."<<endl;
cin >> entrada_segundos;
dias = entrada_segundos / (60*60*24);//60*60*24 es el número de segundos que tiene un día. Divido para saber el número de días que son.
horas = (entrada_segundos % (60*60*24)) / 3600;//calculo el módulo para transformar los segundos que han sobrado al transformar a días, en horas
minutos = ((entrada_segundos % (60*60*24)) % 3600) / 60;//calculo el módulo para transformar los segundos que han sobrado al transformar a horas, en minutos
segundos = ((entrada_segundos % (60*60*24)) % 3600) % 60;//calculo el módulo para obtener los segundos que han sobrado al transformar a minutos. 

cout << entrada_segundos << " son " << dias << " días, " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
}
