
// listing program ini melingkupi materi
#include <iostream>

using namespace std;

int main()
{
    cout << "contoh  operator aritmatika +" << endl;
    int a = 10;
    int b = 20;
    int hasil = 2 + 4; // hasil <- 6
    hasil = hasil + a; // 6 + 10 = 16
    hasil = hasil + b; // 16 + 20 = 36
    cout << "var hasil :" << hasil << endl;

    cout << "contoh  operator aritmatika %(modulus)" << endl;
    a = 1;
    b = 2;
    hasil = a % b; // 10 % 2=0
    cout << "var hasil :" << hasil << endl;

    cout << "contoh  operator aritmatika ++(increment) dan --(decrement)" << endl;
    a = 1;
    b = 2;
    ++a;
    a++;
    b--;
    --b;
    cout << "var a :" << a << endl;
    cout << "var b :" << b << endl;

    cout << "contoh operator assignments" << endl;
    a = 10;
    b = 1;
    b += 2; // b = b+2  --> b = 1 + 2
    cout << "var b :" << b << endl;
    a %= b; // a = a%b --> a = 10 % 3
    cout << "var a :" << a << endl;

    bool x = true;
    bool y = true;
    bool z = false;
    x &= y; // x = x & y --> x = true & true
    y |= z; // y = y | z --> y = true | false
    cout << "Hasil var x:" << x << endl;
    cout << "Hasil var y:" << y << endl;

    cout << "contoh operator perbandingan" << endl;
    a = 20;
    b = 21;
    cout << "contoh operator perbandingan ==:" << (a == b) << endl;          // 0
    cout << "contoh operator perbandingan !=:" << (a != b) << endl;          // 1
    cout << "contoh operator perbandingan <:" << (a < b) << endl;            // 1
    cout << "contoh operator perbandingan <=:" << (a <= b) << endl;          // 1
    cout << "contoh operator perbandingan >:" << (a > b) << endl;            // 0
    cout << "contoh operator perbandingan >=:" << (a >= b) << endl;          // 0
    cout << "contoh operator logika && :" << ((a == b) && (a != b)) << endl; // 0
    cout << "contoh operator logika || :" << ((a == b) || (a != b)) << endl; // 1
    cout << "contoh operator logika ! :" << !((a == b) || (a != b)) << endl; // 0

    return 1;
}
