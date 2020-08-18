//SEFA ENES ERGİN-sefaenesergin@gmail.com
#include <stdio.h>
int asalmi(int sayi)
{
    for(int i=2;i<sayi/2;i++)
    {
        if(sayi%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int asalbul(int sayi)
{
    int islemsayisi1=0,islemsayisi2=0;
    int tempsayi = sayi;
    while(asalmi(sayi)!=0)
    {
        islemsayisi1++;
        sayi++;
    }
    while(asalmi(tempsayi)!=0)
    {
        islemsayisi2++;
        tempsayi--;
    }
    if(islemsayisi1>islemsayisi2)
    {
        return tempsayi;
    }
    else
    {
        return sayi;
    }
}
int main ()
{
    int sayi;
    printf("Bir sayi gir: ");
    scanf("%d",&sayi);
    if(asalmi(sayi)==1)
    {
        printf("Girdiginiz sayiya en yakin asal sayi %d'dir.",asalbul(sayi));
    }
    else
    {
        printf("Sayi asaldir.");
    }
    return 0;
}
