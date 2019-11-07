#include <iostream>
#include <fstream>
#include <deque>

using namespace std;

int main() {
    ifstream archivo;
    archivo.open("subasta.txt",ios::in|ios::out);
    string producto;
    string precio;
    string ofertante;
    string linea;
    deque<string> productos;
    deque<string> ofertantes;
    deque<string> precios;
    while(archivo.is_open()){
        getline(archivo,producto,'\n');
        getline(archivo,ofertante);
        getline(archivo,precio);

        productos.push_back(producto);
        ofertantes.push_back(ofertante);
        precios.push_back(precio);
        if(linea==""){
            break;
        }
    }


    archivo.close();
    return 0;
}