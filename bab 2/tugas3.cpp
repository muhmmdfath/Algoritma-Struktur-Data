#include <iostream>
using namespace std;

main(){

    cout << "Nama: Muhammad Fatih 'Ad-Li\n";
    cout << "NIM : 32602200017\n";

    int baris, kolom;
    typedef int matrik[3][2];
    int element1[4][3];
    int element2[3][3];
    int hasil_jumlah[3][3], clrscr[3][2], hasil_kurang[3][3], hasil_kali[3][3];
    
            
    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2; kolom++)
        {
            cout << "elemen A["<<baris<<"]["<<kolom<<"] = ";
            cin >> element1[baris][kolom];
        }
        
    }
    
    cout << endl;

    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2; kolom++)
        {
            cout << "elemen B["<<baris<<"]["<<kolom<<"] = ";
            cin >> element2[baris][kolom];
        }
        
    }

    cout<<endl;

    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2; kolom++)
        {
        hasil_jumlah[baris][kolom]=element1[baris][kolom] + element2[baris][kolom];
        hasil_kurang[baris][kolom]=element1[baris][kolom] - element2[baris][kolom];
        hasil_kali[baris][kolom]=element1[baris][kolom] * element2[baris][kolom];    
        }
        
    }
    cout<<"hasil penjumlahan elemen A dan elemen B adalah : "<<endl;

    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2 ; kolom++)
        {
            cout<<"hasil_jumlah ["<<baris<<"]["<<kolom<<"] = "<<hasil_jumlah[baris][kolom]<<endl;
        }
        
    }

    cout<<endl;

    cout<<"hasil pengurangan elemen A dan elemen B adalah : "<<endl;

    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2 ; kolom++)
        {
            cout<<"hasil_kurang ["<<baris<<"]["<<kolom<<"] = "<<hasil_kurang[baris][kolom]<<endl;
        }
        
    }

    cout<<endl;
    cout<<"hasil perkalian elemen A dan elemen B adalah : "<<endl;

    for ( baris = 1; baris <= 3; baris++)
    {
        for ( kolom = 1; kolom <= 2 ; kolom++)
        {
            cout<<"hasil_kali ["<<baris<<"]["<<kolom<<"] = "<<hasil_kali[baris][kolom]<<endl;
        }
        
    }
    
}