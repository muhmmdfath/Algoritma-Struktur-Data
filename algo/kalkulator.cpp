#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int pilihan, num1, num2, i=0;
    float hasil[4];
    menu:
    cout << "\nPilih Operasi." << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;

    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    

    if (pilihan == 1) {
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        hasil[i] = num1 + num2;
        cout << num1 << " + " << num2 << " = " <<hasil[i]<<endl;
        i++;
    } else if (pilihan == 2) {
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        hasil[i] = num1 - num2;
        cout << num1 << " - " << num2 << " = " << hasil[i]<<endl;
        i++;
    } else if (pilihan == 3) {
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        hasil[i] = num1 * num2;
        cout << num1 << " * " << num2 << " = " << hasil[i]<<endl;
        i++;
    } else if (pilihan == 4) {
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        hasil[i] = (float)num1 / num2;
        cout << num1 << " / " << num2 << " = " << hasil[i]<<endl;
        i++;
    } else {
        cout << "Input salah"<<endl;
        return 0;
    }

    char ulang;
    cout<<"ingin melakukan operasi lain (y/t)?";
    cin>>ulang;

    if(ulang!='y'){
        i++;
        sort(hasil, hasil + i);
        cout<<"\nHasil setelah di sorting (ascending) : ";
        for(int j=0;j<i;j++){
            cout<<hasil[j]<<" ";
        }

        
    }else{
        goto menu;
    }
    
    return 0;
}
