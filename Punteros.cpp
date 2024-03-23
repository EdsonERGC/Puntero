#include <iostream>

using namespace std;

int main() {
    // Inicializar un puntero
    int edad, *p_edad;
    edad = 18;
    p_edad = &edad;

    cout << "Edad Valor: " << *p_edad << endl;
    cout << "Edad Direccion: " << p_edad << endl;
    cout << "------------" << endl;

    *p_edad = 24;
    cout << "Edad Valor: " << *p_edad << endl;
    cout << "Edad Direccion: " << p_edad << endl;

    // Crear una nueva variable y asignarla al mismo puntero
    cout << "------Nueva variable ------" << endl;
    int edad2 = 18;
    p_edad = &edad2;

    cout << "Edad Valor: " << *p_edad << endl;
    cout << "Edad Direccion: " << p_edad << endl;

    // Cambiar el valor de la nueva variable a través del puntero
    cout << "------Nueva valor ------" << endl;
    *p_edad = 30;

    cout << "Edad Valor: " << *p_edad << endl;
    cout << "Edad Direccion: " << p_edad << endl;

    cout << "------d------" << endl;
    int numero;
    int* p_numero = №
    *p_numero = 11;
    cout << "Valor: " << *p_numero << endl;
    cout << "Direccion: " << p_numero << endl;

    system("PAUSE");
    return 0;
}
