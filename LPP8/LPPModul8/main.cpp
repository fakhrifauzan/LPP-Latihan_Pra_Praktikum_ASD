#include <iostream>

using namespace std;

int faktorial(int x) {
    if (x == 0){
        return 1;
    }
    return x*faktorial(x-1);
}

int fibonacci(int x) {
    if (x == 0){
        return 0;
    } else if (x == 1) {
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int total(int x) {
    if (x == 1){
        return 1;
    }
    return x+total(x-1);
}

int fpb(int x, int y) {
    if ((x < 0) || (y < 0)){
        return 0;
    } else if (x == y){
        return x;
    } else if (x < y){
        return fpb(x,(y-x));
    } else {
        //y<x
        return fpb(y,(x-y));
    }
}

int hitung_nol(int x) {
    if (x == 0){
        return 0;
    } else if ((x%10) == 0){
        return 1+hitung_nol(x/10);
    } else {
        //x mod 10! = 0
        return hitung_nol(x/10);
    }
}

int total_array(int a[], int x) {
    if (x == 0){
        return a[0];
    } else {
        return a[x]+total_array(a,x-1);
    }
}

int main()
{
    cout << "Hello world!" << endl;
    int x,y;
    int a[] = {3,5,6,8};
    cout << "Input Bil Fibonacci ke-: ";
    cin >> x;
    cout << "1. Fibonacci ke-" << x << " = " << fibonacci(x) << endl;
    cout << "Input Bil Faktorial dari: ";
    cin >> x;
    cout << "2. Faktorial dari " << x << " = " << faktorial(x) << endl;
    cout << "Input Bil mencari total dari: ";
    cin >> x;
    cout << "3. Total dari " << x << " = " << total(x) << endl;
    cout << "4. Total Array = " << total_array(a,3) << endl;
    cout << "Input Bil HItung NOL dari: ";
    cin >> x;
    cout << "5. Hitung nol dari " << x << " = " << hitung_nol(x) << endl;
    cout << "Mencari FPB (bil 1): ";
    cin >> x;
    cout << "Mencari FPB (bil 2): ";
    cin >> y;
    cout << "6. FPB dari " << x << " dan " << y << " adalah " << fpb(x,y) << endl;
    return 0;
}
