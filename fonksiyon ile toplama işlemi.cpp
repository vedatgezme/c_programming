/* Bu programda fonksiyona 2 tane sayý gonderip fonksiyonda toplayýp 
main fonksiyona geri gönderip ekranda yazdýracaðýz */

#include <stdio.h>
#include <stdlib.h>
	
/*
Ýlk baþta elimizde bir 
fonksiyon olacak diye programa tanýmlýyoruz
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
	
	// Kullanýcýdan sayýlar aldýk fonksiyona gönderelim
	
	toplam = function(a,b);
	
	// function fonksiyonunda a ve b'yi toplicaz ve toplama atayacaðýz 
	// þimdi ekrana yazalim 
	
	printf("a ve b'nin toplami : %d\n\n",toplam);
	
	system("pause");
	return 0;
}

int function(int sayi1,int sayi2)
{
	// return ile gelen veriyi toplayip geri gonderelim
	return sayi1+sayi2;
}

