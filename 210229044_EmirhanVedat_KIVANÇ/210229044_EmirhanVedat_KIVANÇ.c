#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char username[20];
char password[20];



    char ogrgorevlisi3ad[10];
    char ogrgorevlisi3soyad[20];
    char ogrgorevlisi3kullaniciadi[10];
    char ogrgorevlisi3sifre[10];

    struct memurbilgi{
        char ad[20];
        char soyad[20];
        char kullaniciadi[20];
        char sifre[20];

    }memur;

    struct ogrgorevlisi1bilgi{
        char ad[20];
        char soyad[20];
        char kullaniciadi[20];
        char sifre[20];
    }ogrgorevlisi1;

    struct ogrgorevlisi2bilgi{
        char ad[20];
        char soyad[20];
        char kullaniciadi[20];
        char sifre[20];
    }ogrgorevlisi2;

    struct ogrgorevlisi3bilgi{
        char ad[20];
        char soyad[20];
        char kullaniciadi[20];
        char sifre[20];
    }ogrgorevlisi3;

    struct ogrgorevlisi4bilgi{
        char ad[20];
        char soyad[20];
        char kullaniciadi[20];
        char sifre[20];
    }ogrgorevlisi4;

void YoneticiGiris(char a[20],char b[20])
{
    int temp1=0,temp2=0;

    if((strcmp(a,"emirhankivanc"))==NULL)
    {
        temp1=1;
    }

      if((strcmp(b,"emir123"))==NULL)
    {
        temp2=1;
    }

    if(temp1==1 && temp2==1)
    {
        printf("Dogru giris hosgeldiniz.\n");
        YoneticiMenu();
    }
    else
        printf("Yanlis giris.Tekrar deneyin.");
}


void AkademikKayit(FILE *x,char a[],char b[],char c[],char d[])

{
        fprintf(x,"%s\n",a);

    fprintf(x,"%s\n",b);


    fprintf(x,"%s\n",c);



    fprintf(x,"%s\n",d);
    fclose(x);



}





