#include <stdio.h>
#include <string.h>
#include <locale.h>
struct pizzaDataset
{
    int id;
    char nome[20];
    char ingredientes[100];
    double ranking; // trocado para double, tava dando um código de erro*
    char origem[20];
};

typedef struct pizzaDataset pizzaDataset;

// código de erro:
// main.c:192:27: warning: conversion from ‘double’ to ‘float’ changes value from
// ‘4.2000000000000002e+0’ to ‘4.19999981e+0f’ [-Wfloat-conversion]

// Função para preencher o vetor com os dados do dataset
void inserirPizzas(pizzaDataset dataset[])
{
    // Preenchendo todos os registros
    dataset[0].id = 9;
    strcpy(dataset[0].nome, "Bacon e Cheddar");
    strcpy(dataset[0].ingredientes, "Molho de tomate-queijo cheddar-bacon-cebola");
    dataset[0].ranking = 4.8;
    strcpy(dataset[0].origem, "Estados Unidos");

    dataset[1].id = 3;
    strcpy(dataset[1].nome, "Pepperoni");
    strcpy(dataset[1].ingredientes, "Molho de tomate-queijo mozzarela-pepperoni");
    dataset[1].ranking = 4.7;
    strcpy(dataset[1].origem, "Estados Unidos");

    dataset[2].id = 6;
    strcpy(dataset[2].nome, "Frango com Catupiry");
    strcpy(dataset[2].ingredientes, "Molho de tomate-queijo mozzarela-frango desfiado-catupiry");
    dataset[2].ranking = 4.4;
    strcpy(dataset[2].origem, "Brasil");

    dataset[3].id = 21;
    strcpy(dataset[3].nome, "Frango Barbecue");
    strcpy(dataset[3].ingredientes, "Molho barbecue-queijo mozzarela-frango desfiado-cebola roxa");
    dataset[3].ranking = 4.3;
    strcpy(dataset[3].origem, "Estados Unidos");

    dataset[4].id = 4;
    strcpy(dataset[4].nome, "Portuguesa");
    strcpy(dataset[4].ingredientes, "Molho de tomate-queijo mozzarela-presunto-ovos-azeitonas-cebola");
    dataset[4].ranking = 4.2;
    strcpy(dataset[4].origem, "Brasil");

    dataset[5].id = 16;
    strcpy(dataset[5].nome, "Frango com Milho");
    strcpy(dataset[5].ingredientes, "Molho de tomate-queijo mozzarela-frango desfiado-milho");
    dataset[5].ranking = 4.5;
    strcpy(dataset[5].origem, "Brasil");

    dataset[6].id = 19;
    strcpy(dataset[6].nome, "Armadillo");
    strcpy(dataset[6].ingredientes, "Molho de tomate-queijo mozzarela-carne moida-bacon-pimentao");
    dataset[6].ranking = 4.4;
    strcpy(dataset[6].origem, "Brasil");

    dataset[7].id = 7;
    strcpy(dataset[7].nome, "Veggie");
    strcpy(dataset[7].ingredientes, "Molho de tomate-queijo mozzarela-cogumelos-pimentao-abobrinha");
    dataset[7].ranking = 4.1;
    strcpy(dataset[7].origem, "Brasil");

    dataset[8].id = 24;
    strcpy(dataset[8].nome, "Lombo Canadense");
    strcpy(dataset[8].ingredientes, "Molho de tomate-queijo mozzarela-lombo canadense-cogumelos");
    dataset[8].ranking = 4.3;
    strcpy(dataset[8].origem, "Brasil");

    dataset[9].id = 1;
    strcpy(dataset[9].nome, "Margherita");
    strcpy(dataset[9].ingredientes, "Molho de tomate-queijo mozzarela-manjericao-azeite");
    dataset[9].ranking = 4.5;
    strcpy(dataset[9].origem, "Italia");

    dataset[10].id = 8;
    strcpy(dataset[10].nome, "Hawaii");
    strcpy(dataset[10].ingredientes, "Molho de tomate-queijo mozzarela-presunto-abacaxi");
    dataset[10].ranking = 3.9;
    strcpy(dataset[10].origem, "Estados Unidos");

    dataset[11].id = 18;
    strcpy(dataset[11].nome, "Trufada");
    strcpy(dataset[11].ingredientes, "Molho de tomate-queijo mozzarela-azeite trufado-cogumelos-queijo parmesao");
    dataset[11].ranking = 4.9;
    strcpy(dataset[11].origem, "Italia");

    dataset[12].id = 13;
    strcpy(dataset[12].nome, "Peito de Peru");
    strcpy(dataset[12].ingredientes, "Molho de tomate-queijo mozzarela-peito de peru-cogumelos");
    dataset[12].ranking = 4.3;
    strcpy(dataset[12].origem, "Brasil");

    dataset[13].id = 5;
    strcpy(dataset[13].nome, "Quatro Queijos");
    strcpy(dataset[13].ingredientes, "Molho de tomate-queijo mozzarela-gorgonzola-parmesao-provolone");
    dataset[13].ranking = 4.6;
    strcpy(dataset[13].origem, "Italia");

    dataset[14].id = 17;
    strcpy(dataset[14].nome, "Frutos do Mar");
    strcpy(dataset[14].ingredientes, "Molho de tomate-queijo mozzarela-camaroes-mexilhoes-lula");
    dataset[14].ranking = 4.6;
    strcpy(dataset[14].origem, "Italia");

    dataset[15].id = 12;
    strcpy(dataset[15].nome, "Caponata");
    strcpy(dataset[15].ingredientes, "Molho de tomate-queijo mozzarela-berinjela-abobrinha-pimentao-azeitonas");
    dataset[15].ranking = 4.2;
    strcpy(dataset[15].origem, "Italia");

    dataset[16].id = 25;
    strcpy(dataset[16].nome, "Pesto");
    strcpy(dataset[16].ingredientes, "Molho pesto-queijo mozzarela-tomate cereja-nozes");
    dataset[16].ranking = 4.5;
    strcpy(dataset[16].origem, "Italia");

    dataset[17].id = 14;
    strcpy(dataset[17].nome, "Alho e Oleo");
    strcpy(dataset[17].ingredientes, "Molho de tomate-queijo mozzarela-alho-azeite");
    dataset[17].ranking = 4.0;
    strcpy(dataset[17].origem, "Italia");

    dataset[18].id = 10;
    strcpy(dataset[18].nome, "Marguerita Vegana");
    strcpy(dataset[18].ingredientes, "Molho de tomate-queijo vegano-manjericao-azeite");
    dataset[18].ranking = 4.0;
    strcpy(dataset[18].origem, "Italia");

    dataset[19].id = 26;
    strcpy(dataset[19].nome, "Chester e Catupiry");
    strcpy(dataset[19].ingredientes, "Molho de tomate-queijo mozzarela-chester desfiado-catupiry");
    dataset[19].ranking = 4.4;
    strcpy(dataset[19].origem, "Brasil");

    dataset[20].id = 15;
    strcpy(dataset[20].nome, "Vegetariana");
    strcpy(dataset[20].ingredientes, "Molho de tomate-queijo mozzarela-cogumelos-pimentao-tomate-cebola");
    dataset[20].ranking = 4.1;
    strcpy(dataset[20].origem, "Brasil");

    dataset[21].id = 20;
    strcpy(dataset[21].nome, "Peperoncino");
    strcpy(dataset[21].ingredientes, "Molho de tomate-queijo mozzarela-pimenta calabresa-manjericao");
    dataset[21].ranking = 4.2;
    strcpy(dataset[21].origem, "Italia");

    dataset[22].id = 28;
    strcpy(dataset[22].nome, "Mac e Queijo");
    strcpy(dataset[22].ingredientes, "Molho de queijo-macarrao-bacon-queijo mozzarela");
    dataset[22].ranking = 4.6;
    strcpy(dataset[22].origem, "Estados Unidos");

    dataset[23].id = 11;
    strcpy(dataset[23].nome, "Frango com Bacon");
    strcpy(dataset[23].ingredientes, "Molho de tomate-queijo mozzarela-frango desfiado-bacon");
    dataset[23].ranking = 4.4;
    strcpy(dataset[23].origem, "Brasil");

    dataset[24].id = 22;
    strcpy(dataset[24].nome, "Champignon");
    strcpy(dataset[24].ingredientes, "Molho de tomate-queijo mozzarela-cogumelos champignon-azeite");
    dataset[24].ranking = 4.1;
    strcpy(dataset[24].origem, "Italia");

    dataset[25].id = 2;
    strcpy(dataset[25].nome, "Calabresa");
    strcpy(dataset[25].ingredientes, "Molho de tomate-queijo mozzarela-calabresa-cebola");
    dataset[25].ranking = 4.3;
    strcpy(dataset[25].origem, "Brasil");

    dataset[26].id = 23;
    strcpy(dataset[26].nome, "Carbonara");
    strcpy(dataset[26].ingredientes, "Molho branco-queijo mozzarela-bacon-ovos-queijo parmesao");
    dataset[26].ranking = 4.7;
    strcpy(dataset[26].origem, "Italia");

    dataset[27].id = 30;
    strcpy(dataset[27].nome, "Mexicana");
    strcpy(dataset[27].ingredientes, "Molho de tomate-queijo mozzarela-carne moida-pimentao-milho-jalapenos");
    dataset[27].ranking = 4.5;
    strcpy(dataset[27].origem, "Mexico");

    dataset[28].id = 29;
    strcpy(dataset[28].nome, "Lasagna");
    strcpy(dataset[28].ingredientes, "Molho bolonhesa-queijo mozzarela-carne moida-queijo parmesao");
    dataset[28].ranking = 4.8;
    strcpy(dataset[28].origem, "Italia");

    dataset[29].id = 27;
    strcpy(dataset[29].nome, "Brocolis com Alho");
    strcpy(dataset[29].ingredientes, "Molho de tomate-queijo mozzarela-brocolis-alho");
    dataset[29].ranking = 4.2;
    strcpy(dataset[29].origem, "Italia");
}

