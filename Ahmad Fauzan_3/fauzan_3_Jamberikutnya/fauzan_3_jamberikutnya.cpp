#include<stdlib.h>
#include<stdio.h>
#include<iostream>

typedef struct{

        int jam;
        int menit;
        int detik;
        int db;
        int s=3600;
        int d=60;

}waktu;
waktu w;

main(){
      //
    do
    {
        system("cls");
        printf("Jam Awal \n");
        printf("Masukkan jam= ");
        scanf("%i",&w.jam);
        printf("Masukkan menit= ");
        scanf("%i",&w.menit);
        printf("Masukkan detik= ");
        scanf("%i",&w.detik);

        w.db=(w.jam*w.s)+(w.menit*w.db)+w.detik+1;

        printf("Hasilnya");
        printf("\njam baru = %d ",w.db/w.s);
        printf("\nmenit baru = %d ",w.db/w.db%w.db);
        printf("ndetik baru = %d ",w.db%w.d);

        return 0;
         }
