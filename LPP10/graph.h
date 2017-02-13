#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#define Nil NULL

#include <iostream>

using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

typedef string infotype;
typedef struct Node *adrNode;
typedef struct Adjacent *adrAdjacent;

typedef struct Node
{
    infotype info;
    adrNode next;
    adrAdjacent child;
};

typedef struct Adjacent
{
    infotype info;
    adrAdjacent next;
};

typedef struct Graph
{
    adrNode first;
};

void createGraph(Graph &G);
adrNode alokasiNode(infotype x);
adrAdjacent alokasiAdjacent(infotype x);

void insertNode(Graph &G, adrNode P);
void insertAdjacent(adrNode N, adrAdjacent P);

adrNode findNode(Graph G, infotype x);
adrAdjacent findAdjacent(adrNode N, infotype x);

void connectNode(Graph &G, infotype a, infotype b);
void printGraph(Graph G);

void editNode(Graph G, infotype x, infotype y);
void deleteAdjacent(adrNode N, infotype x);
void disconnectNode(Graph &G, infotype a, infotype b);
void deleteNode(Graph &G, infotype x);

#endif // GRAPH_H_INCLUDED
