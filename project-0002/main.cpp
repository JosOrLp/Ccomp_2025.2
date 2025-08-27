#include <iostream>

using namespace std;

int main ()
{
	/**
	 Los tipos de datos para manejar ENTEROS son:

		- short (en memoria RAM ocupa 2 bytes)
		- int ~ long  (en memoria RAm ocupa 4 bytes)
		- long long (en memoria ram ocupa 8 bytes)

	*/

	long long val1 = 10;
	unsigned short val_short = 65534;

    cout << "el valor 1 es: " << val_short << endl;
    cout << "el valor 1 es: " << val_short +1 << endl;
    cout << "el valor 1 es: " << val_short +2 << endl;
	cout << sizeof(val1) << endl;
	cout << sizeof(val_short) << endl;

	int val_shor = 655360;
    cout << "el valor 1 es: " << val_shor << endl;
    cout << "el valor 1 es: " << val_shor +1 << endl;
    cout << "el valor 1 es: " << val_shor +2 << endl;

    /**
         SHORT
            2 bytes

            1 byte ~ 8 bits
            1 bytes ~ 16 bits

            2 en binario es- > 010
            3 en binario es- > 011
            4 en binario es- > 100
            ...
            10 en binario es- > 1010
            ...
            255 en binario es- > 11111111
            256 en binario es- > 00000001 11111111

            65535 -> 11111111 11111111

             ...   |  1  |  1  |  1  |  1  |  1  |  1  |  1  |  1  |
             ...   | 2^7 | 2^6 | 2^5 | 2^4 | 2^3 | 2^2 | 2^1 | 2^0 |

*/
}
