/*Este es un programa para calcular una nómina, basado en el video que se nos ha dado de ayuda, realizando una serie de supuestos: los porcentajes de impuestos han sido sacados de las cantidades mencionadas en el vídeo, realizando la operación: x = (cantidad que desgravamos * 100)/la cantidad a la que desgravamos. Por ejemplo: 511,35€ es el 25,57% de 2000 porque (511,35*100)/2000 = 25.57. */
#include <iostream>
using namespace std;
int main() {
	double dinero_apartado; 
	double salario_bruto;
	double salario_neto;
	const double PORCIENTO_SEGURIDAD_SOCIAL = 0.2557; /*índice de variación porcentual que nos queda cuando descontamos el impuesto de seguridad social al dinero apartado por el jefe.*/
	const double PORCIENTO_IRPF = 0.1117;
	const double PORCIENTO_CONTING_COMUNES = 0.047;
	const double PORCIENTO_FORM_DESEMPLEO = 0.0165;
	double suma_porciento_neto = PORCIENTO_IRPF + PORCIENTO_CONTING_COMUNES + PORCIENTO_FORM_DESEMPLEO;

//declaración de variables de la versión avanzada
double hipoteca,imp_hipoteca;
double luz,imp_luz;
double agua,imp_agua;
double telf_internet,imp_telf_internet;
double gasolina,imp_gasolina;
double comida,imp_comida;
double ocio,imp_ocio;
double tabaco,imp_tabaco;
double gastos_comunitarios,imp_gastos_comunitarios;

double suma;
double suma_imp;
double ahorro;


cout << "Por favor, escriba el dinero apartado por su jefe: "; //pido el dinero que el jefe tiene apartado para luego aplicarle los impuestos
cin >> dinero_apartado;
salario_bruto = dinero_apartado - (PORCIENTO_SEGURIDAD_SOCIAL * dinero_apartado);
cout << "Su salario bruto es: "<< salario_bruto<< endl;
salario_neto = salario_bruto - (suma_porciento_neto * salario_bruto);
cout << "Su salario neto es: "<< salario_neto<< endl;

cout << "Por favor, escriba el dinero que gasta en la hipoteca cada mes: "<<endl;	//hipoteca
cin>>hipoteca;
cout<< "Gasta "<<hipoteca<<"€ al mes en hipoteca."<<endl;

cout << "Por favor, escriba el dinero que gasta en luz cada mes: "<<endl;	//luz
cin>>luz;
imp_luz = luz*0.57;
cout << "Gasta "<<luz<<"€, de los que " << imp_luz << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en agua cada mes: "<<endl;	//agua
cin>>agua;
imp_agua = agua * 0.10;
cout << "Gasta "<<agua<<"€, de los que " << imp_agua << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en teléfono e internet cada mes: "<<endl;	//telf e internet
cin>>telf_internet;
imp_telf_internet = telf_internet * 0.22;
cout << "Gasta "<<telf_internet<<"€, de los que " << imp_telf_internet << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en gasolina cada mes: "<<endl;	//gasolina
cin>>gasolina;
imp_gasolina = gasolina * 0.58;
cout << "Gasta "<<gasolina<<"€, de los que " << imp_gasolina << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en comida cada mes: "<<endl;	//comida
cin>>comida;
imp_comida = comida * 0.07;
cout << "Gasta "<<comida<<"€, de los que " << imp_comida << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en ocio cada mes: "<<endl;	//ocio
cin>>ocio;
imp_ocio = ocio * 0.18;
cout << "Gasta "<<ocio<<"€, de los que " << imp_ocio << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en tabaco cada mes: "<<endl;	//tabaco
cin>>tabaco;
imp_tabaco = tabaco * 0.82;
cout << "Gasta "<<tabaco<<"€, de los que " << imp_tabaco << " son impuestos."<<endl;

cout << "Por favor, escriba el dinero que gasta en gastos comunitarios cada mes: "<<endl; //gastos comunitarios
cin>>gastos_comunitarios;
cout<< "Gasta "<<gastos_comunitarios<<"€ al mes en gastos comunitarios"<<endl;

suma = hipoteca + luz + agua + telf_internet + gasolina + comida + ocio + tabaco + gastos_comunitarios;		//aquí sumo todos los gastos 
suma_imp = imp_hipoteca + imp_luz + imp_agua + imp_telf_internet + imp_gasolina + imp_comida + imp_ocio + imp_tabaco + imp_gastos_comunitarios; //aquí sumo todos los impuestos
ahorro = salario_neto - suma;

cout << "En total, usted paga "<< suma << "€ al mes, de los que "<< suma_imp <<" son impuestos."<<endl;//imprimo cuanto paga ycuanto queda para ahorrar
cout << "Usted se queda con "<<ahorro<<"€ de ahorro al mes."<<endl;
}
