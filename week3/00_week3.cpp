/*
tugas week 3:
tugas 1:
Buatlah program untuk menghitung umur suatu kendaraan
dari input tahun sekarang
contoh:
input:
masukkan tahun produksi : 1990
masukkan tahun sekarang : 2024
output:
umur kendaraan anda adalah : 34 tahun

tugas 2:
Buatlah program yang bisa mengetahui bahwa sebuah bilangan itu
adalah ganjil atau genap
contoh:
input:
masukkan angka anda : 1
output:
angka ganjil

tugas 3:
Buatlah program untuk menampilkan informas kendaraan berdasar merek
contoh:

input:
masukkan brand motor anda : honda

output:
warna motor : kuning
kapasitas mesin : 150 cc
kapasitas bahan bakar : 30 l
jenis rangka: eshaft
jenis motor : sport
 */

#include <iostream>

using namespace std;

int isiTangki = 10;
double nilaiSuhu = 50.55;
char nilaiUAS = 'A';
string predikatKelas = "sangat baik";
bool statusMahasiswa = true;

int nilai1, nilai2, nilai3;

int decimal;
int _string;
string status = "asdf sdf";
bool nilai5;
char predikat = 'C';

const int detikPerMenit = 60;
int umurPengguna;
int main()
{
    cout << "isi var tangki adalah : " << isiTangki << "liter" << endl;
    cout << "isi var nilai suhu adalah : " << nilaiSuhu << " Celc" << endl;
    cout << "isi var nilai UAS adalah : " << nilaiUAS << "(unggul)" << endl;
    cout << "isi var predikat Kelas adalah : " << predikatKelas << "memuaskan" << endl;
    cout << "isi var status Mahasiswa adalah : " << statusMahasiswa << "(aktif)" << endl;

    nilai1 = 50;
    nilai2 = 50;
    nilai3 = 100;
    cout << "nilai total :" << nilai1 + nilai2 + nilai3 << endl;
    // detikPerMenit = 10;

    cout << "=======================program umur=======================" << endl;
    cout << "Masukkan umur anda:";
    cin >> umurPengguna;
    cout << "Umur anda adalah :" << umurPengguna << " Tahun" << endl;

    cout << "=======================program kalkulator penjumlahan=======================" << endl;
    int angka1, angka2, jumlah;
    cout << "masukkan angka ke 1:";
    cin >> angka1;
    cout << "masukkan angka ke 2:";
    cin >> angka2;
    jumlah = angka1 + angka2;
    cout << "jumlah angka ke-1 (" << angka1 << ") + angka ke-2(" << angka2 << ") = (" << jumlah << ")" << endl;

    return 1;
}
