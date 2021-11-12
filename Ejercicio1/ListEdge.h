#include "EdgeData.h"
#include <vector>
using std::vector;
#include<string>
using std::string;


#ifndef LISTEDGE_H
#define LISTEDGE_H

class ListEdge{
    private:
        vector<EdgeData*> listaE;

    public:
        ListEdge(vector<EdgeData*>);
        ListEdge();
        //vector<string> getListEdge();
};

#endif