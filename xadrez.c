#include <stdio.h>

int main(){

    int i = 0;
    int j = 0;
    int k = 0;

    printf("Movimento da torre:\n");
    for ( i = 0; i < 5; i++)
{
    printf("Direita\n");
}

    printf("Movimento bispo:\n");
    while (j < 5 )
{
    printf("Cima, Direita\n");
    j++;
}
    printf("Movimento Da Rainha:\n");
    do
{
    printf("Esquerda\n");
    k++;
 
}   while (k < 8);

    return 0;
}