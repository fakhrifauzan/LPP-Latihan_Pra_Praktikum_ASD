#ifndef CIRCULAR_H_INCLUDED
#define CIRCULAR_H_INCLUDED

#include <iostream>

using namespace std;

#define Nil NULL
#define next(P) (P)->next
#define first(L) (L).first
#define info(P) (P)->info

typedef int infotype;
typedef struct ElmList *address;

struct ElmList{
  infotype info;
  address next;
};

struct List{
  address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
address findElm(List L, infotype x);
void printInfo(List L);

#endif // CIRCULAR_H_INCLUDED
