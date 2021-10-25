#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

	float tempa[7] = {0};

	for (int i = 0; i < 7; ++i)
	{
		printf("Temperatura al giorno %d :", i+1);
		scanf("%f", &tempa[i]);
	}
	

	system("@cls||clear");
	printf("\n");
	printf("Giorno\tValore\tIstogramma\n");
	for (int i = 0; i < 7; ++i)

	{	
		char str[10];
		memset(str, '*', (int)tempa[i]-34);
		str[9] = '\0';
		printf("%d %12.2f %4s \n", i+1, tempa[i], str);
	}
	return 0;
}