#include <iostream>
using namespace std;
int main()
{
    int num[20];
    for (int i = 0; i < 20; i++)
    {
        cout<<"Digite el vector nuumero: "<<i+1<<"\n";
        cin>>num[i];
        if (num[i]==0)
        {
            break;
        }
    }
    cout<<"numeros en inverso \n";
    for (int i = 20; i >= 1; i--)
    {
        if (num[i]!=0)
        {
            cout<<" esta el numero "<<num[i]<<"\n";
        }
    }
    return 0;
}