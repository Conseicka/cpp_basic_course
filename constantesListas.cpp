#include<iostream>

using namespace std;

int main()
{
    int edad = 18;
    edad = 14;
    const char letra = 'A';
    int lista_edades[] = { 18, 24, 16 };
    lista_edades[1] = 26;
    
    cout << edad << endl;
    cout << letra << endl;
    cout << lista_edades[1];
}