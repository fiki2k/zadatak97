// Program treba naci koliko ima pozitivnih i negativnih brojeve u polju.

#include<stdio.h>
#include<conio.h>

int main()
{
    int polje[10], pozitivni = 0, negativni = 0, i;
    printf("Unesite 10 brojeva: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &polje[i]);
    for (i = 0; i < 10; i++)
    {
        if(polje[i] >= 0)
   {
 		pozitivni++;
   }
   else
   {
 		negativni++;
   }
 }
  
 printf("\n  Broj pozitivnih brojeva u polju je = %d ", pozitivni);
 printf("\n  Broj negativnih brojeva u polju je = %d ", negativni);
 return 0;
}
