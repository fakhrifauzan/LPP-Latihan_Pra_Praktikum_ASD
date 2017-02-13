#include <iostream>

using namespace std;

int x,a,b,spasi,c,temp;
int main()
{
    cout<<"Masukan Bilangan = ";
    cin >>x;
    cout<<"\n";
    if (x % 2 == 0){ c = x / 2; a = c; spasi = 0; temp = 0;
                    while (a>0) {spasi=temp;
                        for (int a=1;a<=c;a++){cout<<"*";}
                            while (spasi>0){cout<<" ";spasi=spasi-1;}
                                for (int b=1;b<=c;b++){cout<<"*";}
                                cout<<endl;
                                c=c-1; temp=temp+2; a=a-1;}}

    else {
        for (int a=x;a>=1;a--){
            if (a % 2 == 1) {
                temp = a/2;
                for (int y=temp;y<x;y++){cout<<" ";}
                for (int b=1;b<=a;b++){cout<<"*";}
                cout<<endl;
            }
        }
    }
    return 0;
}
