#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char chave[]= "234";
	char ichave[55];
	
	while(1)
	{
	
	printf("Digite a sua senha: \n ");
	scanf("%s", &ichave);
	if(strcmp(chave, ichave)==0)
	{
		printf("Senha correta \n ");
		printf(" Jacare no seco anda \n ");
	}
	else
	{
		printf("Senha incorreta \n ");
	}
	
	
}
	return 0;
}
