/* Bu programda fonksiyona 2 tane say� gonderip fonksiyonda toplay�p 
main fonksiyona geri g�nderip ekranda yazd�raca��z */

#include <stdio.h>
#include <stdlib.h>
	
/*
�lk ba�ta elimizde bir 
fonksiyon olacak diye programa tan�ml�yoruz
*/
	
int function(int,int);

// Ana fonksiyon

int main()
{
	int a,b,toplam;
	printf("a sayisini giriniz : ");
	scanf("%d",&a);
	printf("b sayisini giriniz : ");
	scanf("%d",&b);
	
	// Kullan�c�dan say�lar ald�k fonksiyona g�nderelim
	
	toplam = function(a,b);
	
	// function fonksiyonunda a ve b'yi toplicaz ve toplama atayaca��z 
	// �imdi ekrana yazalim 
	
	printf("a ve b'nin toplami : %d\n\n",toplam);
	
	system("pause");
	return 0;
}

int function(int sayi1,int sayi2)
{
	// return ile gelen veriyi toplayip geri gonderelim
	return sayi1+sayi2;
}

