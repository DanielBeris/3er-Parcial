#include <iostream>
using namespace std;
int main()
{
    int p,numero,cont;
    cout<<"Digite un numero de posiciones ";
    cin>>p;
    int num[p];
    for (int i = 1; i < p+1; i++)
    {
        cout<<"Digite numero "<<i<<"\n";
        cin>>numero;
        num[i]=numero;
    }
    for (int i = 1; i < p+1; i++)
    {
        cout<<"Los numeros integrados son: "<<num[i]<<"\n";
        if (num[i]>0)
        {
            cont=cont+1;
        }
    }
    cout<<"Hay "<<cont<<" numeros positivos";
    return 0;
}