// função de ordenação, adaptada da função do arquivo ordenaSelecao que o professor disponibilizou
void selectionSort(pizzaDataset dataset[], int num_elementos)
{
    int i, j, min, aux;

    for (i = 0; i < num_elementos - 1; i++)
    {

        min = i;
        for (j = i + 1; j < num_elementos; j++)
        {
            if (dataset[j].id < dataset[min].id) // verifficar qual parametro utilizar para comparar e ordenar
            {
                min = j;
            }

        } // aux recebe o valor de id da posição i

        aux = dataset[i].id;
        dataset[i].id = dataset[min].id;
        dataset[min].id = aux;
    }
}

void imprime(pizzaDataset vet[])
{
    int count = 0;

    printf("\n");

    for (count = 0; count < 30; count++)
    {
        printf("%d ", vet[count].id);
    }
    printf("\n\n");
}

void printAntesDepois(pizzaDataset vetor[])
{
    printf("\nVetor antes da ordenação:\n");
    imprime(vetor);
    printf("\nDepois da ordenação: \n");
}

void ordena_Insercao(pizzaDataset dataset[], int quantidade_elementos)
{
    int i, j, aux;
    for (i = 1; i < quantidade_elementos; i++)
    {
        aux = dataset[i].id;
        for (j = i - 1; j >= 0 && aux < dataset[j].id; j--)
        {
            dataset[j + 1].id = dataset[j].id;
        }
        dataset[j + 1].id = aux;
    }
}

