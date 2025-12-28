#include <stdio.h>

void moverTorre(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispo(int casas) {
    if (casas <= 0) {
        return;
    }

    for (int vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    moverTorre(casasTorre);
    printf("\n");

    moverBispo(casasBispo);
    printf("\n");

    moverRainha(casasRainha);
    printf("\n");
    

    for (int passoVertical = 0; passoVertical < 2; passoVertical++) {
        printf("Cima\n");

        if (passoVertical == 1) {
            int passoHorizontal = 0;

            while (passoHorizontal < 1) {
                printf("Direita\n");
                passoHorizontal++;
            }
        }
    }

    return 0;
}