#include <iostream>
#include <fstream>
using namespace std;
void archivo() {
    ifstream archivo("exam.txt");
    if (!archivo.is_open()) {
        cout << "Error.\n";
        return;
    }

    string linea;
    cout << "Datos del archivo:\n";
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {
    archivo();
    return 0;
}