void YoneticiMenu()
{   int choice=0;
    int secim2=0;

    kayitt:

    printf("1- Memur\n");
    printf("2- 1.Ogretim Uyesi\n");
    printf("3- 2.Ogretim Uyesi\n");
    printf("4- 3.Ogretim Uyesi\n");
    printf("5- 4.Ogretim Uyesi\n");


    printf("Kayit etmek istediginiz kisinin yanindaki degeri girin:");
    scanf("%d",&choice);

    switch(choice)
    {


    case 1:

        printf("TR karakter kullanmadan Memur için ad soyad, kullanici adi, sifre giriniz: \n");
        scanf("%s",&memur.ad);
        scanf("%s",&memur.soyad);
        scanf("%s",&memur.kullaniciadi);
        scanf("%s",&memur.sifre);



        FILE *dosyaMemur;
    dosyaMemur=fopen("memur.txt","a");

        AkademikKayit(dosyaMemur,memur.ad,memur.soyad,memur.kullaniciadi,memur.sifre);

        printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayitt;
                }

        break;
    case 2:

        printf("TR karakter kullanmadan Ogretim gorevlisi 1 icin ad soyad, kullanici adi, sifre giriniz: \n");
        scanf("%s",&ogrgorevlisi1.ad);
        scanf("%s",&ogrgorevlisi1.soyad);
        scanf("%s",&ogrgorevlisi1.kullaniciadi);
        scanf("%s",&ogrgorevlisi1.sifre);



        FILE *dosyaOgretimGorevlisi1;
    dosyaOgretimGorevlisi1=fopen("OgretimGorevlisi1.txt","a");

        AkademikKayit(dosyaOgretimGorevlisi1,ogrgorevlisi1.ad,ogrgorevlisi1.soyad,ogrgorevlisi1.kullaniciadi,ogrgorevlisi1.sifre);

                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayitt;
                }

        break;

    case 3:
        printf("TR karakter kullanmadan Ogretim gorevlisi 2 icin ad soyad, kullanici adi, sifre giriniz: \n");
        scanf("%s",&ogrgorevlisi2.ad);
        scanf("%s",&ogrgorevlisi2.soyad);
        scanf("%s",&ogrgorevlisi2.kullaniciadi);
        scanf("%s",&ogrgorevlisi2.sifre);



        FILE *dosyaOgretimGorevlisi2;
    dosyaOgretimGorevlisi2=fopen("OgretimGorevlisi2.txt","a");

        AkademikKayit(dosyaOgretimGorevlisi2,ogrgorevlisi2.ad,ogrgorevlisi2.soyad,ogrgorevlisi2.kullaniciadi,ogrgorevlisi2.sifre);


                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayitt;
                }

        break;

    case 4:

        printf("TR karakter kullanmadan Ogretim gorevlisi 3 icin ad soyad, kullanici adi, sifre giriniz: \n");
        scanf("%s",&ogrgorevlisi3.ad);
        scanf("%s",&ogrgorevlisi3.soyad);
        scanf("%s",&ogrgorevlisi3.kullaniciadi);
        scanf("%s",&ogrgorevlisi3.sifre);



        FILE *dosyaOgretimGorevlisi3;
    dosyaOgretimGorevlisi3=fopen("OgretimGorevlisi3.txt","a");

    AkademikKayit(dosyaOgretimGorevlisi3,ogrgorevlisi3.ad,ogrgorevlisi3.soyad,ogrgorevlisi3.kullaniciadi,ogrgorevlisi3.sifre);

                        printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayitt;
                }

        break;

    case 5:

        printf("TR karakter kullanmadan Ogretim gorevlisi 4 icin ad soyad, kullanici adi, sifre giriniz: \n");
        scanf("%s",&ogrgorevlisi4.ad);
        scanf("%s",&ogrgorevlisi4.soyad);
        scanf("%s",&ogrgorevlisi4.kullaniciadi);
        scanf("%s",&ogrgorevlisi4.sifre);



        FILE *dosyaOgretimGorevlisi4;
    dosyaOgretimGorevlisi4=fopen("OgretimGorevlisi4.txt","a");

    AkademikKayit(dosyaOgretimGorevlisi4,ogrgorevlisi4.ad,ogrgorevlisi4.soyad,ogrgorevlisi4.kullaniciadi,ogrgorevlisi4.sifre);

                    printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayitt;
                }

        break;
    }

}

void AkademikGiris (char t[],char y[],char u[],char o[])
{
       int temp3=0,temp4=0;


    if((strcmp(t,u))==NULL)
    {
        temp3=1;
    }

      if((strcmp(y,o))==NULL)
    {
        temp4=1;
    }

    if(temp3==1 && temp4==1)
    {
        printf("Dogru giris hosgeldiniz.\n");


    }
    else{
        printf("Yanlis giris.Tekrar deneyin.");


    }
}

