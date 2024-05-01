#include <stdio.h>

int main()
{
    printf ("Nama : Muhammad Fatih 'Ad-Li\n");
    printf ("Nim : 32602200017\n"); 
    printf ("------------------------------\n");

int i,j,n;

printf("program membuat persegi\n");
printf("=======================\n");
printf("\n");
printf("Masukkan ukuran persegi : "); 
scanf("%d", &n);

for (i=1;i<=n;i++)
{
      if ((i==1)||(i==n))
      {
            for (j=1;j<=n;j++)
            printf("*");
            printf("\n");
      }
      else
      {
            for (j=1;j<=n;j++)
            {
                  if ((j==1)||(j==n))
                        printf("*");
                  else
                        printf(" ");
            }
            printf("\n");

      }
}
}