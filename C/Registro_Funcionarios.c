    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

        //Estrutura de funcionários
    typedef struct {
        int id;
        char nome[50];
        int idade;
        char email[50];
        float salario;
    } Funcionario;

    typedef struct no {
        Funcionario dados;
        struct no* prox;
    } No;

        //Busca por id
    No* buscar(No* lista, int id) {
        No* aux = lista;
        while (aux != NULL) {
            if (aux->dados.id == id) {
                return aux;
            }
            aux = aux->prox;
        }
        return NULL;
    }

        //Inserir
    No* inserir(No* lista) {
        No* novo = (No*) malloc(sizeof(No));

        if (novo == NULL) {
            printf("Erro: falha na alocacao de memoria \n");
            return lista;
        }

        printf("\nID: ");
        scanf("%d", &novo->dados.id);

        if (buscar(lista, novo->dados.id) != NULL) {
            printf("ID ja cadastrado \n");
            free(novo);
            return lista;
        }

        printf("Nome: ");
        scanf(" %[^\n]", novo->dados.nome);

        printf("Idade: ");
        scanf("%d", &novo->dados.idade);

        printf("Email: ");
        scanf(" %[^\n]", novo->dados.email);

        printf("Salario: ");
        scanf("%f", &novo->dados.salario);
        while(getchar() != '\n');

        novo->prox = lista;
        printf("Cadastro realizado \n");

        return novo;
    }

        //Listar
    void listar(No* lista) {
        No* aux = lista;

        if (aux == NULL) {
            printf("\nLista vazia \n");
            return;
        }

        printf("\n--- FUNCIONARIOS --- \n");
        while (aux != NULL) {
            printf("ID: %d | Nome: %s | Idade: %d | Email: %s | Salario: %.2f \n", 
                aux->dados.id, aux->dados.nome, aux->dados.idade, aux->dados.email, aux->dados.salario);
            aux = aux->prox;
        }
    }

        //Alterar
    void alterar(No* lista) {
        int id;
        printf("\nID para alterar: ");
        scanf("%d", &id);

        No* p = buscar(lista, id);

        if (p == NULL) {
            printf("Registro nao encontrado \n");
            return;
        }

        printf("Nome (atual: %s): ", p->dados.nome);
        scanf(" %[^\n]", p->dados.nome);

        printf("Idade: ");
        scanf("%d", &p->dados.idade);

        printf("Email: ");
        scanf(" %[^\n]", p->dados.email);

        printf("Salario: ");
        scanf("%f", &p->dados.salario);

        printf("Atualizado \n");
    }

        //Excluir
    No* excluir(No* lista) {
        int id;
        printf("\nID para remover: ");
        scanf("%d", &id);

        No *ant = NULL;
        No *atual = lista;

        while (atual != NULL && atual->dados.id != id) {
            ant = atual;
            atual = atual->prox;
        }

        if (atual == NULL) {
            printf("Nao encontrado \n");
            return lista;
        }

        if (ant == NULL) {
            lista = atual->prox;
        } else {
            ant->prox = atual->prox;
        }

        free(atual);
        printf("Removido \n");

        return lista;
    }

        //Ordenar
    void ordenar(No* lista, int tipo) {
        if (lista == NULL || lista->prox == NULL) {
            return;
        }

        No *i, *j;
        Funcionario temp;

        for (i = lista; i->prox != NULL; i = i->prox) {
            for (j = i->prox; j != NULL; j = j->prox) {
                int troca = 0;
                if (tipo == 1) troca = (i->dados.id > j->dados.id);
                else if (tipo == 2) troca = (strcmp(i->dados.nome, j->dados.nome) > 0);
                else if (tipo == 3) troca = (i->dados.idade > j->dados.idade);
                else if (tipo == 4) troca = (strcmp(i->dados.email, j->dados.email) > 0);
                else if (tipo == 5) troca = (i->dados.salario > j->dados.salario);

                if (troca) {
                    temp = i->dados;
                    i->dados = j->dados;
                    j->dados = temp;
                }
            }
        }
        printf("Lista ordenada \n");
    }

        //Salvar arquivo
    void salvar(No* lista) {
        FILE* f = fopen("funcionarios.bin", "wb");

        if (f == NULL) {
            printf("Erro ao salvar \n");
            return;
        }

        No* aux = lista;
        while (aux != NULL) {
            fwrite(&aux->dados, sizeof(Funcionario), 1, f);
            aux = aux->prox;
        }

        fclose(f);
        printf("Dados salvos \n");
    }

        //Carregar arquivo
    No* carregar(No* lista) {
        FILE* f = fopen("funcionarios.bin", "rb");

        if (f == NULL) {
            printf("Arquivo nao encontrado \n");
            return lista;
        }

        while (lista != NULL) {
            No* t = lista;
            lista = lista->prox;
            free(t);
        }

        Funcionario ftemp;
        No *inicio = NULL, *fim = NULL;

        while (fread(&ftemp, sizeof(Funcionario), 1, f)) {
            No* novo = (No*) malloc(sizeof(No));
            if (novo == NULL) {
                printf("Erro de memoria ao carregar \n");
                break;
            }
            novo->dados = ftemp;
            novo->prox = NULL;

            if (inicio == NULL) {
                inicio = fim = novo;
            } else {
                fim->prox = novo;
                fim = novo;
            }
        }

        fclose(f);
        printf("Arquivo carregado \n");
        return inicio;
    }

    int main() {
        setbuf(stdin, NULL);

        No* lista = NULL;
        int op;

        do {
            system("cls");

            printf("\n====MENU==== \n");
            printf("1 Inserir \n");
            printf("2 Listar \n");
            printf("3 Buscar \n");
            printf("4 Alterar \n");
            printf("5 Excluir \n");
            printf("6 Ordenar \n");
            printf("7 Salvar \n");
            printf("8 Carregar \n");
            printf("0 Sair \n");
            printf("Opcao: ");
            scanf("%d", &op);

            switch (op) {
                case 1: 
                    lista = inserir(lista); 
                    break;
                case 2: 
                    listar(lista); 
                    break;
                case 3: {
                    int idBusca; 
                    printf("\nID: ");
                    scanf("%d", &idBusca);
                    No* p = buscar(lista, idBusca);
                    if (p != NULL)
                        printf("Encontrado: %s \n", p->dados.nome);
                    else
                        printf("Nao encontrado \n");
                    break;
                }
                case 4: 
                    alterar(lista); 
                    break;
                case 5: 
                    lista = excluir(lista); 
                    break;
                case 6: {
                    int t;
                    printf("\n1-ID 2-Nome 3-Idade 4-Email 5-Salario: ");
                    scanf("%d", &t);
                    if (t >= 1 && t <= 5)
                        ordenar(lista, t);
                    else
                        printf("Opcao invalida \n");
                    break;
                }
                case 7: 
                    salvar(lista); 
                    break;
                case 8: 
                    lista = carregar(lista); 
                    break;
                case 0:
                    printf("Saindo... \n");
                    break;
                default:
                    printf("Opcao invalida \n");
            }

            if (op != 0) {
                printf("\n");
                setbuf(stdin, NULL);
                system("pause");
            }
            
        } while (op != 0);

            //Limpar a memória
        while (lista != NULL) {
            No* t = lista;
            lista = lista->prox;
            free(t);
        }

        return 0;
    }