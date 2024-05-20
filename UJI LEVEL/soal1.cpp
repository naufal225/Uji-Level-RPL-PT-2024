#include<iostream>
using namespace std;
int main() {
    int u1 = 400;
    int pola = 39;
    int jumlahderet, jumlahbaris;
    jumlahbaris = 0;
    jumlahderet = 0;
    for(int i = 1; i <= 10; i++){
        jumlahbaris += 1;
        jumlahderet += u1;
        cout << u1 << ", ";
        u1 -= pola;
        pola -= 2;
    }

    cout << endl << "Jumlah baris & deret tersebut adalah " << jumlahbaris << " dan " << jumlahderet;

    return 0;
}
