#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    srand(time(NULL));
   
    int vetor[7][7];
    int i,j,y,x,start;
    
    printf("\n\n\t  SOBREMESAS\n(Um jogo inspirado em batalha naval!)\n\n\tDigita 1 para comecar\n\tDigite 0 para sair\n\tDigite 2 para os Creditos\n");
    scanf("%d",&start);
        
    switch (start)
    {
    case 1:
        printf("\n\n");
           

            for(i=0;i<=6;i++){
                for(j=0;j<=6;j++){
                    vetor[i][j]=1;
                    printf(" %d", vetor[i][j]);
} 
            printf("\n");

}       printf("\nInsira agora 5 posições, com os numeros de 0 até 6 com virgulas no meio.(ex:0,3)\n");
for(x=0;x<=4;x++){

    scanf("%d,%d", &i, &j);
       
        vetor[i][j]=3;
}

    for(x=0;x<=4;x++){
    
        i=rand()%7;
    
        j=rand()%7;
    
        
    
        while(vetor[i][j]==3){
       
            i=rand()%7;
        
            j=rand()%7;
 }  
        vetor[i][j]=4;
    printf(" %d,%d \n", i,j);
} 

    x=1;
    y=1;
 
    while(x==1 && y==1) {  
   
        x=0;
        y=0;
   
        for(i=0;i<=6;i++){
       
            for(j=0;j<=6;j++){
               
                if(vetor[i][j]==4){
                        printf(" 1");
                    
}               else if(vetor[i][j]==3){
                        printf(" 3");
                    
}
                    else{
                    printf(" %d", vetor[i][j]);
}
}
 
printf("\n");
} 
printf("\n");
   
printf("digita a posição:\n");
    
scanf(" %d,%d", &i,&j);
         
if(vetor[i][j]==4){
            printf("Você encontrou uma sobremesa!\n");
            vetor[i][j]=2;
}
         
else{
                    printf("Você não encontrou....\n");
                    vetor[i][j]=0;
}
        for(i=0;i<=6;i++){
        
            for(j=0;j<=6;j++){
                
                if(vetor[i][j]==4){
                       x=1;
                    
}               else if(vetor[i][j]==3){
                    y=1;
}
}
}   if(x==0){
    break;
}
            i=rand()%7;
        
            j=rand()%7;
       
            while( vetor[i][j]!=1){
           
            i=rand()%7;
        
            j=rand()%7;

}       if(vetor[i][j]==3){
    printf("Oponente encontrou\n");
    vetor[i][j]=5;
}
    else {
        vetor[i][j]=0;
    }
    for(i=0;i<=6;i++){
        
            for(j=0;j<=6;j++){
                
               if(vetor[i][j]==3){
                    y=1;
}
}
}
}
    if(x==0){
        printf("Você ganhou!\n");
    }
    else{
        printf("Você perdeu...\n");
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
