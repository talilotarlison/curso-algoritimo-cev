#include <stdio.h>

int main() {
    // Inicializando o array 'nome' com a string "Maria"
    char nome[] = "Maria";  // O tamanho é 6 (5 caracteres + '\0')

    // Exibindo o nome e o tamanho do array
    printf("Nome: %s\n", nome);
    printf("Tamanho do array (incluindo '\\0'): %lu\n", sizeof(nome));

    // Exibindo o tamanho da string sem contar o '\0'
    printf("Tamanho da string sem o '\\0': %lu\n", strlen(nome));

    return 0;
}
