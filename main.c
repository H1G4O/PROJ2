void adicionarAoCarrinho(Carrinho *carrinho, Produto produto) {
    if (carrinho->quantidade < MAX_CARRINHO) {
        carrinho->produtos[carrinho->quantidade++] = produto;
        printf("Produto %s adicionado ao carrinho.\n", produto.nome);
    } else {
        printf("Carrinho cheio! Não é possível adicionar mais produtos.\n");
    }
}

void verCarrinho(Carrinho *carrinho) {
    if (carrinho->quantidade == 0) {
        printf("Carrinho vazio.\n");
        return;
    }

    printf("=== Carrinho ===\n");
    for (int i = 0; i < carrinho->quantidade; i++) {
        printf("%d. %s - %s - R$%.2f\n", i + 1, carrinho->produtos[i].nome, carrinho->produtos[i].marca, carrinho->produtos[i].preco);
    }
}
