#include <stdio.h>

#define TAM 2

typedef struct {
    int codigo;
    char descricao[50];
    float precoCompra;
    float precoVenda;
    int quantidade;
    int estoqueMinimo;
} Produto;

void cadastrarProdutos(Produto produtos[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Cadastro do produto %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        printf("Descricao: ");
        scanf(" %[^\n]", produtos[i].descricao);
        printf("Preco de compra: ");
        scanf("%f", &produtos[i].precoCompra);
        printf("Preco de venda: ");
        scanf("%f", &produtos[i].precoVenda);
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
        printf("Estoque minimo: ");
        scanf("%d", &produtos[i].estoqueMinimo);
        printf("\n");
    }
}

void calcularLucro(Produto produtos[]) {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < TAM; i++) {
        if (produtos[i].codigo == codigo) {
            float lucro = produtos[i].precoVenda - produtos[i].precoCompra;
            float percentual = (lucro / produtos[i].precoCompra) * 100;
            printf("Lucro: R$ %.2f (%.2f%%)\n", lucro, percentual);
            return;
        }
    }

    printf("Produto nao encontrado.\n");
}

void verificarEstoqueMinimo(Produto produtos[]) {
    printf("Produtos com estoque abaixo do minimo:\n");
    for (int i = 0; i < TAM; i++) {
        if (produtos[i].quantidade < produtos[i].estoqueMinimo) {
            printf("Codigo: %d, Descricao: %s, Quantidade: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].quantidade);
        }
    }
}

int main() {
    Produto produtos[TAM];

    cadastrarProdutos(produtos);
    calcularLucro(produtos);
    verificarEstoqueMinimo(produtos);

    return 0;
}