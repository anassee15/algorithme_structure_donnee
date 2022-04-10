//
// Created by anasse.elboudir on 21/02/2022.
//

#ifndef ALGORITHME_STRUCTURE_DONNEE_GRAPHEMATRICE_H
#define ALGORITHME_STRUCTURE_DONNEE_GRAPHEMATRICE_H

#include <iostream>
#include <cmath>
#include <stack>
#include <queue>
#include "../Tools/Conversion.h"
#include "../File_priorite/PriorityQueue.h"

using namespace std;

class GrapheMatrice {

    int taille;
    bool* visited;
    bool* stacked;

    int** links = nullptr;
    stack<int> pile;
    queue<int> queue;

    PriorityQueue priorityQueue;

public:
    explicit GrapheMatrice(int nb);
    ~GrapheMatrice();

    // base du graph
    void display();
    void ajouterArc(char s1, char s2, int = 1);
    void ajouterArcOriente(char s1, char s2, int = 1);

    // propriete du graph
    int degre(char sommet);
    bool estFortementConnexe();
    bool estOriente();
    bool estPondere();
    bool estConnexe();

    // parcours
    void parcoursProfondeurRecursif();
    void parcoursProfondeurPile();

private:
    void visiteSommetProfondeurR(int index, bool = true);
    void visiteSommetProfondeurPile();
};


#endif //ALGORITHME_STRUCTURE_DONNEE_GRAPHEMATRICE_H
