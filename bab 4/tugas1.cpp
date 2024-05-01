#include <iostream> 
#include <conio.h> 
using namespace std;
int pangkat (int y, int b){ 
    int hasil=1;
    for(int i=1;i<=b;i++){
        hasil=hasil*y;
    }

    return hasil;
}

int main(){ 
    int i,j;
    cout<< "Nama : Muhammad Fatih 'Ad-Li\n"; 
    cout<< "NIM : 32602200017\n\n";
    cout<<"**program Menghitung Pangkat**\n"; 
    cout<<"===============================\n";
    cout<<"Masukan Angka :"; 
    cin>>i;
    cout<<"Masukkan Pangkat :"; 
    cin>>j;
    cout<<"Hasilnya :"; 
    cout<<pangkat(i,j);
}
