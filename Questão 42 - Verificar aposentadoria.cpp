#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int cod;
    int nascimento;
    int ingresso;
    int idade;
    int tempoTrabalho;
    
    printf("\nQuestão 42 - Verificar aposentadoria de funcionário.");
    
    printf("\nInsira o código do funcionário: ");
    scanf("%d", &cod);
    
    printf("\nInsira o ano de nascimento do funcionário: ");
    scanf("%d", &nascimento);
    
    printf("\nInsira o ano de ingresso do funcionário na empresa: ");
    scanf("%d", &ingresso);
    
    printf("\nCódigo do funcionário: %d", cod);
    
    idade = 2022 - nascimento;
    
    printf("\nIdade do funcionário: %d anos.", idade);
    
    tempoTrabalho = 2022 - ingresso ;
    
    printf("\nTempo de trabalho na empresa: %d anos.", tempoTrabalho);
    
    if(idade >= 65 || tempoTrabalho >= 30 || (idade >= 60 && tempoTrabalho >= 25)) printf("\nRequerer aposentadoria.");
        else printf("\nNão requerer aposentadoria.");
        
    return 0;
}
