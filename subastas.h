//
// Created by Alejandro  Otero on 2019-11-07.
//

#ifndef PC3_SUBASTAS_H
#define PC3_SUBASTAS_H

#include <map>
#include <string>
#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

class subastas {
private:
    map<string,int> precios;
public:
    subastas(map<string,int> valores):precios{valores}{}
    float promedio(map<string,int>);
    int mayor_precio(map<string,int>);
    int menor_precio(map<string,int>);
};


#endif //PC3_SUBASTAS_H
