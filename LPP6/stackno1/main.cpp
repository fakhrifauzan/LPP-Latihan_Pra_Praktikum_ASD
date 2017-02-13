#include "stack.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Stack S;
    createStack(S);
    push(S,3);
    push(S,4);
    push(S,8);
    pop(S);
    push(S,2);
    push(S,3);
    pop(S);
    push(S,9);
    printInfo(S);
    cout << "Balik Stack" << endl;
    balikStack(S);
    printInfo(S);

    cout<<endl<<"============"<<endl<<endl;
    cout<<"Hello world!"<<endl;
    createStack(S);
    pushAscending(S,3);
    pushAscending(S,4);
    pushAscending(S,8);
    pushAscending(S,2);
    pushAscending(S,3);
    pushAscending(S,9);
    printInfo(S);
    cout<<"Balik Stack"<<endl;
    balikStack(S);
    printInfo(S);

    return 0;
}
