#include <iostream>
using namespace std;

int main() {
    int numero;
    int primoNumero=1;
    int secondoNumero=1;
    cin>>numero;
    if(numero>=2) {
    cout<< primoNumero<<endl<<secondoNumero <<endl ;
        int i = 3;
        while (i++ <= numero) {
            cout << primoNumero + secondoNumero <<endl;
            if (primoNumero < secondoNumero)
                primoNumero += secondoNumero;

            else
                secondoNumero += primoNumero;
        }
    }
    else{
        cout<<"errore";
    }
   return 0;
}
