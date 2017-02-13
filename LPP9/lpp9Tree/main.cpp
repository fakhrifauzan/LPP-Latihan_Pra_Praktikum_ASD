#include <iostream>
#include "bstree.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    address root = NULL;
    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,6);
    insertNode(root,4);
    insertNode(root,5);
    insertNode(root,3);
    insertNode(root,6);
    insertNode(root,7);
    printInOrder(root);

    cout << endl;
    cout << "Kedalaman : " << hitungKedalaman(root) << endl;
    cout << "Jumlah Node : " << hitungNode(root) << endl;
    cout << "Total : " << hitungTotalInfo(root) << endl;
    return 0;
}
