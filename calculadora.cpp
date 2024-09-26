#include <iostream>
using namespace std;

int main()
{
    int a,b,c,operacion;

    cout<<"Ingrese la operacion que desea hacer: ";
    cout <<"\n 1. Sumas \n 2. Restas";
    cin>>operacion;
    if (operacion ==1 ) {
    cout<<"ingrese los numeros para sumar: ";
    cin>>a;
    cin>>b;
    c= a+b;
    cout<<"El resultado de la suma es: "<< c;
    }
    if (operacion ==2) {
    cout<<"ingrese dos numeros a restar";
    cin>>a;
    cin>>b;
    c= a-b;
    cout<<"El resultado de su resta es: " << c;
    }
    return 0;
}