void depositar(Usuario *usuario) {
    float valor;
    printf("Informe o valor a ser depositado: R$");
    scanf("%f", &valor);
    usuario->saldo += valor;
    printf("Depósito realizado! Saldo atual: R$%.2f\n", usuario->saldo);
}

void sacar(Usuario *usuario) {
    float valor;
    printf("Informe o valor a ser sacado: R$");
    scanf("%f", &valor);
    if (valor > usuario->saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        usuario->saldo -= valor;
        printf("Saque realizado! Saldo atual: R$%.2f\n", usuario->saldo);
    }
}
