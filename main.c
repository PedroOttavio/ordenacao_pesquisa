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
    printf("Vetor antes da ordenação:\n");
    imprime(vetor);
    printf("\nDepois da ordenação: \n");
}

// função de ordenação, adaptada da função do arquivo ordenaInsercao que o professor disponibilizou. Time que tá ganhando não se mexe.
void insertionSort(pizzaDataset dataset[], int num_elementos){  
    int i, j, aux;

    for( i = 1; i < num_elementos; i++){
        aux = dataset[i].id;

        for( j = i - 1; j >= 0 && aux < dataset[j].id; j++){
            dataset[j + 1].id = dataset[j].id;
        }
        dataset[j + 1].id = aux;
    }
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
            printf("5 - Sair\n");
            printf("Insira a opção desejada: ");
            scanf("%d", &entrada_user);

        } while (entrada_user < 1 || entrada_user > 5); // enquanto o o valor inserido pelo usuario for incorreto, continuará pedindo.

        switch (entrada_user)
        {
        case 1:
            printf("Metodo selecionado: Selection Sort\n");
            printAntesDepois(dataset); // essa função só imprime o vetor antes e depois da ordenação, nada mais que isso.
            selectionSort(dataset, 30);
            imprime(dataset);
            break; //lembrar de quebrar o switch, se não da problema de segmentação

        case 2:
            printf("Metodo selecionado: Insertion Sort\n");
            printAntesDepois(dataset);
            insertionSort(dataset, 30);
            imprime(dataset);
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
