#include <stdio.h>
#include <stdlib.h>

//inicializa��o
//declara��o de variavel globais
int tam, cont, topo = -1, i;
char valor, *pilha;
//fun��o para empilhar a pilha
void empilha(){
    if(topo == tam-1){
        printf("\n * pilha cheia * \n");
    }else
    {
        topo++;
        pilha[topo] = valor;
    }
}
//fun��o para desempilhar a pilha
void desempilha(){
    if(topo == -1){
        printf("\n * pilha vazia * \n");
    }else
    {
        valor = pilha[topo];
        topo--;
    }
}

int main()
{ 
printf("\ndigite o tamanho da pilha: ");//pedir para o usuario digitar um numero
scanf("%d", &tam);//salvar o numero
	i=tam;
	 pilha=(char*)malloc(tam*sizeof(char)); // declarar do tamanho da pilha

for(cont=0;cont<tam;cont++) //estrutura de repeti�ao
{
setbuf(stdin,NULL); //limpar a tela
	printf("digite seu texto(apenas uma letra pr vez): ");//mostra para o usuario e pedir para digitar
	scanf("%c", &valor);//salva o que foi digitado
	empilha();
}
	
for(cont=0;cont<tam;cont++)
{

	desempilha();
	printf("%c", valor);
	
}

free(pilha);//limpar
return 0;

}
