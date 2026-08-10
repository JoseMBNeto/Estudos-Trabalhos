#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LIMITE_TOTAL 10
#define LIMITE_MEIA 5

typedef struct Usuario {
    int id;
    char nome[50];
    bool ehfan;
    struct Usuario *next;
}Usuario;

typedef struct Fila {
    Usuario *inicio;
    Usuario *fim;
    int tamanho;
}Fila;

typedef struct {
    int totalVendidos;
    int meiasVendidas;
}Bilheteria;

Fila* criarfila (){
    Fila *f = (Fila*) malloc (sizeof(Fila));
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
    return f;
}

void enfileirar (Fila *f, int id, const char *nome, bool ehfan){
    Usuario *novo = (Usuario*) malloc (sizeof(Usuario));
    novo->id = id;
    strcpy(novo->nome, nome);
    novo->ehfan = ehfan;
    novo->next = NULL;

    int pessoasAfrente = f->tamanho;

    if (f->inicio == NULL){
        f->inicio = novo;
    }else{
        f->fim->next = novo;
    }

    f->fim = novo;
    f->tamanho++;

    printf("\n");
    printf("Bem vindo, %s!\n", novo->nome);
    printf("Id do usuario: %d (%s)\n", novo->id, novo->ehfan ? "Membro do clube" : "Publico geral");
    printf(" -> Ha exatamente %d pessoas a sua frente na fila.\n", pessoasAfrente);
}

void atenderProximo (Fila *f, Bilheteria *b, int tipoIngresso){
    if (f->inicio == NULL){
        printf("\n [!] Nao ha ninguem na fila para ser atendido!\n");
        return;
    }

    if (b->totalVendidos >= LIMITE_TOTAL){
        printf("\n[X] INGRESSOS TOTALMENTE ESGOTADOS");
        return;
    }

    if (tipoIngresso == 2 && b->meiasVendidas >= LIMITE_MEIA){
        printf("\n[!] A cota de meia-entrada (%d) já esgotou!\n", LIMITE_MEIA);
        printf("    O atendimento foi cancelado. Escolha Inteira para prosseguir.\n");
        return;
    }

    Usuario *atendido = f->inicio;
    f->inicio = f->inicio->next;

    if (f->inicio == NULL){
        f->fim = NULL;
    }
    f->tamanho++;

    b->totalVendidos++;
    if (tipoIngresso == 2){
        b->meiasVendidas++;
    }

    printf("\n[-] ATENDIMENTO CONCLUIDO:\n");
    printf("    Usuario: %s (id: %d)\n", atendido->nome, atendido->id);
    printf("    Tipo de ingresso: %s\n", (tipoIngresso == 2) ? "Meia entrada" : "Inteira");
    printf("    Ingressos vendidos: %d/%d (Meias: %d/%d)\n", b->totalVendidos, LIMITE_TOTAL, b->meiasVendidas, LIMITE_MEIA);

    free(atendido);
}

void imprimirFila (Fila *f) {
    if (f->inicio == NULL){
        printf("\n[i] Estado da Fila: [Vazia]\n");
        return;
    }

    printf("\n--- ESTADO ATUAL DA FILA (%d pessoas) ---\n", f->tamanho);
    Usuario *atual = f->inicio;
    int pos = 1;

    while (atual != NULL) {
        printf("   %d° lugar -> ID:%d | Fa: %s\n", pos++, atual->id, atual->ehfan ? "Sim" : "Nao");
        atual = atual->next;
    }
}

int main() {
    Fila *filaVirtual = criarfila();
    Bilheteria bilheteria = {0, 0};

    int proximoId = 101;

    int opcao = -1; 

    while (opcao != 0) {
        printf("1 Entrar na fila (novo usuario)\n");
        printf("2 Atender Proximo da fila (comprar)\n");
        printf("3 Visualizar Fila Atual\n");
        printf("4 Consultar Status dos Ingressos\n");
        printf("0 Sair do sistema\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: {
                char nome [50];
                int respFan;

                printf("Digite seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';

                printf("Voce e membro do fa clube? (1- sim | 2- nao): ");
                scanf("%d", &respFan);
                
                enfileirar(filaVirtual, proximoId++, nome, respFan == 1);
                break;
            }

            case 2: {
                if (filaVirtual->inicio == NULL){
                    printf("\n[!] Nao ha usuarios na fila para atendimento!\n");
                    break;
                }

                int tipoIngresso;
                printf("Escolha o tipo de ingresso (1- inteira | 2- meia): ");
                scanf("%d", &tipoIngresso);

                atenderProximo(filaVirtual, &bilheteria, tipoIngresso);
                break;
            }

            case 3: {
                imprimirFila(filaVirtual);
                break;
            }

            case 4: {
                printf("Total Vendas: %d / %d\n", bilheteria.totalVendidos, LIMITE_TOTAL);
                printf("Mais vendidas: %d / %d\n", bilheteria.meiasVendidas, LIMITE_MEIA);\
                break;
            }

            case 0: {
                printf("\nEncerrando o sistema");
                break;
            }

            default:
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}