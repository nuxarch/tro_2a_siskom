// materi string
#include <iostream>

using namespace std;

int main()
{
    string firstName = "John ";
    string lastName = "Doe\n";
    string fullName = firstName + lastName;
    cout << fullName;

    firstName = "John";
    firstName.append(" Red ");
    lastName = "Doe";
    fullName = firstName + " Dwaine " + lastName;
    cout << fullName;
    cout << endl
         << firstName.length() << lastName.length() << endl;
    firstName[3] = 'e';
    cout << "mengakses via index[]" << endl;
    cout << firstName[0] << endl;
    cout << firstName[1] << endl;
    cout << firstName[2] << endl;
    cout << firstName[3] << endl;
    cout << firstName[4] << endl;
    cout << "mengakses via .at()" << endl;
    cout << firstName.at(0) << endl;
    cout << firstName.at(1) << endl;
    cout << firstName.at(2) << endl;
    cout << firstName.at(3) << endl;
    cout << firstName.at(4) << endl;

    string parts = "busi \"Volta\" ";
    cout << parts << endl;

    int tahun_lahir;
    string nama;

    cout << "masukkan nama anda:";
    getline(cin, nama);
    cout << "masukkan tahun lahir:";
    cin >> tahun_lahir;
    cout << "umur " << nama << " adalah:" << 2024 - tahun_lahir << " Tahun" << endl;
    return 1;
}
