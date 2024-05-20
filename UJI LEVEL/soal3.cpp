#include<iostream>
using namespace std;
int main() {
    double panjang, lebar, tinggi,hasil;
    int pil;
    cout << "= = = = = = = = = = = = = = = = = = = = = =\n";
    cout << "Menu Perhitungan Bidang Datar Bangun Ruang\n";
    cout << "= = = = = = = = = = = = = = = = = = = = = =\n";
    cout << "1. Luas Persegi" << endl;
    cout << "2. Luas Persegi Panjang" << endl;
    cout << "3. Volume Kubus\n";
    cout << "4. Volume Balok\n";
    cout <<  "= = = = = = = = = = = = = = = = = = = = = =\n";
    cout << endl << endl;
    cout << "Masukan Pilihan Anda: ";
    cin>>pil;
    if(pil==1){
        cout << "Masukan Panjang Sisi : ";
        cin >> panjang;
        hasil = panjang * panjang;
        cout << "Luas Persegi tersebut adalah " << hasil << " cm^2";
    } else if(pil==2){
        cout << "Masukan Panjang : ";
        cin >> panjang;
        cout << "Masukan Lebar : ";
        cin >> lebar;
        hasil = panjang * lebar;
        cout << "Luas Persegi Panjang tersebut adalah " << hasil << " cm^2";
    } else if(pil == 3) {
        cout << "Masukan Panjang Sisi : ";
        cin >> panjang;
        hasil = panjang * panjang * panjang;
        cout << "Volume Kubus tersebut adalah " << hasil << " cm^3";
    } else if(pil==4) {
        cout << "Masukan Panjang : ";
        cin >> panjang;
        cout << "Masukan Lebar : ";
        cin >> lebar;
        cout << "Masukan Tinggi : ";
        cin >> tinggi;
        hasil = panjang * lebar * tinggi;
        cout << "Volume Balok tersebut adalah " << hasil << " cm^3";
    } else { cout << "Pilihan Anda Tidak Terdaftar"; }

    return 0;
}
