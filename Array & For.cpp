#include <stdio.h>
#include <stdlib.h>
 
 // ARRAY Tan�m & For ile yazd�rmak
 
int main()
{
	
 
	int i[10]={4,5,82,4,5,75,88,3,44,10};
	int a;
	
	
	/*
	D�ng�y� 10 kere �al��t�raca��z
	��nk� arrayimizin boyutu 10
	B�ylece 10 kere printf yaz�lacak
	*/
	
	for(a = 0 ; a < 10 ; a ++ )
	{
      printf("%d\n",i[a]);
	}


	
	system("pause");
	return 0;
}

