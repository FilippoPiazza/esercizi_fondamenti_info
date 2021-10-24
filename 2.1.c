#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ast(float x){
	char ast[9] = {0};
	int y = (int)x-34;
	for (int i = 0; i < y; --i)
	{
		strcat(ast, "*");
	}

	return ast;

}

int main()
{
	char as[9] = {0};
	float tempa[7] = {0};
	double tempp;
	for (int i = 0; i < 7; ++i)
	{
		printf("Temperatura al giorno %d :", i+1);
		scanf("%f", &tempa[i]);

		printf("%f\n", tempa[i]);
	}
	//system("@cls||clear");
	printf("\n");
	printf("Giorno\tValore\tIstogramma\n");
	for (int i = 0; i < 7; ++i)
	{

		printf("%d %f %c \n", i+1, tempa[i], ast(i));
	}
	return 0;
}