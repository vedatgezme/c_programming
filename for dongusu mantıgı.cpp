#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	
	/*
	
	BASÝT BÝR DÖNGÜ ÝÞLEMÝ
	Bu programda ise i 0'dan baþlayacak ve 9'a kadar gidecek.
	
	for içindeki   "  i=0;i<10;i++   " kod 
	i'nin sýfýrdan baþlayacaðý ve i++ i'nin teker teker artacagý
	ve 10'dan kücük oluncaya kadar parantez içindeki iþlemin aynýsýnýn yapýlacaðýný
	belirtir.
	
	bu durumda ekranda 0,1,2,3,4,5,6,7,8,9 yazacaktýr \n yaptýðýmýz için alt alta yazýlacak
	
	*/
	
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("%d\n",i);
	}
	
	
	system("pause");
	return 0;
}

