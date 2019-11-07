//
// Created by Alejandro  Otero on 2019-11-07.
//


#include <fstream>
#include <iostream>
#include <map>
using namespace std;

struct leer{

};

void leer::eliminar() {
    map<string,int>::iterator it;
    string repetido=this->precios.begin()->first;
    for(it=this->precios.begin();it!=this->precios.end();it++){
        if (repetido==it->first){
            this->precios.erase(this->precios.find(repetido));
        }
    }
}

//template<typename T, typename T2, typename T3>
//void resultado(map<T2, T> valores, T mayor, T3 promedio, T menor) {
//    ofstream resultado;
//    resultado.open("resultado.txt");
//    while (resultado.is_open()) {
            
//    }

//}
