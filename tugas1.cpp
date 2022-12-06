#include <iostream>

using namespace std;

int main()
{
    //declaring variables:
    string a;
    string b;
    string c;
    string d;
    string e;
    string alamat;

    //proses
    cout << "Nama jalan = ";
    cin >> a;

    cout << "Nomor rumah = ";
    cin >> b;

    cout << "RT = ";
    cin >> c;

    cout << "RW = ";
    cin >> d;

    cout << "Kota = ";
    cin >> e;

    alamat = a+b+c+d+e;
    cout << "Saya tinggal di jalan " << a << " No. " << b << "." << endl;
    cout << "RT " << c << "RW " << d << "Kota " << e << "." << endl;
    return 0;
}