// void busca_binaria(pizzaDataset dataset[], int quantidade_elementos, int id_procurado) // enfim, a busca binária
// {
//     int inicio = 0;
//     int meio;
//     int fim = quantidade_elementos - 1;

//     selectionSort(dataset, 30);

//     while (inicio <= fim)
//     {

//         meio = (inicio + fim) / 2;

//         if (dataset[meio].id == id_procurado)
//         {
//             printf("\nDados:\nID: %d\n", dataset[meio].id);
//             printf("Nome: %s\n", dataset[meio].nome);
//             printf("Ingredientes: %s\n", dataset[meio].ingredientes);
//             printf("Ranking: %.1f\n", dataset[meio].ranking);
//             printf("Origem: %s\n", dataset[meio].origem);
//             printf("\n");
//             return;
//         }
//         else if (dataset[meio].id < id_procurado)
//         {
//             inicio = meio + 1;
//         }
//         else
//         {
//             fim = meio - 1;
//         }
//     }
//     printf("ID não encontrado.\n");
// }

void busca_binaria(pizzaDataset dataset[], int quantidade_elementos, int id_procurado)
{
    // Ordena o array antes de realizar a busca binária
    selectionSort(dataset, quantidade_elementos);

    int inicio = 0;
    int meio;
    int fim = quantidade_elementos - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if (dataset[meio].id == id_procurado)
        {
            printf("\nDados:\nID: %d\n", dataset[meio].id);
            printf("Nome: %s\n", dataset[meio].nome);
            printf("Ingredientes: %s\n", dataset[meio].ingredientes);
            printf("Ranking: %.1f\n", dataset[meio].ranking);
            printf("Origem: %s\n", dataset[meio].origem);
            printf("\n");
            return;
        }
        else if (dataset[meio].id < id_procurado)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    printf("ID não encontrado.\n");
}


