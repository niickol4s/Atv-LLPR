#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int cod;
    int nascimento;
    int ingresso;
    int idade;
    int tempoTrabalho;
    
    printf("\nQuest�o 42 - Verificar aposentadoria de funcion�rio.");
    
    printf("\nInsira o c�digo do funcion�rio: ");
    scanf("%d", &cod);
    
    printf("\nInsira o ano de nascimento do funcion�rio: ");
    scanf("%d", &nascimento);
    
    printf("\nInsira o ano de ingresso do funcion�rio na empresa: ");
    scanf("%d", &ingresso);
    
    printf("\nC�digo do funcion�rio: %d", cod);
    
    idade = 2022 - nascimento;
    
    printf("\nIdade do funcion�rio: %d anos.", idade);
    
    tempoTrabalho = 2022 - ingresso ;
    
    printf("\nTempo de trabalho na empresa: %d anos.", tempoTrabalho);
    
    if(idade >= 65 || tempoTrabalho >= 30 || (idade >= 60 && tempoTrabalho >= 25)) printf("\nRequerer aposentadoria.");
        else printf("\nN�o requerer aposentadoria.");
        
    return 0;
}
