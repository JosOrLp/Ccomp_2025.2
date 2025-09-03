#include <iostream>

using namespace std;

int main()
{
    /**
        *BUCLE WHILE

             while (condicion) {
                intruccion1
                intruccion2
                intruccion3
                ...
                intruccionN
             }
    */
    int i = 1 ;
    while(i <= 10)
    {
        cout << i << endl;
        i = i + 1;
    }
    cout << "------------------------------------------------" << endl;
    i = 9 ;
    while(i >= 1)
    {
        cout << i << endl;
        i = i - 1;
    }
    cout << "------------------------------------------------" << endl;
    //imprimir multilos de 3 FORMA 1
    i = 1 ;
    int b;
    while(b < 100)
    {
        cout << b << endl;
        b = i * 3;
        i = i + 1;
    }

    cout << "------------------------------------------------" << endl;

    //imprimir multilos de 3 FORMA 2
    i = 1 ;

    while(i < 34)
    {

        cout << i * 3 << endl;
        i = i + 1;
    }

    cout << "------------------------------------------------" << endl;

    //imprimir multilos de 3 FORMA DEL PROFESOR
    i = 1 ;

    while(i < 100)
    {
        if ((1 % 3) == 0)
            cout << i << " ";
        i = i + 1;
    }

}
