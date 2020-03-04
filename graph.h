#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include "biblio.h"

class Graph
{
    private :
        std::queue<Sommet*> m_queueSommet;

    public :
        Graph (std::string nomFichier);

};

#endif // GRAPH_H_INCLUDED
