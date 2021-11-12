#include "Secuencia.h"
#include <vector>
using std::vector;

#ifndef GRAFO_H
#define GRAFO_H 

class Grafo{
    private:
        vector<Secuencia*> secuencia;

	public:
		Grafo(vector<Secuencia*>);
        Grafo();
};

#endif