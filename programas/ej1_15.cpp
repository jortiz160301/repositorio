#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x0 = sqrt(2); //transcribo las fórmulas del libro a lenguaje de programación
double y1 = pow(2,0.25);
double pi0 = 2 + sqrt(2);
double x1=0.5*(sqrt(x0)+(1/sqrt(x0)));
double x2=0.5*(sqrt(x1)+(1/sqrt(x1)));
double y2 = (y1*sqrt(x1)+(1/sqrt(x1)))/(y1+1);
double pi1 = pi0*(((x1 +1)/(y1+1)));
double pi2 = pi1*(((x2 +1)/(y2+1)));

cout<< "pi0 = "<<pi0<<endl;
cout<< "pi1 = "<<pi1<<endl;
cout<< "pi2 = "<<pi2<<endl;
}
