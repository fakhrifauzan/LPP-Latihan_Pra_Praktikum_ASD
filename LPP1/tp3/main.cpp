#include <iostream>

using namespace std;

int input;
int space = 1;

void bintang(int input);

int main(){
    cout << "Masukan angka : ";
    cin >> input;
    bintang(input);
    return 0;
}

void bintang(int input){
    int hasil = input%2;

    if(hasil == 0){
        for(int i=1; i<=input; i++){
            cout << "*";
        }
        cout << "\n";
        while(input>0){
            int j= input-2;
            int tempgenap = j/2;
            for(int i=1; i<=tempgenap; i++){
                cout << "*";
            }
            for(int i=0; i<=space; i++){
                cout << " ";
            }
            for(int i=1; i<=tempgenap; i++){
                cout << "*";
            }
            cout << "\n";
            space = space+2;
            input = j;
        }
    } else{
        for(int i=1; i<=input; i++){
        cout << "*";
        }
        cout << "\n";
        while(input>0){
            int tempganjil = (input-2);
            for(int i=1; i<=space; i++){
                cout << " ";
            }
            for(int i=1; i<=tempganjil; i++){
                cout << "*";
            }
            for(int i=1; i<=space; i++){
                cout << " ";
            }
            cout << "\n"8;
            space++;
            input=tempganjil;
        }
    }
}
