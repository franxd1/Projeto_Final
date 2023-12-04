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
void removerHospede(hotel nomedoHotel[]) {
    int quarto;
    printf("Digite o número do quarto a ser liberado: ");
    scanf("%d", &quarto);

    if (quarto >= 1 && quarto <= quantidadeDEQuartos) {
        if (nomedoHotel[quarto - 1].hospede[0] != '\0') {
            nomedoHotel[quarto - 1].hospede[0] = '\0';
            printf("Hóspede removido com sucesso!\n");
        } else {
            printf("Quarto vazio. Nenhum hóspede para remover.\n");
        }
    } else {
        printf("Número de quarto inválido.\n");
    }
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
            case 2:
            //parte eduardo
            case 3:
            // parte adenilson
            case 4:
            // parte francisco
                break;
            case 5:
                system("cls");
                removerHospede(transilvania);
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