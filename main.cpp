#include <iostream>
#include <fstream>
#include <vector>
#include "leer_crear.cpp"

using namespace std;

int main() {
    ifstream archivo;
    archivo.open("subasta.txt",ios::in|ios::out);
    string producto;
    string precio;
    string ofertante;
    string linea;
    vector<string> objetos;
    while(archivo.is_open()){
        getline(archivo,producto,'\n');
        getline(archivo,ofertante,);
        getline(archivo,precio,'\n');

        objetos.emplace_back(producto,ofertante,precio);
        if(linea==""){
            break;
        }
    }
    archivo.close();
    return 0;
}