void AkademikGirisMemur (char t[],char y[],char u[],char o[])
{
       int temp3=0,temp4=0,secim=0;


    if((strcmp(t,u))==NULL)
    {
        temp3=1;
    }

      if((strcmp(y,o))==NULL)
    {
        temp4=1;
    }

    if(temp3==1 && temp4==1)
    {
        printf("Dogru giris hosgeldiniz.\n");
        printf("1-Ders Atama\n");
        printf("2-Ogrenci Kayit\n");
        printf(":");
        scanf("%d",&secim);
        if(secim==2){
        OgrenciKayit();
        }
        else if(secim==1)
        {
            DersAtama();
        }

    }
    else{
        printf("Yanlis giris.Tekrar deneyin.");


    }
}

    void DersAtama()
    {   int secim=0,secim2=0;
        char isim[20];
        char soyisim[20];
        char ders[20];
        FILE *dosyaOgretimGorevlisi1;
        dosyaOgretimGorevlisi1=fopen("OgretimGorevlisi1.txt","r");
        FILE *dosyaOgretimGorevlisi2;
        dosyaOgretimGorevlisi2=fopen("OgretimGorevlisi2.txt","r");
        FILE *dosyaOgretimGorevlisi3;
        dosyaOgretimGorevlisi3=fopen("OgretimGorevlisi3.txt","r");
        FILE *dosyaOgretimGorevlisi4;
        dosyaOgretimGorevlisi4=fopen("OgretimGorevlisi4.txt","r");



            fscanf(dosyaOgretimGorevlisi1,"%s %s",isim,soyisim);
            printf("1-%s %s\n",isim,soyisim);
            fscanf(dosyaOgretimGorevlisi2,"%s %s",isim,soyisim);
            printf("2-%s %s\n",isim,soyisim);
            fscanf(dosyaOgretimGorevlisi3,"%s %s",isim,soyisim);
            printf("3-%s %s\n",isim,soyisim);
            fscanf(dosyaOgretimGorevlisi4,"%s %s",isim,soyisim);
            printf("4-%s %s\n",isim,soyisim);
            kayit:
            printf("Islem yapmak istediginiz ogretim gorevlisini seciniz: ");
            scanf("%d",&secim);

            if(secim==1)
            {
                fclose(dosyaOgretimGorevlisi1);
                printf("Ders ekle: \n");
                scanf("%s",ders);
                FILE *dosyaOgretimGorevlisi1;
                dosyaOgretimGorevlisi1=fopen("OgretimGorevlisi1.txt","a");
                fprintf(dosyaOgretimGorevlisi1,"%s \n",ders);
                fclose(dosyaOgretimGorevlisi1);
                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayit;
                }
            }
            else if(secim==2)
            {
                fclose(dosyaOgretimGorevlisi2);
                printf("Ders ekle: \n");
                scanf("%s",ders);
                FILE *dosyaOgretimGorevlisi2;
                dosyaOgretimGorevlisi2=fopen("OgretimGorevlisi2.txt","a");
                fprintf(dosyaOgretimGorevlisi2,"%s \n",ders);
                fclose(dosyaOgretimGorevlisi2);
                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayit;
                }
            }
            else if(secim==3)
            {
                fclose(dosyaOgretimGorevlisi3);
                printf("Ders ekle: \n");
                scanf("%s",ders);
                FILE *dosyaOgretimGorevlisi3;
                dosyaOgretimGorevlisi3=fopen("OgretimGorevlisi3.txt","a");
                fprintf(dosyaOgretimGorevlisi3,"%s \n",ders);
                fclose(dosyaOgretimGorevlisi3);
                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayit;
                }
            }
            else if(secim==4)
            {
                fclose(dosyaOgretimGorevlisi4);
                printf("Ders ekle: \n");
                scanf("%s",ders);
                FILE *dosyaOgretimGorevlisi4;
                dosyaOgretimGorevlisi4=fopen("OgretimGorevlisi4.txt","a");
                fprintf(dosyaOgretimGorevlisi4,"%s \n",ders);
                fclose(dosyaOgretimGorevlisi4);
                printf("Kayida devam etmek 1'i bitirmek icin 0 girin: \n");
                scanf("%d",&secim2);
                if(secim2==0)
                {
                    abort;
                }
                else if(secim2==1)
                {
                    goto kayit;
                }
            }
            else if(secim==0)
                abort;

            fclose(dosyaOgretimGorevlisi1);
            fclose(dosyaOgretimGorevlisi2);
            fclose(dosyaOgretimGorevlisi3);
            fclose(dosyaOgretimGorevlisi4);

    }



