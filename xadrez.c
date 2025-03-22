
#include <stdio.h>

void movtorre(int casas1) {
    if (casas1 > 0) {
        movtorre(casas1 - 1);
        printf("%d casas para direita\n", casas1);
      
            }
}

void movrainha(int casas2) {
    if (casas2 > 0) {
        movrainha(casas2 - 1);
        printf("%d casas para esquerda\n", casas2);
       
    }
}
void movbispo(int casas3) {
    if (casas3 > 0) {
        movbispo(casas3 - 1);
        printf("%d direita,cima\n", casas3);
    }
}

int main() {
    
printf(" *** realizando movimento da torre ***\n");
movtorre(5);
printf("\n");


printf(" *** realizando movimento da rainha ***\n");
movrainha(8);
printf("\n");

printf(" *** realizando movimento do bispo ***\n");
movbispo(5);
printf("\n");


printf(" *** realizando movimento do cavalo ***\n");
for (int virar_D_cavalo = 3; virar_D_cavalo ==3; virar_D_cavalo--)
{
for ( int casasvalo = 1; casasvalo < 3; casasvalo++)
{
    printf("cima\n", casasvalo);
}

    printf("direita\n", virar_D_cavalo);
}



}

