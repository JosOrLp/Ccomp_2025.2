#include <iostream>

using namespace std;

int main()
{
    //para un caracter se usan comillas simples
    char car = 'A';

    int val = static_cast<int>(car);
    cout << sizeof (car) <<endl;
    cout << "El valor entero de  " << car <<"  es: " << val << endl;

    char car1 = 'ñ';

    int val1 = static_cast<int>(car1);
    cout << sizeof (car1) <<endl;
    cout << "El valor entero de  " << car1 <<"  es: " << val1 << endl;

    char car2 = '123';

    int val2 = static_cast<int>(car2);
    cout << sizeof (car2) <<endl;
    cout << "El valor entero de  " << car2 <<"  es: " << val2 << endl;

    char car3 = 'iuiyufh';  // si se pone varios datos solo se lee la ultima letra

    int val3 = static_cast<int>(car3);
    cout << sizeof (car3) <<endl;
    cout << "El valor entero de  " << car3 <<"  es: " << val3 << endl;
}
