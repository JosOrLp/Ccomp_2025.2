#include <iostream>

using namespace std;

int main()
{
    string espacio{"                "};
    int num; // declaramos el numero
    cout << "Ingrece un numero de 4 dijitos: " << endl;
    cin >> num; // asignamos el valor ingresado por teclado

    cout << "\n\n el numero ingresado es: " << num << endl;
    cout << "\n\n" << endl;
    //3254
    cout << espacio << num / 1000 << endl;         //3
    cout << espacio << (num % 1000) / 100 << endl; //2
    cout << espacio << (num % 100 )/ 10<< endl;    //5
    cout << espacio << num % 10 / 1 << endl;       //4
    return 0;

}
