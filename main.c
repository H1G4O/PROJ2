void finalizarCompra(Usuario *usuario, Carrinho *carrinho) {
    float total = 0;
    for (int i = 0; i < carrinho->quantidade; i++) {
        total += carrinho->produtos[i].preco;
    }

    if (total > usuario->saldo) {
        printf("Saldo insuficiente para finalizar a compra!\n");
    } else {
        usuario->saldo -= total;
        printf("Compra finalizada! Total: R$%.2f\n", total);
        carrinho->quantidade = 0; // Limpa o carrinho após a compra
    }
}

void verCarteira(Usuario *usuario) {
    printf("Saldo disponível: R$%.2f\n", usuario->saldo);
}

void voltarMenu() {
    printf("Voltando ao menu principal...\n");
}
