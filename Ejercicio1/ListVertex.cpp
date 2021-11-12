#include "ListVertex.h"

ListVertex::ListVertex(vector<string> lista){
    listaV = lista;
}

ListVertex::ListVertex(){

}

void ListVertex::setList(vector<string> lista){
    listaV = lista;
}

void ListVertex::addElement(string elemento){
    listaV.push_back(elemento);
}

vector<string> ListVertex::getListVertex(){
    return listaV;
}

int ListVertex::getSize(){
    return listaV.size();
}

void ListVertex::print(){
    for (int i = 0; i < listaV.size(); i++){
        cout<<listaV.at(i)<<" ";
    }
    cout<<endl;
}