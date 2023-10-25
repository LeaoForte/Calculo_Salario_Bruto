#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float sb,sl,tx=0.0;
    cout << "\n Introduza SB:\n";
    cin >> sb;
    if(sb<0)cout<<"\nSalário Inválido;\n";
    else{
        if(sb<=1000)tx=0.10;
        else if (sb<=1500)tx=0.15;
        else if(sb<=2000)tx=0.23;
        else if(sb>=2000)tx=0.35;

        sl=sb*(1-tx);
        cout <<sl << "   " << sb << "   " << "   " << tx;
    }
        return 0;
}
