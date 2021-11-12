#include "ListVertex.h"

#ifndef VERTEX_H
#define VERTEX_H

class Vertex:public ListVertex{
    private:
        ListVertex* lista;
    public:
        Vertex(ListVertex*);
        Vertex();
};

#endif