#include <stdio.h>
#include <stdlib.h>

//Nama : Afiana Yusita
//NIM  : 202102011010
//Prodi: Teknik Informatika

int main()
{
    int Pilihan;

    printf ("_________________________________________________________________________\n\n");
    printf ("-------------Data Perkembangan Covid-19 2020-2021 Pulau Jawa-------------\n\n");
    printf ("_________________________________________________________________________\n\n");

    printf ("1. Total data perkembangan Covid-19 wilayah Banten\n\n");
    printf ("2. Total data perkembangan Covid-19 wilayah Jawa Barat\n\n");
    printf ("3. Total data perkembangan Covid-19 wilayah Jawa Timur\n\n");
    printf ("4. Total data perkembangan Covid-19 wilayah Jawa Tengah\n\n");
    printf ("5. Total data perkembangan Covid-19 wilayah DKI Jakarta\n\n");
    printf ("6. Total data perkembangan Covid-19 wilayah Daerah Istimewa Yogyakarta\n\n");
    printf ("________________________________________________________________________\n\n");
    printf ("Masukkan Angka pilihan : ");
    scanf  ("%d", &Pilihan);

    switch (Pilihan)
    {
        case 1 : printf ("\n Total data perkembangan Covid-19 wilayah Banten \n\n Dirawat        : 741     jiwa \n Terkonfrimasi  : 131.992 jiwa \n Sembuh         : 128.574 jiwa \n Meninggal      : 2.677   jiwa \n\n");break;
        case 2 : printf ("\n Total data perkembangan Covid-19 wilayah Jawa Barat \n\n Dirawat        : 2.269   jiwa \n Terkonfrimasi  : 704.290 jiwa \n Sembuh         : 687.360 jiwa \n Meninggal      : 14.661  jiwa \n\n");break;
        case 3 : printf ("\n Total data perkembangan Covid-19 wilayah Jawa Timur \n\n Dirawat        : 1.324   jiwa \n Terkonfrimasi  : 397.169 jiwa \n Sembuh         : 366.331 jiwa \n Meninggal      : 29.514  jiwa \n\n");break;
        case 4 : printf ("\n Total data perkembangan Covid-19 wilayah Jawa Tengah \n\n Dirawat        : 3.394   jiwa \n Terkonfrimasi  : 483.746 jiwa \n Sembuh         : 450.355 jiwa \n Meninggal      : 29.997  jiwa \n\n");break;
        case 5 : printf ("\n Total data perkembangan Covid-19 wilayah DKI Jakarta \n\n Dirawat        : 2.229   jiwa \n Terkonfrimasi  : 859.861 jiwa \n Sembuh         : 844.067 jiwa \n Meninggal      : 13.565  jiwa \n\n");break;
        case 6 : printf ("\n Total data perkembangan Covid-19 wilayah Daerah Istimewa Yogyakarta \n\n Dirawat        : 1.036   jiwa \n Terkonfrimasi  : 155.451 jiwa \n Sembuh         : 149.191 jiwa \n Meninggal      : 5.224   jiwa \n\n");break;
        default : printf ("Angka yang Anda masukkan tidak sesuai, silahkan coba kembali");break;
    }

    return 0;
    getchar();
}
