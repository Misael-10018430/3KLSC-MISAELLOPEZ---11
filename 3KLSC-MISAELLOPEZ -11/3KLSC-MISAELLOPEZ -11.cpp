// 3KLSC-MISAELLOPEZ -11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int NUM, I, RESULTADO;

    cout << "Digite numero: ";
    cin >> NUM;

    I = 1;  

    while (I <= 10) {
        RESULTADO = NUM * I; 
        cout << NUM << " x " << I << " = " << RESULTADO << endl;
        I = I + 1;
    }

    cout << "Pulse una tecla: ";
    cin.ignore();
    cin.get();

    return 0;
}