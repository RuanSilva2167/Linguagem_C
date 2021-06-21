#include<stdio.h>//adicionando a biblioteca
#include<stdlib.h>//adicionando a biblioteca
#include<string.h>//adicionando a biblioteca

typedef struct { //estrutura da struct
	//declarando as variaveis da struct
	float nota_av1;
	char nome[20];//declarando as variaveis da struct
	float nota_av2;//declarando as variaveis da struct
int matricula;//declarando as variaveis da struct
}BES;  //associando *BES* á definição da struct

BES alunos[3];//array de struct

	float maior=0, a, b[3], media;//declarando as variaveis
int i, cont=0;//declarando as variaveis
char s;//declarando as variaveis




void mediag()
{
		b[0]=(alunos[0].nota_av1+alunos[0].nota_av2)*0.5;
			media=b[0];//atribuição na variavel media	
			for(i=0; i<3; i++)
{
	
	b[i]=(alunos[i].nota_av1+alunos[i].nota_av2)*0.5;
	if(b[i]>media)//estrutura de escolha
	{
	
	media=b[i];//atribuição na variavel media	
}

	
}


for(i=0;i<3;i++)//estrututa de repetição
{

if(media==b[i])//estrutura de escolha
	{
		printf("\n o aluno com a maior media geral eh: %s \n", alunos[i].nome);//mostra na tela o resultado do comando
		break;
	}
}

}
void maiorav1(){
	
maior=alunos[i].nota_av1;//atribuição na variavel maior		
for(i=0; i<3; i++)//estrututa de repetição
{
	
	
	if(alunos[i].nota_av1>maior)//estrutura de escolha
	{
	
	maior=alunos[i].nota_av1;//atribuição na variavel maior	
}

	
}
for(i=0;i<3;i++)//estrututa de repetição
{

if(maior==alunos[i].nota_av1)//estrutura de escolha
	{
		printf("\n o aluno com a maior nota na av1 eh: %s \n", alunos[i].nome);//mostra na tela o resultado do comando
	}
}
}
void maiorav2()
{
	
			maior=alunos[i].nota_av2;//atribuição na variavel maior	
for(i=0; i<3; i++)//estrututa de repetição
{
	
	
	if(alunos[i].nota_av2>maior)//estrutura de escolha
	{
	
	maior=alunos[i].nota_av2;//atribuição na variavel maior	
}

	
}
for(i=0;i<3;i++)//estrututa de repetição
{

if(maior==alunos[i].nota_av2)//estrutura de escolha
	{
		printf("\n o aluno com a maior nota na av2 eh: %s \n", alunos[i].nome);//mostra na tela o resultado do comando
	}
}

}



 int main()
 {



for(i=0; i<3; i++)//estrututa de repetição
{
	setbuf(stdin,NULL);//limpar a tela
	printf("\ndigite o nome do aluno %d : ", i+1);//mostra na tela e pedi para o usuario digitar que está escrito
	scanf("%s", &alunos[i].nome);//salva o que foi digitado
	printf("\ndigite a av1 nota do aluno %s : ", alunos[i].nome);//mostra na tela e pedi para o usuario digitar que está escrito
	scanf("%f", &alunos[i].nota_av1);//salva o que foi digitado
	printf("\ndigite a av2 nota do aluno %s : ", alunos[i].nome);//mostra na tela e pedi para o usuario digitar que está escrito
	scanf("%f", &alunos[i].nota_av2);//salva o que foi digitado
	printf("\ndigite a matricula nota do aluno %s : ", alunos[i].nome);//mostra na tela e pedi para o usuario digitar que está escrito
	scanf("%d", &alunos[i].matricula);//salva o que foi digitado
}
do{//estrututa de repetição
setbuf(stdin,NULL);//limpar a tela
printf("\ndigite\n[a] para mostrar o nome do aluno coma maior nota da av1\n[b] para o nome do aluno co maior nota na av2\n[c] para mostrar o nome do aluno com a maior media geral\n[d] sair;  ");
//mostra na tela e pedi para o usuario digitar que está escrito
scanf("%c", &s);//salva o que foi digitado

switch (s)//estrutura de escolha
{

	    case 'a'://parte da estrutura de escolha switch
		
maiorav1();

		break;//parar imediatamente o laço
		
		case 'b'://parte da estrutura de escolha switch
		
maiorav2();

	
		
		break;//parar imediatamente o laço
		
		case 'c'://parte da estrutura de escolha switch
		 
		mediag(); 

			
		
		break;//parar imediatamente o laço
}
}while(s!='d');//estrututa de repetição

if(s=='d')//estrutura de escolha
{
	printf("programa encerrado!!! espero ter ajudado");//mostra na tela o resultado do comando
}

return 0;
}
