#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a=0;
int empatet(char tabuleiro [3][3], char player)
{
	int i, j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	
	if(tabuleiro[i][j]=' ')
	{
		return 0;
	}
	
}

	}
return 2;	
}

void zerat(char tabuleiro [3][3])
{
	int i, j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	
	tabuleiro[i][j]=' ';
	
}

	}
	
}

void exibet(char tabuleiro[3][3] )
{
	int i, j;
		for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	
	printf("%c |", tabuleiro [i][j]);
	
}
printf("\n");
	}
	printf("\n\n");
	
	
}
void jogada( char tabuleiro[3][3], char player)
{
	int x, y;
	while(1)
{
		
	printf("entre com as coordenadas: ");
	scanf("%d %d", &x, &y);
	if((x>2 || y>2) || (x<0 || y<0)) 
	{
		printf("\n\ncoordenadas invalidas\n");
	}
	
	
	else if(tabuleiro[x][y]==' '){
		
	
	tabuleiro[x][y]=player;
	
	break;
}
	else{
	printf("\nessa posicao nao pode ser usada\n");
	
}
}
}

int validat(char tabuleiro[3][3], char player )
{
int i, j;

for(i=0;i<3;i++){
	if(tabuleiro[i][0]!=' ' &&tabuleiro[i][0]==tabuleiro[i][1] && tabuleiro[i][1]==tabuleiro[i][2])
	{
			return 1;
	}
}
for(j=0;j<3;j++){
	if(tabuleiro[0][j]!=' ' &&tabuleiro[0][j]==tabuleiro[1][j] && tabuleiro[1][j]==tabuleiro[2][j])
	{
			return 1;
	}
}


if(tabuleiro[0][0]!=' ' &&tabuleiro[0][0]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][2])
{
	return 1;
	
}
else if(tabuleiro[0][2]!=' ' &&tabuleiro[0][2]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][0])
{
		return 1;
}


return 0;
}
main()
{
	char tabuleiro[3][3];
	char c1='X';
	char c2='O';
	int x, y;
	char player=c1;
	zerat(tabuleiro);
	exibet(tabuleiro);
while(1)
{
		


jogada(tabuleiro, player);
a=validat(tabuleiro, player );
if(a==1)
{
	printf("\no player %c VENCEU!", player);
	break;
}
else{
	a=empatet(tabuleiro, player );
if(a==2)
{
	printf("\nEMPATE!fim de jogo!");
	break;
}

	else if(player==c1){
		player=c2;
	}
	else
	{
		player=c1;
	}
	exibet(tabuleiro);
}
}
printf("\nFIM DE JOGO");
	return 0;
}
