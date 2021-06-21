#include <stdio.h>
#include <stdlib.h>

main()
{
	//declarando as variaveis
	int *m, *n, *p, d, tam, cont;
	printf("digite o tamanho do vetores: ");//mostra na tela e pedi para o usuario digitar que está escrito
	scanf("%d", &tam);//salva o que foi digitado
	
	m=(int*)malloc(tam*sizeof(int)); //declarando o tamanho dos vetores
		n=(int*)malloc(tam*sizeof(int));//declarando o tamanho dos vetores
		p=(int*)malloc(tam*sizeof(int));//declarando o tamanho dos vetores
		
		
	for(cont=0;cont<tam;cont++)//estrututa de repetição
	{
		printf("digite um numero para ser adicionado ao vetor m: ");//mostra na tela e pedi para o usuario digitar que está escrito
		scanf("%d", &m[cont]);//salva o que foi digitado
	
	}
		for(cont=0;cont<tam;cont++)//estrututa de repetição
	{
		printf("digite um numero para ser adicionado ao vetor n: ");//mostra na tela e pedi para o usuario digitar que está escrito
		scanf("%d", &n[cont]);//salva o que foi digitado
	
	}
	do{
	//mostra na tela e pedi para o usuario digitar que está escrito
	printf("\n digite\n 1 para mostra o produto do vetor m por n: \n2 para mostrar a soma de m com n\n3 para mostrar a diferenca de m com n: \n4 para sair do programa: ");
	scanf("%d", &d);//salva o que foi digitado
	
	switch (d)//estrutura de escolha
	{
		case 1:
			for(cont=0; cont<tam;cont++){//estrututa de repetição
				p[cont]=m[cont]*n[cont];//operação matemática
				printf("\no produto de m por n na posicao %d eh: %d", cont, p[cont]);//mostra na tela o resultado da operação
			}
			
			break;
			
			case 2:
				for(cont=0; cont<tam;cont++){//estrututa de repetição
				p[cont]=m[cont]+n[cont];//operação matemática
				printf("\na soma de m e n na posicao %d eh: %d", cont, p[cont]);//mostra na tela o resultado da operação
			}
				
			break;
				
				case 3:
						for(cont=0; cont<tam;cont++){//estrututa de repetição
				p[cont]=m[cont]-n[cont];//operação matemática
				printf("\na diferenca de m e n na posicao %d eh: %d", cont, p[cont]);//mostra na tela o resultado da operação
			}
			
			break;		
				
				
	}
}while(d!=4);//estrututa de repetição
	if(d==4){//estrutura de escolha
		printf("\nO PROGRAMA FOI ENCERRADO, ESPERO TER AJUDADO!!!");//mostra na tela o resultado da operação
	return 0;
	}
	free(m);//limpar
	free(n);//limpar
	free(p);//limpar
	return 0;
}
