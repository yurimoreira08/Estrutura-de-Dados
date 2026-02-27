#include <stdio.h>

struct Endereco {
    char rua[50];
    int numero;
};

struct Contato {
    char nome[50];
    char telefone[20];
    struct Endereco endereco;
};

int main() {

    struct Contato contatos[10];
    int quantidade = 0;
    char opcao = 's';

    while (opcao == 's' && quantidade < 10) {

        printf("Digite o nome: ");
        scanf(" %[^\n]", contatos[quantidade].nome);

        printf("Digite o telefone: ");
        scanf(" %[^\n]", contatos[quantidade].telefone);

        printf("Digite a rua: ");
        scanf(" %[^\n]", contatos[quantidade].endereco.rua);

        printf("Digite o numero da casa: ");
        scanf("%d", &contatos[quantidade].endereco.numero);

        quantidade++;

        printf("Deseja cadastrar outro contato? (s/n): ");
        scanf(" %c", &opcao);
    }

    printf("\n--- Contatos cadastrados ---");

    for (int i = 0; i < quantidade; i++) {
        printf("\nContato %d:\n", i+1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Endereco: %s, %d\n", contatos[i].endereco.rua, contatos[i].endereco.numero);
    }

    return 0;
}






