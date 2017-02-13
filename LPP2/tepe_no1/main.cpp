#include <iostream>

using namespace std;

void tampil(int arr_int[10]){
    for(int i=0; i<=9; i++){
        cout << arr_int[i] << " ";
    }
    cout << endl;
}

void tukar(int arr_int[10], int pos1, int pos2){
    int temp = arr_int[pos1];
    arr_int[pos1] = arr_int[pos2];
    arr_int[pos2] = temp;
}

void tukar_pointer(int *p1, int *p2){
    int temp_pointer = *p1;
    *p1 = *p2;
    *p2 = temp_pointer;
}

int main()
{
    int arr_int[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pointer1 = NULL, *pointer2 = NULL;

    tampil(arr_int);
    tukar(arr_int,3,5);
    tampil(arr_int);

    pointer1 = &arr_int[8];
    cout << *pointer1 << endl;

    pointer2 = &arr_int[1];
    cout << *pointer2  << endl;

    tukar_pointer(pointer1, pointer2);
    tampil(arr_int);

    return 0;
}
