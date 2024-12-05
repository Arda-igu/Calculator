#include <stdio.h>
#include <stdlib.h>

/* Hesap Makinasý*/

int main()
{
	char islem;
	double sayi1,sayi2,sonuc;
	printf("Yapilacak islemi girin\n Toplama icin:+\nCikarma icin:-\nCarpma icin:*\nBolme icin:/\n Giris: \t");
	scanf("%c",&islem);
	printf("Lutfen ilk sayiyi girin\t");
	scanf("%lf",&sayi1);
	printf("Lutfen ikinci sayiyi girin\t");
	scanf("%lf",&sayi2);
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Sonuc=%lf",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Sonuc=%lf",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Sonuc=%lf",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Sonuc=%lf",sonuc);
			break;
		default:
			printf("Yanlis islem girdiniz");
	}
  system("PAUSE");	
  return 0;
}
