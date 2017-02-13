#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Graph G;
    createGraph(G);

    insertNode(G, alokasiNode("A"));
    insertNode(G, alokasiNode("B"));
    insertNode(G, alokasiNode("C"));
    insertNode(G, alokasiNode("D"));
    insertNode(G, alokasiNode("E"));
    insertNode(G, alokasiNode("F"));

    connectNode(G,"B","C");
    connectNode(G,"A","C");
    connectNode(G,"E","B");
    connectNode(G,"E","D");
    connectNode(G,"D","C");
    connectNode(G,"D","A");

    cout<<"View Graaph"<<endl;
    printGraph(G);

    cout<<endl<<"Disconnect A dan C"<<endl;
    disconnectNode(G,"A","C");
    printGraph(G);

    cout<<endl<<"Edit C menjadi X"<<endl;
    editNode(G,"C","X");
    printGraph(G);

    cout<<endl<<"Delete X"<<endl;
    deleteNode(G,"X");
    printGraph(G);

    return 0;
}
