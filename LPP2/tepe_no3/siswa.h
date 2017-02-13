#ifndef SISWA_H_INCLUDED
#define SISWA_H_INCLUDED

using namespace std;

struct siswa{
    string nama;
    double nilai[10];
};

bool input_nilai(siswa &s, int posisi, double nilai);
double rata2_nilai(siswa s);
void tampil_siswa(siswa s);
void reset_nilai(siswa &s);

#endif // SISWA_H_INCLUDED
