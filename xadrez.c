#include <stdio.h>

int main(){
 
    int j; 
    int k;
    
    printf("Movimento da torre:\n");
    for (int i = 0; i < 5; i++)
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

   printf("Movimento do cavalo\n");
   for (int l = 1; l < 3; l++)
{
   printf("Cavalo se moveu para baixo\n");
   for (int N= 1;N < l; N++)
{
    printf("Cavalo se moveu para esquerda\n");
}
}
return 0;

}