#include "Conjunto.h"
#include "ListEdge.h"

#ifndef EDGE_H
#define EDEGE_H

class Edge:public Conjunto{
    private:
        vector<ListEdge*> lista;
    public:
        Edge(vector<ListEdge*>);
};

#endif