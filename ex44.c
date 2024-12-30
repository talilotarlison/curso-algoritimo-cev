#include <stdio.h>
#include <string.h> // Necessário para strcpy

int main(void) {
    int i = 1;
    float maiorNota = 0, nota;
    char aluno[100], melhorAluno[100]; // Usando arrays de char para armazenar os nomes

    while (i <= 3) {
        printf("Insira nome do aluno.\n");
        scanf("%s", aluno);

        printf("Insira nota.\n");
        scanf("%f", &nota);

        if (nota >= maiorNota) {
            maiorNota = nota;
            strcpy(melhorAluno, aluno); // Copia o nome do aluno para melhorAluno
        }
        i++;
    }
    
    printf("Melhor nota: %.2f \n", maiorNota);
    printf("Melhor aluno: %s \n", melhorAluno);
    return 0;
}
// https://embarcados.com.br/linguagem-c-guia-completo/#Introducao-sobre-a-linguagem-C
