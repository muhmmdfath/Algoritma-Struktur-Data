#include <stdio.h>

int main(){
    printf ("Nama : Muhammad Fatih 'Ad-Li\n");
    printf ("Nim : 32602200017\n"); 
    printf ("------------------------------\n");
    
    int l = 0;
    int j = 0;
    
    while (j <= 10)
   {
    int k = j;
    j++;
   
    while (k <= l)
    {
        printf("%d ", k);
        k++;
    }
    l+=2;
    printf("\n");
   }
   
}