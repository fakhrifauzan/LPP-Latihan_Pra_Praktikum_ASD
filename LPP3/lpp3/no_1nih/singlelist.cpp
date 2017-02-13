#include "singlelist.h"

void createList(List &L) {
  first(L) = NULL;
}

address alokasi(infotype x) {
  address P = new ElmList;
  info(P) = x;
  return P;
}

void dealokasi(address &P) {
  delete P;
}

void insertFirst(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    next(first(L)) = NULL;
  } else {
    next(P) = first(L);
    first(L) = P;
  }
}

void insertLast(List &L, address P) {
  if (first(L) == NULL) {
    first(L) = P;
    next(first(L)) = NULL;
  } else {
    address q = first(L);
    while(next(q) != NULL) {
      q = next(q);
    }
    next(q) = P;
    next(next(q)) = NULL;
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
      if (info(P) == x) {
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
  } else {
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;
  }
}

void deleteLast(List &L, address &P) {
  if (first(L) != NULL) {
    P = first(L);
    if(next(P) != NULL) {
      while(next(next(P)) != NULL)
        P = next(P);
        next(P) = NULL;
    } else {
      first(L) = NULL;
    }
  }
}

void printInfo(List L) {
  if (first(L) == NULL) {
    cout << "List Kosong" << endl;
  } else {
    address P = first(L);
    cout << info(P) << endl;
    while (next(P) != NULL) {
      P = next(P);
      cout << info(P) << endl;
    }
  }
}
