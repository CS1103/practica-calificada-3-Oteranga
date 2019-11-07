//
// Created by Alejandro  Otero on 2019-11-07.
//

#include "subastas.h"

int subastas::mayor_precio(map<string,int> producto) {
    auto it=producto.rbegin();
    return it->second;
}

int subastas::menor_precio(map<string,int> producto) {
    map<string,int>::iterator it;
    it=producto.begin();
    return it->second;
}

float subastas::promedio(map<string, int> productos) {
    float total=0;
    int cantidad=0;
    float promedio;
    map<string,int>::iterator it;
    for(it=productos.begin();it!=productos.end();it++){
        total+=it->second;
        cantidad++;
    }
    promedio=total/cantidad;
    return promedio;
}


