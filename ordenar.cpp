//
// Created by Alejandro  Otero on 2019-11-07.
//


#include <fstream>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct orden{
    map<string,int> precios;
    vector<string> valores;
    void eliminar();
    void ordenar();
};

void orden::ordenar(){
    for(auto i=this->valores.begin();i!=this->valores.end();i++){

    }
}

//void orden::eliminar() {
//    map<string,int>::iterator it;
//    string repetido=this->precios.begin()->first;
//    for(it=this->precios.begin();it!=this->precios.end();it++){
//        if (repetido==it->first){
//            this->precios.erase(this->precios.find(repetido));
//        }
//    }
//}

