#include <stdio.h>

int main() {
    
    int d;
    printf("Insira um valor de 1 a 7: ");
    scanf("%d",&d);
    switch(d){
      case 1:
             printf("Insira um valor de 1 a 7: ");
             printf("Domingo\n");
             break;
      case 2:
             printf("Segunda Feira\n");
             break;
      case 3:
             printf("Terça Feira\n");
             break;
      case 4:
             printf("Quarta Feira\n");
             break;
      case 5:
             printf("Quinta Feira\n");
             break;
      case 6: 
             printf("Sexta Feira\n");
             break;
      case 7:  
             printf("Sábado\n");
             break;
       default:
             printf("Valor inválido.\n");
             break;
    }
           return 0;
}