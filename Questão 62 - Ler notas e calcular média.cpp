#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int aluno;
    int nota;
    int i = 0;
    int somaNota = 1;
    float media;
    
    printf("\nQuest�o 62 - Ler quantidade de alunos e calcular a m�dia de notas da turma.\n");
    
    printf("\nInsira a quantidade de alunos na turma: ");
    scanf("%d", &aluno);
    
    while(i < aluno) {
        printf("\nInsira a nota do aluno: ");
        scanf("%d", &nota);
        i += 1;
        somaNota = somaNota + nota;
    }
    
    media = (float)somaNota / aluno;
    
    printf("\nM�dia da turma: %.1f", media);
    
    return 0;
}
