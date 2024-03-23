#include <iostream>

using namespace std;

int main() {
    int total = 0;
    int* p_notas;
    char res;
    p_notas = new int[total];
    
    do {
        cout << "Ingrese Nota[" << total << "]: ";
        cin >> p_notas[total];
        cout << "Dirección de p_notas: " << &p_notas << endl;
        total++;
        cout << "¿Desea ingresar otro dato (s/n)?: ";
        cin >> res;
    } while (res == 's');

    for (int i = 0; i < total; i++) {
        cout << "Nota " << i << ": " << p_notas[i] << endl;
        cout << "Dirección de p_notas: " << &p_notas << endl;
        p_notas++;
    }

    delete[] p_notas;
    system("PAUSE");
    return 0;
}