void pesquisa_id(pizzaDataset dataset[], int id_procurado) // funcao para pesquisar pelo id passado pelo usuario, funcionando;
{
    int i;
    for (i = 0; i < 30; i++)
    {
        if (dataset[i].id == id_procurado)
        {
            printf("\nDados:\nID: %d\n", dataset[i].id);
            printf("Nome: %s\n", dataset[i].nome);
            printf("Ingredientes: %s\n", dataset[i].ingredientes);
            printf("Ranking: %.1f\n", dataset[i].ranking);
            printf("Origem: %s\n", dataset[i].origem);
            printf("\n");
        }
    }
}

void busca_id_origem(pizzaDataset dataset[], int entrada_id, char entrada_origem[])
{
    int i;
    for (i = 0; i < 30; i++)
    {
        if (dataset[i].id == entrada_id && strcmp(dataset[i].origem, entrada_origem) == 0)
        {
            printf("\nDados:\nID: %d\n", dataset[i].id);
            printf("Nome: %s\n", dataset[i].nome);
            printf("Ingredientes: %s\n", dataset[i].ingredientes);
            printf("Ranking: %.1f\n", dataset[i].ranking);
            printf("Origem: %s\n", dataset[i].origem);
            printf("\n");
        }
    }
}

// funções funcionando, passar para cima, cuidar com a ordem, se a ficar muito ruim de gerenciar, talvez seja necessário colocar em outro arquivo.

void limpa_buffer() // Essa função é responsável por limpar o buffer de entrada;
{                   // tentei utilizar o fflush, mas infelizmente não funcionou muito bem, em algumas horas funcionava
                    // e em outras dava erro, achando pouco confiável, acabei optando por procurar outra
                    // alternativa para limpar o stdin;
    int c;          // Encontrei essa função enquanto navegava no Stackoverflow, a pergunta respondida  era:
    do
    { // "Limpar buffer em C com fflush() ou __fpurge()" e "How can I clear an input buffer in C?"
        c = getchar();
    } while (c != '\n' && c != EOF); // o EOF é um valor retornado por funções como fgets, ele existe para indicar o final de um arquivo ou entrada.
} // As perguntas podem serem acessadas através dos seguintes links:
  //"Limpar buffer em C com fflush() ou __fpurge()"
  // https://pt.stackoverflow.com/questions/111697/limpar-buffer-em-c-com-fflush-ou-fpurge
  //"How can I clear an input buffer in C?"
  // https://stackoverflow.com/questions/7898215/how-can-i-clear-an-input-buffer-in-c

void pesquisa_origem(pizzaDataset dataset[], char origem_procurada[]) // espero que funcione.
{
    int i;

    for (i = 0; i < 30; i++)
    {
        if (strcmp(dataset[i].origem, origem_procurada) == 0)
        {
            printf("\nDados:\nID: %d\n", dataset[i].id);
            printf("Nome: %s\n", dataset[i].nome);
            printf("Ingredientes: %s\n", dataset[i].ingredientes);
            printf("Ranking: %.1f\n", dataset[i].ranking);
            printf("Origem: %s\n", dataset[i].origem);
            printf("\n");
        }
    }
}

