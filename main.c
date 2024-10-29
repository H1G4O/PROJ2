void cadastrar() {
    if (totalUsuarios >= MAX_USUARIOS) {
        printf("Limite de usuários alcançado.\n");
        return;
    }

    Usuario novoUsuario;
    printf("Digite um nome de usuário: ");
    scanf("%s", novoUsuario.username);
    printf("Digite uma senha: ");
    scanf("%s", novoUsuario.password);
    novoUsuario.saldo = 0.0;

    usuarios[totalUsuarios++] = novoUsuario;
    printf("Usuário cadastrado com sucesso!\n");
}

int login() {
    int opcao;
    printf("1. Login\n");
    printf("2. Cadastrar\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        char username[50], password[50];
        printf("Digite seu nome de usuário: ");
        scanf("%s", username);
        printf("Digite sua senha: ");
        scanf("%s", password);

        for (int i = 0; i < totalUsuarios; i++) {
            if (strcmp(usuarios[i].username, username) == 0 && strcmp(usuarios[i].password, password) == 0) {
                printf("Login bem-sucedido!\n");
                return i; // Retorna o índice do usuário logado
            }
        }
        printf("Usuário ou senha inválidos.\n");
        return -1; // Login falhou
    } else if (opcao == 2) {
        cadastrar();
        return login(); // Tenta fazer login após cadastrar
    } else {
        printf("Opção inválida.\n");
        return -1; // Login falhou
    }
}
