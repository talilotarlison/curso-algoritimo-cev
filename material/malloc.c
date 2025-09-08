#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Alocando 10 bytes de memória dinamicamente para armazenar 10 caracteres
    char *nome = malloc(10 * sizeof(char));

    // Verificando se a alocação foi bem-sucedida
    if (nome == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; // Saída com código de erro
    }

    // Atribuindo um valor ao array alocado dinamicamente
    printf("Digite seu nome: ");
    fgets(nome, 10, stdin); // Usando fgets para evitar estouro de buffer

    // Remover o caractere de nova linha '\n' se presente
    nome[strcspn(nome, "\n")] = '\0';

    // Exibindo o nome
    printf("Olá, %s!\n", nome);

    // Liberando a memória alocada
    free(nome);

    return 0;
}
