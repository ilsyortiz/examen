#include <iostream>
#include <fstream>
using namespace std;
void enviar_a_archivo() {
    ofstream archivo("exam.txt", ios::app);
    if (!archivo.is_open()) {
        cout << "Error.\n";
        return;
    }
    string dato;
    cout << "Ingrese una frase: ";
    getline(cin, dato);
    archivo << dato << endl;
    archivo.close();
    cout << "Dato enviado correctamente al archivo.\n";
}
int main() {
    enviar_a_archivo();
    return 0;
}
