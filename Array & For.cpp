#include <stdio.h>
#include <stdlib.h>
 
 // ARRAY Taným & For ile yazdýrmak
 
int main()
{
	
 
	int i[10]={4,5,82,4,5,75,88,3,44,10};
	int a;
	
	
	/*
	Döngüyü 10 kere çalýþtýracaðýz
	Çünkü arrayimizin boyutu 10
	Böylece 10 kere printf yazýlacak
	*/
	
	for(a = 0 ; a < 10 ; a ++ )
	{
      printf("%d\n",i[a]);
	}


	
	system("pause");
	return 0;
}

