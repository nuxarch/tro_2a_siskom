#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
1. N1234EC = 7 char
2. N1234ECC = 8 char
3. AG1234EC = 8 char
4. AG1234ECC = 9 char
 */
string platNomer = "N1233EC";
unsigned long jumlahChar = 0;
string noStringPlat;
int noAngkaPlat;
bool isGanjil;
int main()
{
    while (1)
    {
        cout << "masukkan plat no anda:";
        getline(cin, platNomer);
        // 1. hitung jumlah character var
        jumlahChar = platNomer.length();
        cout << "jumlah char dalam plat no: " << platNomer << ": " << jumlahChar << "character" << endl;
        // 2. hitung jumlah charakter 1 atau 2 diawa
        // jika karakter ke 2 dari var string adalah angka
        if (isdigit(platNomer[1]))
        {
            cout << "char ke -2 dari variabel string tersebut adalah angka" << endl;
            noStringPlat = platNomer.substr(1, 4);
        }
        else
        {
            cout << "char ke -2 dari variabel string tersebut adalah huruf" << endl;
            noStringPlat = platNomer.substr(2, 4);
        }

        // 3. konversi var angka dalam string ke int
        noAngkaPlat = stoi(noStringPlat);
        cout << "var int untuk plat :" << noAngkaPlat << endl;

        // 4. gunakan operator modulus 2 untuk memeriksa ganjil/genap
        isGanjil = noAngkaPlat % 2;
        if (isGanjil)
        {
            cout << "Plat No [" << platNomer << "] adalah Ganjil" << endl;
        }
        else
        {
            cout << "Plat No [" << platNomer << "] adalah Genap" << endl;
        }
    }
    return 0;
}
