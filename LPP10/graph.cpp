#include "graph.h"

void createGraph(Graph &G) {
  first(G) = Nil;
}

adrNode alokasiNode(infotype x) {
  adrNode N = new Node;
  info(N) = x;
  next(N) = Nil;
  child(N) = Nil;
  return N;
}

adrAdjacent alokasiAdjacent(infotype x) {
  adrAdjacent A = new Adjacent;
  info(A) = x;
  next(A) = Nil;
  return A;
}

void insertNode(Graph &G, adrNode P) {
  if ( first(G) == Nil ) {
    first(G) = P;
  } else {
    next(P) = first(G);
    first(G) = P;
  }
}

void insertAdjacent(adrNode N, adrAdjacent P) {
  if ( child(N) == Nil ) {
    child(N) = P;
  } else {
    next(P) = child(N);
    child(N) = P;
  }
}

adrNode findNode(Graph G, infotype x) {
  adrNode P;
  if ( first(G) == Nil ) {
    return Nil;
  } else {
    P = first(G);
    do {
      if ( info(P) == x ) {
        return P;
      }
      P = next(P);
    } while ( P != Nil);
    return Nil;
  }
}

adrAdjacent findAdjacent(adrNode N, infotype x) {
  adrAdjacent P;
  if ( child(N) == Nil ) {
      return Nil;
  } else {
    P = child(N);
    do {
      if ( info(P) == x ) {
        return P;
      }
      P = next(P);
    } while ( P != Nil );
    return Nil;
  }
}

void connectNode(Graph &G, infotype a, infotype b) {
  adrNode A, B;
  adrAdjacent adjA, adjB;
  if ( first(G) == Nil ) {
    cout<<"Graph Empty"<<endl;
  } else {
    adjA = alokasiAdjacent(a);
    adjB = alokasiAdjacent(b);
    insertAdjacent(findNode(G,a),adjB);
    insertAdjacent(findNode(G,b),adjA);
  }
}

void printGraph(Graph G) {
  adrNode P;
  adrAdjacent Q;
  P = first(G);
  while ( P!= Nil ) {
    cout<<"Node "<<info(P)<<" : ";
    Q = child(P);
    while ( Q != Nil ) {
      cout<<info(Q)<<", ";
      Q = next(Q);
    }
    cout<<endl;
    P = next(P);
  }
}

void editNode(Graph G, infotype x, infotype y)
{
    adrNode P,Q;
    adrAdjacent R;
    if ( first(G) == Nil )
    {
        cout<<"Graph Empty"<<endl;
    }
    else
    {
        P = first(G);
        while ( P!= Nil )
        {
            if ( info(P) == x )
            {
                info(P) = y;
                Q = first(G);
                while ( Q!= Nil )
                {
                    R = child(Q);
                    while ( R!= Nil )
                    {
                        if ( info(R) == x )
                        {
                            info(R) = y;
                        }
                        R = next(R);
                    }
                    Q = next(Q);
                }
            }
            P = next(P);
        }
    }
}

void deleteAdjacent(adrNode N, infotype x)
{
    adrAdjacent P,Q;
    if ( child(N) == Nil )
    {
        cout<<"Adjacent Empty"<<endl;
    }
    else
    {
        P = child(N);
        while ( P!= Nil )
        {
            if ( info(P) == x )
            {
                if ( P == child(N) )
                {
                    child(N) = next(child(N));
                    next(P) = Nil;
                }
                else
                {
                    next(Q) = next(P);
                    next(P) = Nil;
                }
            }
            Q = P;
            P = next(P);
        }
    }
}

void disconnectNode(Graph &G, infotype a, infotype b) {
  adrNode A,B;
  adrAdjacent adjA, adjB;
  if ( first(G) == Nil ) {
    cout<<"Graph Empty"<<endl;
  } else {
    adjA = alokasiAdjacent(a);
    adjB = alokasiAdjacent(b);
    deleteAdjacent(findNode(G,b),a);
    deleteAdjacent(findNode(G,a),b);
  }
}

void deleteNode(Graph &G, infotype x)
{
    adrNode P,Q;
    adrAdjacent R,S;
    if ( first(G) == Nil )
    {
        cout<<"Graph Empty"<<endl;
    }
    else
    {
        P = first(G);
        while ( P!=Nil )
        {
            if ( info(P) == x )
            {
                if ( P == first(G) )
                {
                    first(G) = next(first(G));
                    next(P) = Nil;
                }
                else
                {
                    next(Q) = next(P);
                    next(P) = Nil;
                }
            }
            Q = P;
            P = next(P);
        }
        P = first(G);
        while ( P!= Nil )
        {
            R = child(P);
            while ( R != Nil )
            {
                if ( info(R) == x )
                {
                    if ( R == child(P) )
                    {
                        child(P) = next(child(P));
                        next(R) = Nil;
                    }
                    else
                    {
                        next(S) = next(R);
                        next(R) = Nil;
                    }
                }
                S = R;
                R = next(R);
            }
            P = next(P);
        }
    }
}
