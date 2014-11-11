/* Odev No: 1
 * Ogrenci no: -----------
 * Mehemmed Şxiyev
 *
 * Not: Visual Studio 2013 ile yazılmıştır.
 **/
/*Program kütüphaneleri*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*Fonksiyon protipleri*/
int menu();
void Sorgula();
void Ucgen();
void Kare();
void Dikdortgen();
void EskenarDortgen();
void ParalelKenar();
bool Control(int);
/*main fonksiyon*/
int main() {
       int secim = menu(); //menude geri donen degeri secim degiskenine atiyoruz
       switch (secim)
       {
       case 1:
              system("cls");
              printf("\tUcgen Cizimi...\n");
              Ucgen();
              Sorgula();
              break;
       case 2:
              system("cls");
              printf("\tKare Cizimi...\n");
              Kare();
              Sorgula();
              break;
       case 3:
              system("cls");
              printf("\tDikdortgen Cizimi...\n");
              Dikdortgen();
              Sorgula();
              break;
       case 4:
              system("cls");
              printf("\tEskenar Dortgen Cizimi...\n");
              EskenarDortgen();
              Sorgula();
              break;
       case 5:
              system("cls");
              printf("\tParalel Kenar Cizimi...\n");
              ParalelKenar();
              Sorgula();
              break;
       case 0:
              exit(0);  //Programı sonlandırmak için Not: VisualStdio versiyonuna göre return çalışmıya biliyor.
              return 0; //Kullanici menuden 0 sectiginde main fonksiyonu return 0; degeri dondurerek programı kapatır.
              break;
       default:
              printf("\nHatali bir secim yaptiniz!\n");
              main(); 
              break;
       }
       _getch();
}
/*Menu fonksiyonu programimizin menusunu calistirir.*/
int menu() {
       int secim;
       printf("Hosh Geldiniz....\n");
       printf("\t1.Ucgen.\n");
       printf("\t2.Kare.\n");
       printf("\t3.Dikdortgen.\n");
       printf("\t4.Eskenar Dortgen.\n");
       printf("\t5.Paralel kenar.\n");
       printf("\t0.Cikis.\n");
       do
       {
              printf("Seciminiz:");
              scanf_s("%d",&secim);
              if (!Control(secim))
              {
                     printf("Hatali secim yaptiniz! ");
              }
              else 
                     break;
       } while (!Control(secim)); //do-while döngüsü kullanıcın 0,1,2,3,4,5 secimleri dışında sayi girmesini kontrol eder.
       return secim;
}

/*Ekrana Ucgen cizen fonksiyon*/
void Ucgen() {
       int boyut=0, i, j;
       printf("\nUcgenin boyutu:");
       scanf_s("%d", &boyut);
       for (i = 0; i < boyut; i++) { //1. for girilen boyut sayısı kadar alt satıra gecer
              for ( j = 0; j < i+1; j++) { //2. for her satirda bir * karekteri az yazmasini saglar.
                     printf("*");
              }//1.for
              printf("\n");
       }//2.for
}
/*Ekrana Kare cizen fonksiyon*/
void Kare() {
       int boyut = 0, i, j;
       printf("\nKarenin boyutu:");
       scanf_s("%d", &boyut);
       for (i = 0; i < boyut; i++) { //1. for girilen boyut sayısı kadar alt satıra gecer
              for ( j = 0; j < boyut; j++) { // 2. for girilen boyut sayisi kadar * karakteri yazar
                     printf("*");
              } //1.for
              printf("\n");
       }//2.for
}
/*Ekrana Dikdortgen cizen fonksiyon*/
void Dikdortgen() {
       int Boy = 0, En = 0, i, j;
       printf("\nEn degerini giriniz :");        
       scanf_s("%d", &En);
       printf("Boy degerini giriniz:");                        
       scanf_s("%d", &Boy);
       for (i = 0; i < Boy; i++) { //1. for girilen Boy sayısı kadar alt satıra gecer
              for ( j = 0; j < En; j++) { // 2. for girilen En sayisi kadar * karakteri yazar
                     printf("*");
              }//1.for
              printf("\n");
       }//2.for
}
/*Ekrana Eskenar Dortgen cizen fonksiyon*/
void EskenarDortgen(){
       int Boyut, i, j, k; //Boyut - Kullanıcıdan girilen Eşkenar Dortgenin boyutu
       do
       {
              printf("Boyut(tek sayi) giriniz:");
              scanf_s("%d", &Boyut);
       
       } while (Boyut % 2 == 0);  //do-while döngüdü kullnıcının tek sayı girene kadar sorgulama işlemini yapmakta

       for (i = 0; i <= (Boyut / 2); i++) //üst kısım üçgeni cizdirmek için
       {
              for (j = 0; j<(Boyut / 2) - i; j++) //ekrana ücgenin sol tarafonı boş kısmını yazar
              {
                     printf(" ");
              }
              for (k = 0; k < (2 * i) + 1; k++) //Bosluktan sonra yıldız ile üst kısım ücgeni cizer
              {
                     printf("*");
              }
              printf("\n");
       }
       for (i = 0; i<Boyut / 2; i++) //alt kısım ucgeni cizer
       {
              for (j = 0; j < i + 1; j++) //ekrana alt kısm ücgenin sol tarafına boş kısmını yazar
              {
                     printf(" ");
              }
              for (k = 0; k<Boyut - 2 - (2 * i); k++) //ekrana alt kısım ucgeninin yıldızlarını yazar
              {
                     printf("*");
              }
              printf("\n");
       }
}
/*Ekrana Paralel Kenar cizen fonksiyon*/
void ParalelKenar() {
       int Boyut,i,j,k; //Boyut - Kullanıcıdan girilen Paralel kenarinın boyutu
       printf("\nParalel Kenarin boyutu:");
       scanf_s("%d", &Boyut);
       for (i = 0; i < Boyut; i++)
       {
              for (j = 0; j < (Boyut - i - 1); j++) //kareni Paralel şekilini alması için boyutun yarısı kadar sol tarafa boşluk yazar
              {
                     printf(" ");
              }
              for (k = 0; k < Boyut; k++) //normal kare cizer
              {
                     printf("*");
              }
              printf("\n");
       }
}
/*Sorgula fonksiyonu işlem bitiminde programanın devam etmesini sorgulama islemini yapmaktadir.*/
void Sorgula() {
       printf("Devam etmek icin bir tusa basin!\n\n");
       _getch();
       system("cls");
       main();
}
/*Menu giriş kontrol fonksiyonu*/
bool Control(int control){
       /*Eger girilen sayi 0,1,2,3,4,5 değilse false döndür koşulu*/
       if (control != 1 && control != 2 && control != 3 && control != 4 && control != 5 && control != 0){
              return false;
       }
       /*Koşul sağlanıyorsan true doğrudur kontrolünü yapar*/
       return true; 
}