#include <stdio.h>
#include <stdlib.h>
struct GunSaatHocaDersS�n�f{

    char* Gun[15];
    int Saat;
    char* Hoca[20];
    char* Ders[30];
    char* S�n�f[5];


};
//d�ng�ler i�in

struct DersSayisi{
    int Maxsayi[15];


};



void DersProgramIn{


 for(i=0,i<Maxsayi,i++)
    printf("%d.Ders icin gun giriniz",i+1);
    scanf("%s,",GunSaatHocaDersS�n�f.Gun);



}





void DersProgramOutput{

 for (int i = 0; i < GunSaatHocaDersS�n�f->DersSayisi; i++) {
        printf("%s. Ders: %s, Gun: %s, Saat: %s\n",
               i + 1, GunSaatHocaDersS�n�f->dersler[i].dersAdi,
               GunSaatHocaDersS�n�f->dersler[i].gun,
               GunSaatHocaDersS�n�f->dersler[i].saat);


}

int main()
{

    return 0;
}