void selecionaOquePesquisar(pizzaDataset dataset[])
{
    int entrada_user = 0;

    do
    {
        // Exibe o menu
        printf("\nEscolha o que deseja pesquisar: \n");
        printf("1 - ID\n");
        printf("2 - Origem\n");
        printf("3 - Uma busca mais específica (ID e origem)\n");
        printf("4 - Sair\n");
        printf("Insira a opção desejada: ");
        scanf("%d", &entrada_user);

        // Verifica a escolha do usuário
        switch (entrada_user)
        {
        case 1:

        {

            int entrada_id = 0;

            printf("Opção escolhida -> pesquisar por ID.\n");
            printf("Digite o ID que deseja pesquisar: ");
            scanf("%d", &entrada_id);
            limpa_buffer();
            pesquisa_id(dataset, entrada_id);
        }
            break;
        case 2:
            // trabalhar com strings em C pode ser desafiador, melhor inicializar o vetor 0 e procurar alguma forma de tornar a entrada do
            // usuário mais confiável, verificar manipulações com fgets e limpeza de buffer,
            // podemos usar as funções do trabalho do zoologico. Verificar

            // lembrar de implementar um limpa buffer.
            {
            limpa_buffer();
            char entrada_origem[30];
            printf("Opção escolhida -> pesquisar por Origem.\n");
            printf("Digite a origem que deseja pesquisar: ");
            // Não sou inteligente o bastante para pensar sozinho nessas soluções, então o link para os exemplos de fgets usados nessa
            // função podem ser encontrados em : https://stackoverflow.com/questions/38767967/clear-input-buffer-after-fgets-in-c
            //  e também em: https://pt.stackoverflow.com/questions/111697/limpar-buffer-em-c-com-fflush-ou-fpurge

            // if(fgets(entrada_origem, sizeof(entrada_origem), stdin)){   implementação anterior, se a nova não funcionar, voltar pra essa
            //     size_t len = strlen(entrada_origem);                 // Essa opção pareceu um pouco rebuscada
            //     if(len > 0 && entrada_origem[len - 1] == '\n'){      //vou usar a do zoologico, tinha ficado bem enxuta e clara.
            //         entrada_origem[len - 1] = '\0';
            //     }
            // }
            fgets(entrada_origem, sizeof(entrada_origem), stdin); // recebe o input do usuario, verifica o tamanho, avisamos que é
            entrada_origem[strcspn(entrada_origem, "\n")] = '\0'; // receberá os valores via teclado, em seguida usamos a função strcspn
            // para encontrar e trocar o \n por um caractere nulo. Obrigado pelas pesquisas Eu do passado!

            // é, precisa implementar o limpa buffer antes; - Pedro.
            // Reaproveitar o código do zoologico - Pedro.

            limpa_buffer(); // limpa o buffer de entrada, para evitar que interfira no scanf

            printf("Origem: %s\n\n", entrada_origem);

            pesquisa_origem(dataset, entrada_origem);
            }

            break;
        case 3:
            {
            int entrada_id = 0;
            char entrada_origem[30];

            printf("Opção escolhida: busca mais específica (ID e Origem).\n");
            printf("Digite o ID que deseja pesquisar: ");
            scanf("%d", &entrada_id);
            limpa_buffer();
            printf("Digite a origem que deseja pesquisar: ");
            fgets(entrada_origem, sizeof(entrada_origem), stdin); // recebe o input do usuario, verifica o tamanho, avisamos que é
            entrada_origem[strcspn(entrada_origem, "\n")] = '\0';

            busca_id_origem(dataset, entrada_id, entrada_origem);

            limpa_buffer();

            }
            // Aqui você pode adicionar a lógica para pesquisa por ID e Origem
            break;
        case 4:
            printf("Saindo do menu de pesquisa..\n");
            return; // Sai da função se o usuário escolher 4
        default:
            printf("Opção inválida. Por favor, tente novamente.\n");
            break;
        }

    } while (entrada_user != 4); // aperte para sair se quiser sair, caso contrário, continue..
}

void apresentaMenu(pizzaDataset dataset[])
{

    int entrada_user = 0; // iniciado o valor

    do
    {
        do
        { // usuario escolhe uma das opções, então sai desse do while interno, entre no switch e executa a respectiva função;

            printf("Menu de opções:\n");
            printf("1 - Metodo de ordenação usando Selection Sort\n");
            printf("2 - Metodo de ordenação usando Insertion Sort\n");
            printf("3 - Realizar uma busca sequencial\n");
            printf("4 - Realizar uma busca binária\n");
            printf("5 - Sair\n");
            printf("Insira a opção desejada: ");
            scanf("%d", &entrada_user);

        } while (entrada_user < 1 || entrada_user > 5); // enquanto o o valor inserido pelo usuario for incorreto, continuará pedindo.

        switch (entrada_user)
        {
        case 1:
            printf("Metodo selecionado: Selection Sort\n");
            {
            printAntesDepois(dataset); // essa função só imprime o vetor antes e depois da ordenação, nada mais que isso.
            selectionSort(dataset, 30);
            imprime(dataset);
            }
            break; // lembrar de quebrar o switch

        case 2:     
            printf("Metodo selecionado: Insertion Sort\n");
            {
            printAntesDepois(dataset);
            ordena_Insercao(dataset, 30);
            imprime(dataset);
            }
            break;

        case 3: //
            printf("Metodo selecionado: Busca Sequencial\n");
            {
            selecionaOquePesquisar(dataset); // função que pede ao usuário o que ele deseja pesquisar, está se tornando uma verdadeira toca de coelho
            }
            break;

        case 4:
            printf("Metodo selecionado: Busca Binária\n");
            {
            int entrada_id;
            printf("Entre com o ID que deseja pesquisar: ");
            scanf("%d", &entrada_id);
            // Ordena o array antes de realizar a busca binária
            selectionSort(dataset, 30);
            busca_binaria(dataset, 30, entrada_id);
            }
            break;
        }

    } while (entrada_user != 5); // digite 5 para sair
}

int main()
{

    setlocale(LC_ALL, "");
    pizzaDataset dataset[30]; // Vetor com 30 elementos

    // Chama a função para preencher o vetor com os dados
    inserirPizzas(dataset);

    apresentaMenu(dataset);

    return 0;
}
