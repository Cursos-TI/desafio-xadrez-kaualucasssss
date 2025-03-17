#include <stdio.h>

int main() {
    int bispo = 1, rainha = 1, torre = 1, cavalo=1;
    int movtorre,movbispo,movrainha,movcavalo,mov=1;
    char direcao[20],direcaobispo[20],direcaorainha[20],direcaocavalo[20];  // Aqui, declarei uma string de tamanho 20 para a direção da torre
char cavaloodirecao[20];
    printf("Digite a quantidade de casas em que a torre irá se mover (max=5): ");
    scanf("%d", &movtorre);

    printf("Digite a direção que a torre vai se mover (exemplo: cima,baixo,esquerda,direita): ");
    scanf("%s", direcao);  // Usando %s para ler a direção até o primeiro espaço

    printf("---- Realizando movimento da torre ----\n");

    // Para este exemplo, a movimentação será apenas uma repetição
    do {
        printf("Movimento da torre: %s\n", direcao);  // Imprimindo a direção a cada movimento
        torre++;
    } while (torre <= movtorre);  // Enquanto a torre não atingir o número de movimentos



printf("Digite a quantidade de casas em que o bispo irá se mover: ");
    scanf("%d", &movbispo);

    printf("Digite a direção que o bispo vai se mover (exemplo: cima direita, cima esquerda): ");
    scanf("%s", direcaobispo);  // Usando %s para ler a direção até o primeiro espaço

    printf("---- Realizando movimento do bispo ----\n");

    // Para este exemplo, a movimentação será apenas uma repetição
    do {
        printf("Movimento do bispo: %s\n", direcaobispo);  // Imprimindo a direção a cada movimento
        bispo++;
    } while (bispo <= movbispo);  // Enquanto a torre não atingir o número de movimentos

  

printf("Digite a quantidade de casas em que a rainha irá se mover: ");
    scanf("%d", &movrainha);

    printf("Digite a direção que a rainha vai se mover (exemplo: cima,baixo,esquerda,direita): ");
    scanf("%s", direcaorainha);  // Usando %s para ler a direção até o primeiro espaço

    printf("---- Realizando movimento da rainha ----\n");

    // Para este exemplo, a movimentação será apenas uma repetição
    do {
        printf("Movimento do bispo: %s\n", direcaorainha);  // Imprimindo a direção a cada movimento
        rainha++;
    } while (rainha <= movrainha);  // Enquanto a rainha não atingir o número de movimento
    
   printf("Digite o número 2, para representar a quantidade de casas que o Cavalo vai percorrer: ");
    scanf("%d", &movcavalo);
    printf("Digite a direção que o Cavalo vai realizar na Horizontal ou Vertical: Ex. (Cima,baixo)\n");
    scanf(" %s", direcaocavalo);
   printf("Digite a direção que o Cavalo vai realizar para forma o L:  Virar a Direita ou Esquerda\n");
    scanf(" %s",cavaloodirecao);
    printf("\n");
    
while (mov--)
{for (cavalo = 0; cavalo < movcavalo; cavalo++)
{
 printf("%d casas para %s\n",cavalo,direcaocavalo);
}
printf("%d virar para %s\n",cavalo,cavaloodirecao);
cavalo++;
}





return 0;



}


