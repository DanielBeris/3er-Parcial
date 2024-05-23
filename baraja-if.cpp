#include <iostream>
using namespace std;
int main ()
{
    int carta;
    cout<<"Que carta es ";
    cin>>carta;
    if (carta==2 || carta==3 || carta==4 || carta==5 ||carta==6 || carta==7 || carta==8 || carta==9)
    {
    cout<<carta<<" no es ninguna figula y tampoco es as";
    }
    if (carta==1)
    {
        cout<<carta<<" es una As";
    }
    if (carta==10)
    {
        cout<<carta<<" es una Sota";
    }
    if (carta==11)
    {
        cout<<carta<<" es un caballo";
    }
    if (carta==12)
    {
        cout<<carta<<" es un Rey";
    }
    if (carta >=13)
    {
        cout<<carta<<" no es ninguna carta de la baraja";
    }
    return 0;
}