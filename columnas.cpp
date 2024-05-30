#include <iostream>
#define Filas 4  
#define Columnas 3
using namespace std;
int main ()
{
    int tabla[Filas][Columnas];
    int suma[Columnas];
    for (int fila = 0; fila < Filas; fila++)
    {
        for (int columna = 0; columna < Columnas; columna++)
        {
            cout<<"DIgite el valor para la tabla: ";
            cin>>tabla[fila][columna];
        }
        
    }
    for (int  columna = 0; columna < Columnas; columna++)
    {
        suma[columna]=0;
        for (int fila = 0; fila < Filas; fila++)
        {
            suma[columna]+=tabla[fila][columna];
        }
        
    }
    int mayor_suma=suma[0];
    for (int columna = 1;columna < Columnas; columna++)
    {
        if(suma[columna]>mayor_suma)
        {
            mayor_suma=suma[columna];
        }
    }
    cout<<"La mayor suma de columnas es: "<<mayor_suma;
    return 0;
}