#include <stdio.h>
#include <stdlib.h>
struct GunSaatHocaDersSýnýf{

    char* Gun[15];
    int Saat;
    char* Hoca[20];
    char* Ders[30];
    char* Sýnýf[5];


};
//döngüler için

struct DersSayisi{
    int Maxsayi[15];


};



void DersProgramIn{


 for(i=0,i<Maxsayi,i++)
    printf("%d.Ders icin gun giriniz",i+1);
    scanf("%s,",GunSaatHocaDersSýnýf.Gun);



}





void DersProgramOutput{

 for (int i = 0; i < GunSaatHocaDersSýnýf->DersSayisi; i++) {
        printf("%s. Ders: %s, Gun: %s, Saat: %s\n",
               i + 1, GunSaatHocaDersSýnýf->dersler[i].dersAdi,
               GunSaatHocaDersSýnýf->dersler[i].gun,
               GunSaatHocaDersSýnýf->dersler[i].saat);


}

int main()
{

    return 0;
}
