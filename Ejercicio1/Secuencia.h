#include "Conjunto.h"
#include <vector>
using std::vector;

#ifndef SECUENCIA_H 
#define SECUENCIA_H

class Secuencia{
    private:
        vector<Conjunto*> vertex;
        vector<Conjunto*> edge;

	public:
		Secuencia(vector<Conjunto*>, vector<Conjunto*>);
};

#endif