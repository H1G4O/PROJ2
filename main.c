#include <stdio.h>
#include <string.h>

void cadastrar();
int login();
void listarCategorias();
void listarProdutosPorCategoria(int categoria, Produto *produtos, int *quantidade);
void adicionarAoCarrinho(Carrinho *carrinho, Produto produto);
void verCarrinho(Carrinho *carrinho);
void depositar(Usuario *usuario);
void sacar(Usuario *usuario);
void finalizarCompra(Usuario *usuario, Carrinho *carrinho);
void verCarteira(Usuario *usuario);
void voltarMenu();
void listarPCsMontados();
void listarPerifericos();

int main() {
    int usuarioLogado = login();

    if (usuarioLogado == -1) {
        printf("Nenhum usuário logado. Sair...\n");
        return 0;
    }

    while (1) {
        printf("=== Menu Principal ===\n");
        printf("1. Listar Categorias de Produtos\n");
        printf("2. Ver Carrinho\n");
        printf("3. Depositar\n");
        printf("4. Sacar\n");
        printf("5. Finalizar Compra\n");
        printf("6. Ver Saldo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        int opcao;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarCategorias();
                printf("Escolha uma categoria: ");
                int categoria;
                scanf("%d", &categoria);
                Produto produtos[MAX_PRODUTOS];
                int quantidade;
                listarProdutosPorCategoria(categoria, produtos, &quantidade);
                printf("Escolha um produto (1-%d) ou 0 para voltar: ", quantidade);
                int escolha;
                scanf("%d", &escolha);
                if (escolha > 0 && escolha <= quantidade) {
                    adicionarAoCarrinho(&carrinho, produtos[escolha - 1]);
                }
                break;
            case 2:
                verCarrinho(&carrinho);
                break;
            case 3:
                depositar(&usuarios[usuarioLogado]);
                break;
            case 4:
                sacar(&usuarios[usuarioLogado]);
                break;
            case 5:
                finalizarCompra(&usuarios[usuarioLogado], &carrinho);
                break;
            case 6:
                verCarteira(&usuarios[usuarioLogado]);
                break;
            case 0:
                return 0;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
}
