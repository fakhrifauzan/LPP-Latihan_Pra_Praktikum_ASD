#ifndef DOUBLELIST_H_INCLUDED
#define DOUBLELIST_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;

#define Nil NULL
#define first(L) (L).first
#define last(L) (L).last
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info

struct kendaraan{
  string nopol;
  string warna;
};

typedef kendaraan infotype;
typedef struct ElmList *address;

struct ElmList{
  infotype info;
  address next;
  address prev;
};

struct List{
  address first;
  address last;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
address findElm(List L, infotype x);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void printInfo(List L);

#endif // DOUBLELIST_H_INCLUDED
