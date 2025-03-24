#include <stdio.h>
int main(){
    int torre, bispo, rainha;
    for(torre = 1; torre <= 5; torre++){
        printf("Torre moveu-se uma casa para a ");
        printf("Direita\n");
    }
      for(bispo = 1; bispo <= 5; bispo++){
        printf("bispo moveu-se uma casa para ");
        printf("Cima Esquerda\n");
    }
       for(rainha = 1; rainha <= 8; rainha++){
        printf("rainha moveu-se uma casa para a ");
        printf("Esquerda\n");
    }
    return 0;
}
