#include "bstree.h"

address alokasi(infotype x){
    address N;
    N = new Node;
    info(N) = x;
    left(N) = NULL;
    right(N) = NULL;
    return N;
}

void insertNode(address &root, infotype x){
    if(root != NULL){
        if(x < info(root)){
            insertNode(left(root),x);
        } else if(x > info(root)){
            insertNode(right(root),x);
        }
    } else {
        root = alokasi(x);
    }
}

address findNode(infotype x, address root){
    if (root != NULL){
        if(info(root) < x){
            findNode(x,left(root));
        } else if (info(root) > x){
            findNode(x,right(root));
        } else if (info(root) == x){
            return root;
        }
    } else {
        return NULL;
    }
}

void printInOrder(address root){
    if(root != NULL){
        printInOrder(left(root));
        cout << info(root) << " - ";
        printInOrder(right(root));
    }
}

int hitungNode(address root){
    if (root == NULL){
        return 0;
    } else {
        return hitungNode(left(root)) + hitungNode(right(root)) + 1;
    }
}

int hitungTotalInfo(address root){
    if (root == NULL){
        return 0;
    } else {
        return hitungTotalInfo(left(root)) + hitungTotalInfo(right(root)) + info(root);
    }
}

int hitungKedalaman(address &root){
    if(root == NULL){
        return 0;
    } else {
        int kiri = hitungKedalaman(left(root));
        int kanan = hitungKedalaman(right(root));
        if (kiri > kanan){
            return kiri+1;
        } else {
            return kanan+1;
        }
    }
}
