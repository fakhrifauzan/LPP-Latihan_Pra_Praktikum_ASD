#include <iostream>
#include "siswa.h"

bool input_nilai(siswa &s, int posisi, double nilai){
    if ((posisi >= 0 && posisi <= 9) && (nilai >= 0 && nilai <= 100)){
        s.nilai[posisi] = nilai;
        return true;
    } else{
        return false;
    }
}

double rata2_nilai(siswa s){
    double jumlah = 0;
    int counter = 0;
    for (int i=0; i<10; i++){
        if (s.nilai[i] > 0 && s.nilai[i] <= 100){
            //jumlah = jumlah + s.nilai[i];
            jumlah += s.nilai[i];
            counter++;
        }
    }
    double rata2 = jumlah/counter;
    return rata2;
}

void tampil_siswa(siswa s){
    cout << "Nama : " << s.nama << endl;
    for(int i=0; i<10; i++){
        cout << "Nilai " << i << " : " << s.nilai[i] << endl;
    }
}

void reset_nilai(siswa &s){
    for(int i = 0; i < 10;i++){
        s.nilai[i] = NULL;
    }
}

