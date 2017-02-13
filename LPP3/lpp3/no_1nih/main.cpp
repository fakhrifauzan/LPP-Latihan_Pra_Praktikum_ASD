#include <iostream>
#include <conio.h>
#include "singlelist.h"

using namespace std;

int main()
{
    List L;
    address P1 = NULL;

    createList(L);

    // cout << "...1..." << endl;
    // printInfo(L);
    //
    // cout << "...2..." << endl;
    // deleteFirst(L,P1);
    // deleteLast(L,P1);
    //
    // cout << "...3..." << endl;
    // P1 = alokasi(10);
    // insertFirst(L,P1);
    //
    // P1 = alokasi(20);
    // insertFirst(L,P1);
    //
    // printInfo(L);
    //
    // cout << "...4..." << endl;
    // P1 = alokasi(6);
    // insertFirst(L,P1);
    //
    // P1 = alokasi(30);
    // insertLast(L,P1);
    //
    // printInfo(L);
    //
    // cout << "...5..." << endl;
    // P1 = findElm(L,20);
    // cout << "Info P1 = " << info(P1) << endl;
    // cout << "P1 = " << P1 << endl;
    //
    // cout << "...6..." << endl;
    // P1 = findElm(L,13);
    // cout << "P1 = " << P1 << endl;
    //
    // cout << "...7..." << endl;
    // deleteLast(L,P1);
    // printInfo(L);
    //
    // cout << "...8..." << endl;
    // cout << "Info P1 = " << info(P1) << endl;
    // cout << "P1 = " << P1 << endl;
    //
    // cout << "...9..." << endl;
    // dealokasi(P1);
    // cout << "P1 = " << P1 << endl;
    //
    // cout << "...10..." << endl;
    // deleteFirst(L,P1);
    // insertLast(L,P1);
    // printInfo(L);
    //
    // cout << "...11..." << endl;
    // deleteLast(L,P1);
    // cout << "Info P1 = " << info(P1) << endl;
    //
    // cout << "...12..." << endl;
    // dealokasi(P1);
    // deleteLast(L,P1);
    // dealokasi(P1);
    // deleteLast(L,P1);
    // dealokasi(P1);
    // printInfo(L);
    //
    // cout << endl;

    int pilih;

    while (pilih != 4) {
      cout << "=======================" << endl;
      cout << "    SOAL LPP 3 NO 2    " << endl;
      cout << "=======================" << endl;
      cout << "1. Masukan Data" << endl;
      cout << "2. Cari Data" << endl;
      cout << "3. Lihat Daftar" << endl;
      cout << "Pilih : ";
      cin >> pilih;

      switch (pilih) {
        case 1:
          infotype y;
          cout << "Masukan Angka: ";
          cin >> y;
          insertFirst(L,alokasi(y));
          cout << "Data Bernilai : " << y << "Telah dimasukkan";
          cout << endl;
          break;
        case 2:
          infotype z;
          address cari;
          cout << "Masukan Angka untuk mencari data: ";
          cin >> z;
          cari = findElm(L,z);
          if (cari != 0) {
            cout << "Data ditemukan di: " << &cari;
          } else {
            cout << "Data tidak ditemukan";
          }
          cout << endl;
          break;
        case 3:
          printInfo(L);
          cout << endl;
      }
    }

    getch();
    return 0;
}
