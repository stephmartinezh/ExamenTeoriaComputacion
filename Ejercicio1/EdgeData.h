#include <vector>
using std::vector;
#include <string>
using std::string;

#ifndef EDGEDATA_H
#define EDGEDATA_H

class EdgeData{
    private:
        string inicio, finalV;
        int peso;

    public:
        EdgeData(string, string, int);
        EdgeData();
        string getInicio();
        string getFinal();
        int getPeso();
};

#endif