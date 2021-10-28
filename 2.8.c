#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct esame{char name[50]; char tname[50]; int cfu; int mark;} es1;

int main()
{

	printf("Nome dell'esame: ");
	scanf("%s", es1.name);
	printf("Nome del professore: ");
	scanf("%s", es1.tname);
	printf("Numero cfu: ");
	scanf("%d", &es1.cfu);
	printf("voto: ");
	scanf("%d", &es1.mark);	

	printf("%s %s %d %d \n", es1.name, es1.tname, es1.cfu, es1.mark);
	
	return 0;
}
