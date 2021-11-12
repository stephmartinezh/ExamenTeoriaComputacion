#include "EdgeData.h"

EdgeData::EdgeData(string i, string f, int p){
    inicio = i;
    finalV = f;
    peso = p;
}

EdgeData::EdgeData(){
    
}

string EdgeData::getInicio(){
    return inicio;
}

string EdgeData::getFinal(){
    return finalV;
}

int EdgeData::getPeso(){
    return peso;
}