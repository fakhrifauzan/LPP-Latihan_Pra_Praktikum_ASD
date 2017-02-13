#include <iostream>

using namespace std;
int bil;

void satuan(int bil){
    switch(bil){
    case 0 :
        cout<<" Nol ";
        break;
    case 1 :
        cout<<" Satu ";
        break;
    case 2 :
        cout<<" Dua ";
        break;
    case 3 :
        cout<<" Tiga ";
        break;
    case 4 :
        cout<<" Empat ";
        break;
    case 5 :
        cout<<" Lima ";
        break;
    case 6 :
        cout<<" Enam ";
        break;
    case 7 :
        cout<<" Tujuh ";
        break;
    case 8 :
        cout<<" Delapan ";
        break;
    case 9 :
        cout<<" Sembilan ";
        break;
    case 10 :
        cout<<" Sepuluh ";
        break;
    case 11 :
        cout<<" Sebelas ";
        break;
    }
}

void konversi(int bil){
    if (bil<=11) {
        satuan(bil);
    }
    else if ((bil>11) && (bil<=19)) {
        konversi(bil%10);
        cout<<"Belas";
    }
    else if ((bil>=20)&&(bil<=99)){
        konversi(bil/10);
        cout<<"Puluh";
        konversi(bil%10);
    }
    else if ((bil>=100)&&(bil<=199)){
        cout<<"Seratus";
        konversi(bil%100);
    }
    else if ((bil>=200)&&(bil<=999)) {
        konversi(bil/100);
        cout<<"Ratus";
        konversi(bil%100);
    }
}

int main()
{
    cout << "Hello world!" << endl;
    cout << "Masukan Bilangan (0-999): ";
    cin >> bil;
    if (bil <= 999){
        konversi(bil);
    } else{
        cout << "Input Salah!" ;
    }
    return 0;
}
