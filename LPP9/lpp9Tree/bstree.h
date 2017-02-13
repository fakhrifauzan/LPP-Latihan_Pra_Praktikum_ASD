#ifndef BSTREE_H_INCLUDED
#define BSTREE_H_INCLUDED

#include <iostream>
#define right(P) P->right
#define left(P) P->left
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct Node *address;

struct Node{
    infotype info;
    address left,right;
};

address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void printInOrder(address root);
int hitungNode(address root);
int hitungTotalInfo(address root);
int hitungKedalaman(address &root);

#endif // BSTREE_H_INCLUDED