void OgrenciKayit()
{
    char ogrenciad[15];
    char ogrencisoyad[15];
    char ogrencikullaniciadi[15];
    char ogrencisifre[20];
    char ogrencibolum[30];
    int ogrencino=1,secim=2;

    printf("Ogrenci kayidini sonlandirmak icin ogrenci no 0 girin\n");

    FILE *OgrenciKayitlari;
    OgrenciKayitlari=fopen("OgrenciKayitlari.txt","a");

    for(int i=0;i<100;i++){

    if(secim==0)
    {
        fclose(OgrenciKayitlari);
        break;
    }
    else{

    printf("Ogrenci no girin: \n");
    scanf("%d",&ogrencino);
    printf("Ogrenci ad girin: \n");
    scanf("%s",ogrenciad);
    printf("Ogrenci soyad girin: \n");
    scanf("%s",ogrencisoyad);
    printf("Ogrenci bolum girin: \n");
    scanf("%s",ogrencibolum);
    printf("Ogrenci kullanici adi girin: \n");
    scanf("%s",ogrencikullaniciadi);
    printf("Ogrenci sifre girin: \n");
    scanf("%s",ogrencisifre);
    printf("Bitirmek icin 0,devam icin 1 giriniz:");
    scanf("%d",&secim);

    fprintf(OgrenciKayitlari,"%d ",ogrencino);
    fprintf(OgrenciKayitlari,"%s ",ogrenciad);
    fprintf(OgrenciKayitlari,"%s ",ogrencisoyad);
    fprintf(OgrenciKayitlari,"%s ",ogrencibolum);
    fprintf(OgrenciKayitlari,"%s ",ogrencikullaniciadi);
    fprintf(OgrenciKayitlari,"%s \n",ogrencisifre);

    }
    }
}

//void NotGirisi()
//{   int ogrencino=0;
//    char dersadi[10];
//    FILE *dosyaNotGirisi1;
//    dosyaNotGirisi1=fopen("Notlar1.txt","a");
//
//
//    printf("Notunu girmek istediginiz ogrencini numarasini girin: ");
//    scanf("%d",&ogrencino);
//
//
//
//}






