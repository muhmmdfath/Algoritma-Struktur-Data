#include <iostream>
using namespace std;

int main()
{
   cout << "Nama: Muhammad Fatih 'Ad-Li\n";
   cout << "NIM : 32602200017\n";
   int i,j,n,data[10],simpan,k;
   cout<<"masukkan banyak data= ";
   cin>>n;
   
   for(i=1;i<=n;i++)
   {
      cout<<"data "<<i<<" = ";cin>>data[i];
   }
   cout<<"awal = ";
       
   for(i=1;i<=n;i++)
      cout<<data[i]<<" ";
      cout<<endl;
 
      for(i=1;i<n;i++)
      {
        for(j=1;j<n;j++)
         {
            if(data[j]<data[j+1])
            {
               simpan=data[j];
               data[j]=data[j+1];
               data[j+1]=simpan;
            }
         }
      }
      cout<<"hasil= "; 
      for(i=1;i<=n;i++)
      cout<<data[i]<<" ";
   return 0;
}