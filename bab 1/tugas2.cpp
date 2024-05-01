#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Nama : Muhammad Fatih 'Ad-Li" << endl;
    cout << "Nim : 32602200017" << endl;
    cout << "------------------------------" << endl;
    
    char jenis;
    int panjang, lebar, luas, keliling;
    float diagonal;
    cout << "pilih Luas<L>, Keliling<K>, Diagonal<D> : ";
    cin >> jenis;

    if (jenis == 'L' || jenis == 'l')
    {
        cout << "panjang = ";
        cin >> panjang;
        cout << "lebar = ";
        cin >> lebar;
        luas = panjang * lebar;
        
        cout << "Luas = " << luas << endl;
    }
    
    else if (jenis == 'K' || jenis == 'k')
    {
        cout << "panjang = ";
        cin >> panjang;
        cout << "lebar = ";
        cin >> lebar;
        keliling = 2 * (panjang + lebar);
        cout << "Keliling = " << keliling << endl;
    }

    else if (jenis == 'D' || jenis == 'd')
    {
        cout << "panjang = ";
        cin >> panjang;
        cout << "lebar = ";
        cin >> lebar;
        diagonal = sqrt((panjang*panjang) + (lebar*lebar));
        cout << "Diagonal = " << diagonal << endl;
    }

    else
    {
        cout << "salah pilih" << endl;
    }
}