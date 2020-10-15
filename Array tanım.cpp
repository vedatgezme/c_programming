#include <stdio.h>
#include <stdlib.h>
 
 // ARRAY Tanım
 
int main()
{
	
	// i[10] demek i arrayin içinde 10 tane sayi var demek.
	// Unutulmaması gereken i[0]'dan başlar i[9]'a kadar gider;
	int i[10]={4,5,82,4,5,75,88,3,44,10};
	
	// Tek tek ekrana yazalım
	
	printf("%d\n",i[0]);
	printf("%d\n",i[1]);
	printf("%d\n",i[2]);
	printf("%d\n",i[3]);
	printf("%d\n",i[4]);
	printf("%d\n",i[5]);
	printf("%d\n",i[6]);
	printf("%d\n",i[7]);
	printf("%d\n",i[8]);
	printf("%d\n",i[9]);
	
	// Ekranda 4 5 82 4 5 75 88 3 44 ve 10 yazılacaktır.
	
	

	
	system("pause");
	return 0;
}

