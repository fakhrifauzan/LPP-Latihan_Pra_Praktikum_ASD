#include <iostream>
#include "doublelist.h"

using namespace std;

int main() {
    List L1, L2;
    kendaraan k1, k2, k3;
    address P;
    createList(L1);
    createList(L2);

    k1.nopol = "D0001DD";
    k1.warna = "merah";

    k2.nopol = "D0003XX";
    k2.warna = "kuning";

    k3.nopol = "D0005YY";
    k3.warna = "hitam";

    P = alokasi(k2);
    insertFirst(L1, P);

    P = alokasi(k1);
    insertFirst(L2, P);

    P = alokasi(k1);
    insertLast(L1, P);

    P = alokasi(k3);
    insertFirst(L2, P);

    printInfo(L1);
    cout << endl;
    printInfo(L2);

    return 0;
}
