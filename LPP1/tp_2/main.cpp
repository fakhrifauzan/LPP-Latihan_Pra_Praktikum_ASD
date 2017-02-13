#include <iostream>
using namespace std;

int pembilang1, penyebut1, pembilang2, penyebut2;
void pengurangan (int pmb1,int pny1, int pmb2, int pny2);
void pembagian (int pmb1,int pny1, int pmb2, int pny2);

int main ()
{
    cout << "Masukkan Pembilang 1 : " << endl;
    cin >> pembilang1;
    cout << "Masukkan Penyebut 1 : " << endl;
    cin >> penyebut1;
    cout << "Masukkan Pembilang 2 : " << endl;
    cin >> pembilang2;
    cout << "Masukkan Penyebut 2 : " << endl;
    cin >> penyebut2;
    pengurangan(pembilang1,penyebut1,pembilang2,penyebut2);
    pembagian(pembilang1,penyebut1,pembilang2,penyebut2);

    return 0;
}

void pengurangan(int pmb1,int pny1, int pmb2, int pny2){
    int pembilang,penyebut;
    penyebut = penyebut1 * penyebut2;
    pembilang = ((penyebut/penyebut1)*pembilang1) - ((penyebut/penyebut2)*pembilang2);
    cout << "Hasil Pengurangan : = " << penyebut << "/" << pembilang << endl;
}

void pembagian (int pmb1,int pny1, int pmb2, int pny2) {
    int pembilang,penyebut;
    pembilang = pembilang1 * penyebut2;
    penyebut = pembilang2 * penyebut1;
    cout << "Hasil Pembagian : = " << pembilang << "/" << penyebut << endl;}
