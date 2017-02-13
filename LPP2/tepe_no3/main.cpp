#include <iostream>
#include "siswa.h"

using namespace std;

int main()
{
    siswa s;
    bool ok;

    reset_nilai(s);

    s.nama = "Budi";

    ok = input_nilai(s, 1, 90);
    cout << ok << endl;

    ok = input_nilai(s, 5, 815);
    cout << ok << endl;

    ok = input_nilai(s, 15, 75);
    cout << ok << endl;

    cout << rata2_nilai(s) << endl;

    tampil_siswa(s);
    return 0;
}
