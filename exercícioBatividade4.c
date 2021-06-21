#include<stdio.h>
#include<stdlib.h>


//inicialização
int tam = 5, n, i, topo = -1, valor, *pilha;

//inicializa
void inicializa()
{
	int topo = -1;
}

//empilha
void empilha()
{
	if(topo == tam - 1)
	{
		printf("\n Pilha cheia\n");
	}
	else
	{
		topo++;
		pilha[topo] = valor;
	}	
}

//desempilha
void desempilha()
{
	if(topo == -1)
	{
		printf("\n Pilha vazia\n");
	}
	else
	{
		valor = pilha[topo];
		topo--;
	}
}

//acesso ao topo
void acessotopo()
{
	if(topo == -1)
	{
		printf("\n Pilha vazia\n");
	}
	else
	{
		printf("\nElemento do topo: %d\n", pilha[topo]);
	}
}

//situação
void situacaodapilha()
{
	if(topo== -1)
	{
		printf("\n Pilha vazia\n");
	}
	else
	{
		printf("\nTotal de elementos na pilha: %d\n", topo+1);
		printf("\nEspaco disponivel na pilha: %d\n", tam-(topo+1));
	}
}

int main()
{ 

 pilha=(int*)malloc(tam*sizeof(int));
 do{
printf(" \ndigite\n1 para inicializar a pilha\n2 inserir um valor na pilha\n3 para remover um valor da pilha\n4 para mostrar o elemento do topo da pilha\n5 mostrar a situacao da pilha,\n6 para sair\n: ");
scanf("%d", &n);




switch (n)
{

   case 1:
 
  	 inicializa();
     printf("a pilha foi iniciada");
     
     if(topo>=0){
 	printf("\na pilha ja foi iniciada");
	 break;
}

 break;
 
 
 
   case 2:
    printf("\ndigite um valor para ser inserido na pilha: ");
    scanf("%d", &valor);
    empilha();
    
   break;
   
   
   
    case 3:

		desempilha();
    	printf("\no valor tirado da pilha foi %d", valor);
	    printf("\n");
   break;

   case 4:

  	acessotopo();

   break;

   
   case 5:
   
   	situacaodapilha();
   
   break;
}




}while(n!=6);

if(n==6)
{
	printf("O PROGRAMA FOI ENCERRADO, ESPERO TER AJUDADO!!!");
	return 0;
}


free(pilha);
return 0;
}
