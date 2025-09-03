#include <iostream>

using namespace std;

int main()
{
    /**
    * Implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un "numero primo"
    //--------------SOLUCION-------------------
    int i = 0;
    int num;
    while (i == 0)

    {

        cout << "Ingrese un numero: ";

        cin >> num ;
        if ((num == 3 ) || (num == 2 ) || (num == 5)) {
            cout << "Es primo" << endl;
        }
        else if ((num % 3 == 0) || (num % 2 == 0) || (num % 5 == 0)){
            cout << "No es primo: " << endl;
        }

        else {
            cout << "Es primo" << endl;
        }
    }

    //----------------- SOLUCION DEL COMPAÑERO JORGE -----------------------

    long long n, i = 1, d = 0;
    cin >> n ;
    while( i <= n ){
        if ( n % i == 0){
            d++;
        }
        i++;
    }
    cout << ((d ==2) ? "primo" : "no primo");

    /**
     implemente un programa que solicite un numero por teclado
     e imprima los numeros primos menores que dicho numero*/
    //-----------SOLOUCION-------------------
    int numero;
    cout << "Esciba un numero: ";
    cin >> numero;
    int num = 0;
    while (num < numero){
        if (  ( (num == 3 ) || (num == 2 ) || (num == 5) || (num == 7) ) || !( (num % 3 == 0) || (num % 2 == 0) || (num % 5 == 0) || (num % 7 == 0) )  )
        {
            cout << num << endl;
        }
        else {
        }
        num++;
    }







    return 0;
}
