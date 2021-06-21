#include <stdio.h>
#include <stdlib.h>

//inicialização
int tam=8, cont, P,  cp[8], cpl,  topo = -1, valor, *pilha;

void empilha(){
    if(topo == tam-1){
        printf("\n * pilha cheia * \n");
    }else
    {
        topo++;
        pilha[topo] = valor;
    }
}

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
	 
	 pilha=(int*)malloc(tam*sizeof(int));
for(cont=0;cont<8;cont++)
{
	printf("\ndigite o numero da placa do seu carro : ");
	scanf("%d", &valor);
cp[cont]=valor;
	empilha();

}


	printf("\tdigite a placa do carro que voce deseja(apenas os numeros): ");
	scanf("%d", &cpl);
		
		for(cont=0;cont<8;cont++)
{
	if(cp[cont]==cpl){
		
		P=2;
	}
	
		for(cont=7;cont>=0;cont--){
		
if(cp[cont]==cpl)
{
	return 0;
}
else{

  desempilha();
  	printf("\n o carro na posicao: %d precisa ser retirada para voce deixar o estacionamento", valor);
}
	
}

}
		
	
	
	if(P==1){
		printf("o carro nao esta no estacionamento");
		return 0;
	}
	


free(pilha);
return 0;

}
