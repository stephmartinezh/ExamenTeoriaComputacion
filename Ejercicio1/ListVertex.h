#include <vector>
using std::vector;
#include<string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;


#ifndef LISTVERTEX_H
#define LISTVERTEX_H

class ListVertex{
    private:
        vector<string> listaV;

    public:
        ListVertex(vector<string>);
        ListVertex();
        void setList(vector<string>);
        void addElement(string);
        vector<string> getListVertex();
        int getSize();
        void print();
};

#endif