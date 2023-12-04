#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define quantidadeDEQuartos 30

typedef struct {
    char hospede[30];
} hotel;

void inicializarHotel(hotel nomedoHotel[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        nomedoHotel[i].hospede[0] = '\0';
    }
}

void inserirHospede(hotel nomedoHotel[], int numeroQuarto) {
    if (nomedoHotel[numeroQuarto - 1].hospede[0] == '\0') {
        printf("Digite o nome do hóspede: ");
        getchar();
        fgets(nomedoHotel[numeroQuarto - 1].hospede, sizeof(nomedoHotel[numeroQuarto - 1].hospede), stdin);
        nomedoHotel[numeroQuarto - 1].hospede[strcspn(nomedoHotel[numeroQuarto - 1].hospede, "\n")] = '\0';
        printf("Hóspede cadastrado com sucesso!\n");
    } else {
        printf("Quarto já ocupado. Escolha outro quarto.\n");
    }
}
void listarHospedes(hotel nomedoHotel[]) {
    printf("Lista de hóspede:\n");
    for (int i = 0; i < 30; i++) {
        if (nomedoHotel[i].hospede[0] != '\0') {
            printf("Quarto %d: %s\n", i + 1, nomedoHotel[i].hospede);
        }
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
            case 1:
                do{
                system("cls");
                printf("Digite o número do quarto: ");
                int numeroDoQuarto;
                scanf(" %d", &numeroDoQuarto);
                inserirHospede(transilvania, numeroDoQuarto);
                printf("Deseja inserir mais Hóspedes? (S) para Sim e (N) para Não: ");
                scanf(" %c", &inserirMaisHospedes);

                }while(inserirMaisHospedes != 'N');
                system("cls");
                break;
            case 2:
                system("cls");
                listarHospedes(transilvania);
                break;
            case 3:
            //parte adenilson
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