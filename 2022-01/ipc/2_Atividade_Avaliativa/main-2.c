#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 2) Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em 3 provas.
// Em seguida, encontre e apresente na tela
// o número de alunos cuja melhor nota foi na prova 1
// o número de alunos cuja melhor nota foi na prova 2
// e o número de alunos cuja melhor nota foi na prova 3.

// Apresente também qual foi a maior entre todas as notas entre todas as provas
// e a quantidade de alunos que obtiveram tal nota

int main()
{

    float matriz_notas[10][3];

    int melhor_nota_aluno = INT_MIN;
    int vetor_melhor_prova_do_aluno[10];
    int vetor_quantidade_alunos_melhor_prova[3] = {0, 0, 0};

    float melhor_nota = __FLT_MIN__;

    int quantidade_alunos_melhor_nota = 0;

    // leitura matriz
    printf("Digite as notas de 10 alunos em 3 provas: \n");
    // para cada aluno
    for (int i = 0; i < 10; i++)
    {
        melhor_nota_aluno = INT_MIN;
        // para cada prova
        for (int j = 0; j < 3; j++)
        {
            // leitura nota
            scanf("%f", &matriz_notas[i][j]);
            // verificação se é a melhor nota do aluno
            if (matriz_notas[i][j] > melhor_nota_aluno)
            {
                melhor_nota_aluno = matriz_notas[i][j];
                vetor_melhor_prova_do_aluno[i] = j;
            }

            // verificação se é a melhor nota geral
            if (matriz_notas[i][j] > melhor_nota)
            {
                melhor_nota = matriz_notas[i][j];
                quantidade_alunos_melhor_nota = 1;
            }
            else if (matriz_notas[i][j] == melhor_nota)
            {
                quantidade_alunos_melhor_nota++;
            }
        }
        vetor_quantidade_alunos_melhor_prova[vetor_melhor_prova_do_aluno[i]]++;
    }
    printf("\n");
    printf("Número de alunos com maior nota na prova 1: %d\n", vetor_quantidade_alunos_melhor_prova[0]);
    printf("Número de alunos com maior nota na prova 2: %d\n", vetor_quantidade_alunos_melhor_prova[1]);
    printf("Número de alunos com maior nota na prova 3: %d\n", vetor_quantidade_alunos_melhor_prova[2]);

    printf("Maior nota entre todas as provas: %f\n", melhor_nota);
    printf("Quantidade de alunos que obtiveram a maior nota: %d\n", quantidade_alunos_melhor_nota);

    return EXIT_SUCCESS;
}