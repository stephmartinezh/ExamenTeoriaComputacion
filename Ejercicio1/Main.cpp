#include"Grafo.h"
#include "Secuencia.h"
#include "Conjunto.h"
#include "Vertex.h"
#include "Edge.h"
#include "ListVertex.h"
#include "ListEdge.h"
#include "EdgeData.h"

#include <iostream>
#include <string>
using namespace std;

void opcionInput();

int main(){
    cout<<"Ing lo siento este ejercicio no lo pude terminar :(, por lo menos intente\n\n";
    opcionInput();
    return -1;
}

void opcionInput(){
    //ListEdge* listaE = new ListEdge();
    vector<EdgeData*> listaAnteriorE;
    vector<string> listaAnterior;
    
    int nVertices;
    cout<<"Ingrese el numero de vertices: ";
    cin>>nVertices;
    for(int i = 0; i < nVertices; i++){
        string vertices;
        cout<<"Ingrese el vertice: ";
        cin>>vertices;
        listaAnterior.push_back(vertices);
    }
    ListVertex* listVertex= new ListVertex(listaAnterior);
    Vertex* vertex = new Vertex(listVertex);
    /*cout<<vertex->getSize();
    cout<<listVertex->getSize();
    listVertex->print();
    int nEdges;
    cout<<"Ingrese el numero de aristas: ";
    cin>>nEdges;
    for(int i = 0; i < nEdges; i++){
        cout<<"Ingrese el primer vertice: ";
        string primerV;
        cin>>primerV;
        cout<<"Ingrese el primer vertice: ";
        string segundoV;
        cin>>segundoV;
        cout<<"Ingrese el peso de la arista: ";
        int peso;
        cin>>peso;
        EdgeData* edgeData = new EdgeData(primerV, segundoV, peso);
        listaAnteriorE.push_back(edgeData);
    }
    for(int i = 0; i < listaAnteriorE.size(); i++){
        cout<<listaAnteriorE.at(i)->getInicio()<<" ";
        cout<<listaAnteriorE.at(i)->getFinal()<<" ";
        cout<<listaAnteriorE.at(i)->getPeso()<<" ";
    }*/
    //Edge* edge = new Edge(&listaAnteriorE);
} 