int main()
{   char k1[10],k2[10],k3[10],k4[10],k5[10],k6[10],k7[10],k8[10],k9[10],k10[10],k11[10],k12[10],k13[10],k14[10],k15[10],k16[10],k17[10],k18[10],k19[10],k20[10],k21[10],k22[10],k23[10],k24[10],k25[10],k26[10];
    char username2[10],password2[10],username3[10],password3[10],username4[10],password4[10],username5[10],password5[10],username6[10],password6[10],username7[10],password7[10];
    int choice2,anamenu1=0;

    anamenu:
    printf("1-Yonetici Girisi\n");
    printf("2-Memur Girisi\n");
    printf("3-Ogretim Gorevlisi 1 Girisi\n");
    printf("4-Ogretim Gorevlisi 2 Girisi\n");
    printf("5-Ogretim Gorevlisi 3 Girisi\n");
    printf("6-Ogretim Gorevlisi 4 Girisi\n");
    printf("7-Ogrenci Girisi\n");



    printf("Lutfen giris turunu seciniz: \n");
    scanf("%d",&choice2);

      switch(choice2)
    {
    case 1:

    printf("Yonetici icin kullanici adini giriniz: \n");
    scanf("%s",&username);
    printf("Sifre giriniz: \n");
    scanf("%s",&password);
    YoneticiGiris(username,password);

    printf("Anamenu icin 0 girin: ");
    scanf("%d",&anamenu1);
    if(anamenu1==0){
    goto anamenu;
    }
        break;
    case 2:

        printf("Kullanici adi giriniz:");
        scanf("%s",username2);
        printf("Sifre giriniz:");
        scanf("%s",password2);



        FILE *dosyaMemur;
        if((dosyaMemur=fopen("memur.txt","r"))!=NULL)
        {
            fscanf(dosyaMemur,"%s",&k1);
            fscanf(dosyaMemur,"%s",&k2);
            fscanf(dosyaMemur,"%s",&k3);
            fscanf(dosyaMemur,"%s",&k4);
        }
        else
        {
            printf("Dosya bulunamadi");
        }


        AkademikGirisMemur(k3,k4,username2,password2);


        fclose(dosyaMemur);


        break;

    case 3:

        printf("Kullanici adi giriniz:");
        scanf("%s",username3);
        printf("Sifre giriniz:");
        scanf("%s",password3);



        FILE *dosyaOgretimGorevlisi1;
        if((dosyaOgretimGorevlisi1=fopen("OgretimGorevlisi1.txt","r"))!=NULL)
        {
            fscanf(dosyaOgretimGorevlisi1,"%s",&k5);
            fscanf(dosyaOgretimGorevlisi1,"%s",&k6);
            fscanf(dosyaOgretimGorevlisi1,"%s",&k7);
            fscanf(dosyaOgretimGorevlisi1,"%s",&k8);
        }
        else
        {
            printf("Dosya bulunamadi");
        }


        AkademikGiris(k7,k8,username3,password3);

        fclose(dosyaOgretimGorevlisi1);



        break;

    case 4:
        printf("Kullanici adi giriniz:");
        scanf("%s",username4);
        printf("Sifre giriniz:");
        scanf("%s",password4);



        FILE *dosyaOgretimGorevlisi2;
        if((dosyaOgretimGorevlisi2=fopen("OgretimGorevlisi2.txt","r"))!=NULL)
        {
            fscanf(dosyaOgretimGorevlisi2,"%s",&k9);
            fscanf(dosyaOgretimGorevlisi2,"%s",&k10);
            fscanf(dosyaOgretimGorevlisi2,"%s",&k11);
            fscanf(dosyaOgretimGorevlisi2,"%s",&k12);
        }
        else
        {
            printf("Dosya bulunamadi");
        }


        AkademikGiris(k11,k12,username4,password4);

        fclose(dosyaOgretimGorevlisi2);


        break;

    case 5:

        printf("Kullanici adi giriniz:");
        scanf("%s",username5);
        printf("Sifre giriniz:");
        scanf("%s",password5);



        FILE *dosyaOgretimGorevlisi3;
        if((dosyaOgretimGorevlisi3=fopen("OgretimGorevlisi3.txt","r"))!=NULL)
        {
            fscanf(dosyaOgretimGorevlisi3,"%s",&k13);
            fscanf(dosyaOgretimGorevlisi3,"%s",&k14);
            fscanf(dosyaOgretimGorevlisi3,"%s",&k15);
            fscanf(dosyaOgretimGorevlisi3,"%s",&k16);
        }
        else
        {
            printf("Dosya bulunamadi");
        }


        AkademikGiris(k15,k16,username5,password5);

        fclose(dosyaOgretimGorevlisi3);

        break;

    case 6:
        printf("Kullanici adi giriniz:");
        scanf("%s",username6);
        printf("Sifre giriniz:");
        scanf("%s",password6);



        FILE *dosyaOgretimGorevlisi4;
        if((dosyaOgretimGorevlisi4=fopen("OgretimGorevlisi4.txt","r"))!=NULL)
        {
            fscanf(dosyaOgretimGorevlisi4,"%s",&k17);
            fscanf(dosyaOgretimGorevlisi4,"%s",&k18);
            fscanf(dosyaOgretimGorevlisi4,"%s",&k19);
            fscanf(dosyaOgretimGorevlisi4,"%s",&k20);
        }
        else
        {
            printf("Dosya bulunamadi");
        }


        AkademikGiris(k19,k20,username6,password6);

        fclose(dosyaOgretimGorevlisi4);

    case 7:


        printf("Kullanici adi giriniz:");
        scanf("%s",username7);
        printf("Sifre giriniz:");
        scanf("%s",password7);

        FILE *dosyaOgrenciKayitlari;

         if((dosyaOgrenciKayitlari=fopen("OgrenciKayitlari.txt","r"))!=NULL)
        {


            for(int i=0;i<100;i++){

            fscanf(dosyaOgrenciKayitlari,"%s",&k21);
            fscanf(dosyaOgrenciKayitlari,"%s",&k22);
            fscanf(dosyaOgrenciKayitlari,"%s",&k23);
            fscanf(dosyaOgrenciKayitlari,"%s",&k24);
            fscanf(dosyaOgrenciKayitlari,"%s",&k25);
            fscanf(dosyaOgrenciKayitlari,"%s\n",&k26);

             int temp3=0,temp4=0;


            if((strcmp(username7,k25))==NULL)
            {
                temp3=1;
            }

              if((strcmp(password7,k26))==NULL)
            {
                temp4=1;
            }

            if(temp3==1 && temp4==1)
            {
                printf("Dogru giris hosgeldiniz.\n");
                fclose(dosyaOgrenciKayitlari);
                break;

            }


            }
            fclose(dosyaOgrenciKayitlari);
        }


        else
        {
            printf("Dosya bulunamadi");
            fclose(dosyaOgrenciKayitlari);
        }

    }

    return 0;
}
