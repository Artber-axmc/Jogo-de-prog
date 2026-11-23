#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
int verificar2(int vetor[7][7]){
    int i,j;
    for(i=0;i<=6;i++){
       
            for(j=0;j<=6;j++){
                if(vetor[i][j]==3){
                    return 1;
}
}
}
return 0;
}
int verificar(int vetor[7][7]){
    int i,j;
    for(i=0;i<=6;i++){
       
            for(j=0;j<=6;j++){
               
                if(vetor[i][j]==4){
                     return 1;
                   
} 
}
}
return 0;
}
void matriz(int vetor[7][7]){
    int i,j;
    printf(" X=Posições não selecionadas; O=Suas sobremesas; #=Suas sobremesas encontradas pelo oponente; $=Sobremesas do oponente encontradas; ~=espaços vazios\n");
    printf("  0 1 2 3 4 5 6\n");
    for(i=0;i<=6;i++){
        printf("%d",i);
        for(j=0;j<=6;j++){
            if(vetor[i][j]==4){
                printf(" X");
}           else if(vetor[i][j]==0){
                printf(" ~");
}
            else if(vetor[i][j]==3){
                printf(" O");
}
            else if(vetor[i][j]==2){
                printf(" $");
}
            else if (vetor[i][j]==5){
                printf(" #");
}
            else{
                printf(" X");
 }
    }
        printf("\n");
    }
}
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
   
    srand(time(NULL));
   
    int vetor[7][7];
    int i,j,y,x,start,valido=1;
   
    printf("\n\n\t  SOBREMESAS\n(Um jogo inspirado em batalha naval!)\n\n\tDigita 1 para comecar\n\tDigite 0 para sair\n\tDigite 2 para os Creditos\n");
    scanf("%d",&start);
       
    switch (start)
    {
    case 1:
        printf("\n\n");
        for(i=0;i<7;i++){
            for(j=0;j<7;j++){
                vetor[i][j]=1;
            }}
           
matriz(vetor);
            printf("\n");

      printf("\nInsira agora 5 posições para suas sobremesas,com os numeros de 0 até 6 com virgulas no meio (ex:0,3).\n");
for(x=0;x<=4;x++){

    scanf("%d,%d", &i, &j);

    while(vetor[i][j]==3|| i<0 || j<0 || i>6 ||j>6){
        printf("insira novamente\n");
        scanf("%d,%d", &i,&j);
    }
       
        vetor[i][j]=3;
}

    for(x=0;x<=4;x++){
   
        i=rand()%7;
   
        j=rand()%7;
   
       
   
        while(vetor[i][j]==3|| vetor[i][j]==4){
       
            i=rand()%7;
       
            j=rand()%7;
 }  
        vetor[i][j]=4;
}

    x=1;
    y=1;
 
    while(x==1 && y==1) {  
   
        x=0;
        y=0;
   matriz(vetor);
   valido=1;
   while(valido){
   
printf("digita a posição:\n");
   
scanf(" %d,%d", &i,&j);
if(vetor[i][j]==4){
            printf("Você encontrou uma sobremesa do oponente!\n");
            vetor[i][j]=2;
            valido=0;
}   else if(vetor[i][j]==3 || vetor [i][j]==5 || vetor[i][j]==2 || j>6 || i>6 || i<0 || j<0){
    printf("você não pode selecionar essa posição\n");
    }
   
else{
                    printf("Você não encontrou nada....\n");
                    vetor[i][j]=0;
                    valido=0;
}}
    
x=verificar(vetor);
if(x==0){
    break;
}
            i=rand()%7;
       
            j=rand()%7;
       
            while( vetor[i][j]!=1 && vetor[i][j]!=3){
           
            i=rand()%7;
       
            j=rand()%7;

}       if(vetor[i][j]==3){
    printf("Oponente encontrou\n");
    vetor[i][j]=5;
}
    else {
        vetor[i][j]=0;
    }
    y=verificar2(vetor);
}
    if(x==0){
        printf("Você encontrou todas as sobremesas! E para aos vencedores, a GRANITA!\n");
    }
    else{
        printf("O oponente encontrou todas as suas sobremesas. Para os perdedores, a rapadura.\n");
    }
 printf("\n");

    break;

case 2:
            printf("Feito por: Arthur Bernardo e Jeferson Carneiro\n");
        break;

case 0:
          break;
 
default:
           printf("Inválido, tente novamente\n");
            break;
 
    }
return 0;
}