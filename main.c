void listarCategorias() {
    printf("=== Categorias de Produtos ===\n");
    printf("1. Processadores (CPU)\n");
    printf("2. Placa-Mãe\n");
    printf("3. Memória RAM\n");
    printf("4. Armazenamento (HD/SSD)\n");
    printf("5. Placa de Vídeo (GPU)\n");
    printf("6. Fonte de Alimentação (PSU)\n");
    printf("7. Gabinete\n");
    printf("8. Sistema de Resfriamento\n");
}

void listarProdutosPorCategoria(int categoria, Produto *produtos, int *quantidade) {
    *quantidade = 0; // Reseta a quantidade de produtos

    switch (categoria) {
        case 1: // Processador (CPU)
            strcpy(produtos[*quantidade].nome, "Processador Intel i5");
            strcpy(produtos[*quantidade].marca, "Intel");
            produtos[(*quantidade)++].preco = 1500.0;
            strcpy(produtos[*quantidade].nome, "Processador AMD Ryzen 5");
            strcpy(produtos[*quantidade].marca, "AMD");
            produtos[(*quantidade)++].preco = 1400.0;
            strcpy(produtos[*quantidade].nome, "Processador Intel i7");
            strcpy(produtos[*quantidade].marca, "Intel");
            produtos[(*quantidade)++].preco = 2500.0;
            strcpy(produtos[*quantidade].nome, "Processador AMD Ryzen 7");
            strcpy(produtos[*quantidade].marca, "AMD");
            produtos[(*quantidade)++].preco = 2300.0;
            strcpy(produtos[*quantidade].nome, "Processador Intel i9");
            strcpy(produtos[*quantidade].marca, "Intel");
            produtos[(*quantidade)++].preco = 4000.0;
            break;
        case 2: // Placa-Mãe
            strcpy(produtos[*quantidade].nome, "Placa-Mãe ASUS ROG Strix");
            strcpy(produtos[*quantidade].marca, "ASUS");
            produtos[(*quantidade)++].preco = 1200.0;
            strcpy(produtos[*quantidade].nome, "Placa-Mãe Gigabyte B450");
            strcpy(produtos[*quantidade].marca, "Gigabyte");
            produtos[(*quantidade)++].preco = 800.0;
            strcpy(produtos[*quantidade].nome, "Placa-Mãe MSI MPG");
            strcpy(produtos[*quantidade].marca, "MSI");
            produtos[(*quantidade)++].preco = 1000.0;
            strcpy(produtos[*quantidade].nome, "Placa-Mãe ASRock B550");
            strcpy(produtos[*quantidade].marca, "ASRock");
            produtos[(*quantidade)++].preco = 700.0;
            strcpy(produtos[*quantidade].nome, "Placa-Mãe Intel Z490");
            strcpy(produtos[*quantidade].marca, "Intel");
            produtos[(*quantidade)++].preco = 1500.0;
            break;
        case 3: // Memória RAM
            strcpy(produtos[*quantidade].nome, "Memória RAM 8GB - Corsair");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 400.0;
            strcpy(produtos[*quantidade].nome, "Memória RAM 16GB - Kingston");
            strcpy(produtos[*quantidade].marca, "Kingston");
            produtos[(*quantidade)++].preco = 800.0;
            strcpy(produtos[*quantidade].nome, "Memória RAM 32GB - G.Skill");
            strcpy(produtos[*quantidade].marca, "G.Skill");
            produtos[(*quantidade)++].preco = 1600.0;
            strcpy(produtos[*quantidade].nome, "Memória RAM 4GB - Crucial");
            strcpy(produtos[*quantidade].marca, "Crucial");
            produtos[(*quantidade)++].preco = 200.0;
            strcpy(produtos[*quantidade].nome, "Memória RAM 64GB - Corsair");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 3200.0;
            break;
        case 4: // Armazenamento (HD/SSD)
            strcpy(produtos[*quantidade].nome, "HD 1TB - Seagate");
            strcpy(produtos[*quantidade].marca, "Seagate");
            produtos[(*quantidade)++].preco = 300.0;
            strcpy(produtos[*quantidade].nome, "SSD 240GB - Kingston");
            strcpy(produtos[*quantidade].marca, "Kingston");
            produtos[(*quantidade)++].preco = 200.0;
            strcpy(produtos[*quantidade].nome, "SSD 1TB - Samsung");
            strcpy(produtos[*quantidade].marca, "Samsung");
            produtos[(*quantidade)++].preco = 700.0;
            strcpy(produtos[*quantidade].nome, "HD 2TB - Western Digital");
            strcpy(produtos[*quantidade].marca, "Western Digital");
            produtos[(*quantidade)++].preco = 500.0;
            strcpy(produtos[*quantidade].nome, "SSD 500GB - Crucial");
            strcpy(produtos[*quantidade].marca, "Crucial");
            produtos[(*quantidade)++].preco = 400.0;
            break;
        case 5: // Placa de Vídeo (GPU)
            strcpy(produtos[*quantidade].nome, "Placa de Vídeo RX 6600");
            strcpy(produtos[*quantidade].marca, "AMD");
            produtos[(*quantidade)++].preco = 2000.0;
            strcpy(produtos[*quantidade].nome, "Placa de Vídeo RTX 3070");
            strcpy(produtos[*quantidade].marca, "NVIDIA");
            produtos[(*quantidade)++].preco = 3500.0;
            strcpy(produtos[*quantidade].nome, "Placa de Vídeo RTX 4090");
            strcpy(produtos[*quantidade].marca, "NVIDIA");
            produtos[(*quantidade)++].preco = 8000.0;
            strcpy(produtos[*quantidade].nome, "Placa de Vídeo GTX 1660");
            strcpy(produtos[*quantidade].marca, "NVIDIA");
            produtos[(*quantidade)++].preco = 1500.0;
            strcpy(produtos[*quantidade].nome, "Placa de Vídeo RX 5700");
            strcpy(produtos[*quantidade].marca, "AMD");
            produtos[(*quantidade)++].preco = 2500.0;
            break;
        case 6: // Fonte de Alimentação (PSU)
            strcpy(produtos[*quantidade].nome, "Fonte 500W - Corsair");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 300.0;
            strcpy(produtos[*quantidade].nome, "Fonte 600W - Cooler Master");
            strcpy(produtos[*quantidade].marca, "Cooler Master");
            produtos[(*quantidade)++].preco = 400.0;
            strcpy(produtos[*quantidade].nome, "Fonte 750W - EVGA");
            strcpy(produtos[*quantidade].marca, "EVGA");
            produtos[(*quantidade)++].preco = 600.0;
            strcpy(produtos[*quantidade].nome, "Fonte 850W - Corsair");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 800.0;
            strcpy(produtos[*quantidade].nome, "Fonte 1000W - Thermaltake");
            strcpy(produtos[*quantidade].marca, "Thermaltake");
            produtos[(*quantidade)++].preco = 1000.0;
            break;
        case 7: // Gabinete
            strcpy(produtos[*quantidade].nome, "Gabinete Cooler Master");
            strcpy(produtos[*quantidade].marca, "Cooler Master");
            produtos[(*quantidade)++].preco = 600.0;
            strcpy(produtos[*quantidade].nome, "Gabinete Corsair");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 800.0;
            strcpy(produtos[*quantidade].nome, "Gabinete NZXT");
            strcpy(produtos[*quantidade].marca, "NZXT");
            produtos[(*quantidade)++].preco = 700.0;
            strcpy(produtos[*quantidade].nome, "Gabinete Thermaltake");
            strcpy(produtos[*quantidade].marca, "Thermaltake");
            produtos[(*quantidade)++].preco = 500.0;
            strcpy(produtos[*quantidade].nome, "Gabinete Redragon");
            strcpy(produtos[*quantidade].marca, "Redragon");
            produtos[(*quantidade)++].preco = 300.0;
            break;
        case 8: // Sistema de Resfriamento
            strcpy(produtos[*quantidade].nome, "Cooler Master Hyper 212");
            strcpy(produtos[*quantidade].marca, "Cooler Master");
            produtos[(*quantidade)++].preco = 200.0;
            strcpy(produtos[*quantidade].nome, "Corsair H100i");
            strcpy(produtos[*quantidade].marca, "Corsair");
            produtos[(*quantidade)++].preco = 900.0;
            strcpy(produtos[*quantidade].nome, "Thermaltake Water 3.0");
            strcpy(produtos[*quantidade].marca, "Thermaltake");
            produtos[(*quantidade)++].preco = 700.0;
            strcpy(produtos[*quantidade].nome, "Noctua NH-D15");
            strcpy(produtos[*quantidade].marca, "Noctua");
            produtos[(*quantidade)++].preco = 1300.0;
            strcpy(produtos[*quantidade].nome, "Cooler Master MasterLiquid ML240");
            strcpy(produtos[*quantidade].marca, "Cooler Master");
            produtos[(*quantidade)++].preco = 500.0;
            break;
        default:
            printf("Categoria inválida!\n");
            *quantidade = 0;
            break;
    }

    printf("Produtos disponíveis:\n");
    for (int i = 0; i < *quantidade; i++) {
        printf("%d. %s - %s - R$%.2f\n", i + 1, produtos[i].nome, produtos[i].marca, produtos[i].preco);
    }
}

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
