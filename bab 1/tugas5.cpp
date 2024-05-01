#include <iostream>
using namespace std;

main(){
    cout << "Nama : Muhammad Fatih 'Ad-Li" << endl;
    cout << "Nim : 32602200017" << endl;
    cout << "------------------------------" << endl;

    int pilihan;
    char ulang;

   while (pilihan>0)
   {
        cout<<"MENU PILIHAN"<<endl;
        cout<<"1. Dangdut"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Rock"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Pilihan Anda (1/2/3/4) : ";
        cin>>pilihan;

        switch (pilihan)
        {
        case 1:
            cout<<"Anda memilih Dangdut"<<endl;
            break;

        case 2:
            cout<<"Anda memilih Pop"<<endl;
            break;
        
        case 3:
            cout<<"Anda memilih Rock"<<endl;
            break;

        case 4:
            exit;
            return 0;

        default:
            cout<<"Kode yang anda masukkan salah!!.."<<endl;
        }
        cout<<"Ingin memilih menu lain (y/t)?";
        cin>>ulang;
        cout<<endl;
        while (ulang!= 'y')
        {
            cout<<"Terimakasih....";
            cout<<endl;
            return 0;
        }
        
   }

}
