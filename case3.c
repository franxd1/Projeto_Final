#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define quantidadeDEQuartos 30

typedef struct {
    char hospede[30];  // Corrigindo a declaração da struct
} hotel;

void inicializarHotel(hotel nomedoHotel[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        nomedoHotel[i].hospede[0] = '\0';  // Inicializando cada quarto
    }
}
void buscarHospede(hotel nomedoHotel[]) {
    char nome[50];
    printf("Digite o nome do hóspede a ser buscado: ");
    getchar();
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < quantidadeDEQuartos; i++) {
        if (strcmp(nomedoHotel[i].hospede, nome) == 0) {
            printf("%s está no quarto %d.\n", nome, i + 1);
            return;
        }
    }

    printf("%s não encontrado.\n", nome);
    system("pause");
    system("cls");
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    hotel transilvania[30];
    inicializarHotel(transilvania, 30);

    int opcao;
    char inserirMaisHospedes;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Inserir novo hóspede\n");
        printf("2. Listar hóspedes\n");
        printf("3. Buscar hóspede\n");
        printf("4. Editar hóspede\n");
        printf("5. Remover hóspede\n");
        printf("6. Mostrar quartos disponíveis\n");
        printf("7. Salvar em arquivo Lista de Hóspedes\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            //parte victor
                break;
            case 2:
            //parte eduardo
                break;
            case 3:
                system("cls");
                buscarHospede(transilvania);
                break;
            case 4:
            // parte francisco
                break;
            case 5:
            // parte Kelvin
                break;
            case 6:
            // parte yan
                break;
            case 7:
                system("cls");
                printf("opção ainda nao disponivel\n");
                break;
            case 0:
                printf("Saindo do programa. Até logo!\n");
                system("pause");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}