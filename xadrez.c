#include <stdio.h>

void movimentotorre (int movimento) {
    if(movimento > 0){
    
    printf("A torre se movimentou para direita\n");
    
    movimentotorre (movimento - 1);
}
}
void movimentobispo (int movimento){
    
    do
    {
        printf("o bispo se movientou para cima\n");
        printf("o bispo se movimentou para direita\n");
        movimento --;
    
    
    }while (movimento != 0 );   
}
void movimentorainha (int movimento){
if (movimento > 0){
    printf ("A rainha se movimentou para esquerda\n");

    movimentorainha (movimento - 1);
}

}

void movimentocavalo (int cavalo){
for (int i = 1; i < cavalo; i++){
    
    printf("O cavalo se moveu para baixo\n");
    int j = 1;
    while (j < i)
    {
     j++;
     printf("O cavalo se moveu para direita\n");  
    }

}

}

int main(){

movimentotorre(5);
movimentobispo (5);
movimentorainha (8);
movimentocavalo (3);
return 0;

}