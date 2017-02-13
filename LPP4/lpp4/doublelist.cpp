#include "doublelist.h"

void createList(List &L) {
  first(L) = NULL;
  last(L) = NULL;
}

address alokasi(infotype x) {
  address P = new ElmList;
  info(P) = x;
  next(P) = NULL;
  prev(P) = NULL;
  return P;
}

void dealokasi(address &P) {
  delete P;
}

void insertFirst(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    last(L) = P;
  } else {
    next(P) = first(L);
    prev(first(L)) = P;
    first(L) = P;
  }
}

void insertLast(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    last(L) = P;
  } else {
    next(last(L)) = P;
    prev(P) = last(L);
    last(L) = P;
  }
}

address findElm(List L, infotype x) {
  address P = first(L);
  bool found = false;
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
    P = NULL;
    return P;
  } else {
    while (found == false) {
      if (info(P).nopol == x.nopol) {
        found = true;
        return P;
      }
      if (next(P) == NULL) {
        P = NULL;
        break;
      } else {
        P = next(P);
      }
    }
    return P;
  }
}

void deleteFirst(List &L, address &P) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else if(first(L) == last(L)){
    P = first(L);
    first(L) = NULL;
    last(L) = NULL;
  } else {
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;
    prev(first(L)) = NULL;
  }
}

void deleteLast(List &L, address &P) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else if (first(L) == last(L)) {
    first(L) = NULL;
    last(L) = NULL;
  } else {
    P = last(L);
    last(L) = prev(P);
    next(last(L)) = NULL;
    prev(P) = NULL;
  }
}

void printInfo(List L) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else {
    address P = first(L);
    cout << "no polisi : " << info(P).nopol << endl;
    cout << "warna     : " << info(P).warna << endl;
    while (next(P) != NULL) {
      P = next(P);
      cout << "no polisi : " << info(P).nopol << endl;
      cout << "warna     : " << info(P).warna << endl;
    }
  }
}
