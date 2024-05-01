#include <iostream>
using namespace std;

int main(){
    char a=64, nama[4][3][13] =
    {"Angsa","Anjing","Anoa",
    "Banteng","Badak","Beruang",
    "Camar","Capung","Cendrawasih",
    "Dara","Domba","Duyung",
    };
    cout<<"Daftar Hewan sesuai abjad : \n\n";
    
    for(int i=0; i<4; i++)
    {
    a++;
    cout<<"Kelompok ";
    cout<<a<<endl;
    
    for(int s=0; s<3; s++)
    {
        cout<<s+1;
        cout<<". ";
        cout<<nama[i][s];
        cout<<endl;
    }
    cout<<"\n";
    }


}