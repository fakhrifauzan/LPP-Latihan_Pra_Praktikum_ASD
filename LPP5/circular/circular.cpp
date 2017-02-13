#include "circular.h"

void createList(List &L) {
  first(L) = NULL;
}

address alokasi(infotype x) {
  address P = new ElmList;
  info(P) = x;
  next(P) = NULL;
  return P;
}

void dealokasi(address &P) {
  delete P;
}

void insertFirst(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    next(P) = P;
  } else {
    address Q = first(L);
    next(P) = Q;
    while(next(Q) != first(L)){
      Q = next(Q);
    }
    first(L) = P;
    next(Q) = P;
  }
}

void insertLast(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    next(P) = P;
  } else {
    address Q = first(L);
    while(next(Q) != first(L)) {
      Q = next(Q);
    }
    next(Q) = P;
    next(P) = first(L);
  }
}

address findElm(List L, infotype x) {
  address P = first(L);
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
    return P;
  } else {
    do {
      if (info(P) == x) {
        return P;
      }
      P = next(P);
    } while (P != first(L));
    return P;
  }
}

void deleteFirst(List &L, address &P) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else if(next(first(L)) == first(L)){
    P = first(L);
    first(L) = NULL;
    next(P) = NULL;
  } else {
    address Q = first(L);
    while(next(Q) != first(L)) {
      Q = next(Q);
    }
    P = first(L);
    next(Q) = next(P);
    first(L) = next(P);
    next(P) = NULL;
  }
}

void deleteLast(List &L, address &P) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else if(next(first(L)) == first(L)){
    P = first(L);
    first(L) = NULL;
    next(P) = NULL;
  } else {
    P = first(L);
    address Q = first(L);
    while(next(Q) != first(L)) {
      Q = next(Q);
    }
    while(next(P) != Q){
      P = next(P);
    }
    next(P) = next(Q);
    next(Q) = NULL;
  }
}

void insertAfter(List &L, address Prec, address P){
  if (first(L) == NULL) {
    first(L) = P;
    next(P) = P;
  } else if (next(Prec) == first(L)) {
    insertLast(L,P);
  } else {
    next(P) = next(Prec);
    next(Prec) = P;
  }
}

void deleteAfter(List &L, address Prec, address &P){
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else if (next(first(L)) == first(L)) {
    P = first(L);
    first(L) = NULL;
    next(P) = NULL;
  } else if (next(Prec) == first(L)) {
    P = first(L);
    next(Prec) = next(P);
    first(L) = next(P);
    next(P) = NULL;
  } else {
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
  }
}

void printInfo(List L) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else {
    address P = first(L);
    do {
      cout << info(P) << endl;
      P = next(P);
    } while (P != first(L));
  }
}
