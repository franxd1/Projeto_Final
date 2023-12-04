#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define quantidadeDEQuartos 30

typedef struct {
    char hospede[30];  // Corrigindo a declaraÃ§Ã£o da struct
} hotel;

void inicializarHotel(hotel nomedoHotel[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        nomedoHotel[i].hospede[0] = '\0';  // Inicializando cada quarto
    }
}
void removerHospede(hotel nomedoHotel[]) {
    int quarto;
    printf("Digite o nÃºmero do quarto a ser liberado: ");
    scanf("%d", &quarto);

    if (quarto >= 1 && quarto <= quantidadeDEQuartos) {
        if (nomedoHotel[quarto - 1].hospede[0] != '\0') {
            nomedoHotel[quarto - 1].hospede[0] = '\0';
            printf("HÃ³spede removido com sucesso!\n");
        } else {
            printf("Quarto vazio. Nenhum hÃ³spede para remover.\n");
        }
    } else {
        printf("NÃºmero de quarto invÃ¡lido.\n");
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
        printf("1. Inserir novo hÃ³spede\n");
        printf("2. Listar hÃ³spedes\n");
        printf("3. Buscar hÃ³spede\n");
        printf("4. Editar hÃ³spede\n");
        printf("5. Remover hÃ³spede\n");
        printf("6. Mostrar quartos disponÃ­veis\n");
        printf("7. Salvar em arquivo Lista de HÃ³spedes\n");
        printf("0. Sair\n");
        printf("Digite a opÃ§Ã£o desejada: ");
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
                printf("opÃ§Ã£o ainda nao disponivel\n");
                break;
            case 0:
                printf("Saindo do programa. AtÃ© logo!\n");
                system("pause");
                break;
            default:
                printf("OpÃ§Ã£o invÃ¡lida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}