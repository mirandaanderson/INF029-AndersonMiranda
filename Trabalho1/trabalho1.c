// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Anderson Miranda da Silva
//  email: andersonmiranda180@gmail.com
//  Matrícula: 20242160007
//  Semestre: 2025.2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016 - 17/10/2025

// #################################################



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "trabalho1.h"

    //String para inteiro
    int stringParaInteiro(char *str, int *indice) {
    int num = 0;
    while (str[*indice] >= '0' && str[*indice] <= '9') {
        num = num * 10 + (str[*indice] - '0');
        (*indice)++;
    }
    return num;
}
    
    //Questão 1
    int q1(char data[]) {
    int i = 0;
    int d = stringParaInteiro(data, &i);
    if (data[i] != '/') return 0; i++;
    int m = stringParaInteiro(data, &i);
    if (data[i] != '/') return 0; i++;
    int a = stringParaInteiro(data, &i);
    if (a < 100) a += 2000;
    if (m < 1 || m > 12 || d < 1 || d > 31) return 0;
    int diasMes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int bissexto = (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0));
    if (bissexto && m == 2 && d <= 29) return 1;
    if (m == 2 && d > 28) return 0;
    if (d > diasMes[m-1]) return 0;
    return 1;
}

    //Questão 2; Não fiz.
    DiasMesesAnos q2(char datainicial[], char datafinal[]) {
    DiasMesesAnos resultado;
    resultado.qtdDias = 0;
    resultado.qtdMeses = 0;
    resultado.qtdAnos = 0;
    resultado.retorno = -1; // indica erro ou que a função não foi implementada
    return resultado;
}

    //Questão 3
    int q3(char *texto, char c, int isCaseSensitive) {
    int count = 0;
    if (!isCaseSensitive) c = tolower(c);
    for (int i = 0; texto[i] != '\0'; i++) {
        char atual = texto[i];
        if (!isCaseSensitive) atual = tolower(atual);
        if (atual == c) count++;
    }
    return count;
}

    //Questão 4
    int q4(char *strTexto, char *strBusca, int posicoes[30]) {
    int count = 0, tamBusca = strlen(strBusca);
    for (int i = 0; strTexto[i] != '\0'; i++) {
        if (strncmp(&strTexto[i], strBusca, tamBusca) == 0) {
            posicoes[count++] = i;
            posicoes[count++] = i + tamBusca - 1;
        }
    }
    return count / 2;
}

    //Questão 5
    int q5(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

    //Questão 6
    int q6(int numerobase, int numerobusca) {
    char base[50], busca[10];
    sprintf(base, "%d", numerobase);
    sprintf(busca, "%d", numerobusca);
    int tamBase = strlen(base), tamBusca = strlen(busca), count = 0;
    for (int i = 0; i <= tamBase - tamBusca; i++) {
        if (strncmp(&base[i], busca, tamBusca) == 0) count++;
    }
    return count;
}

//Questão 7
    int q7(char matriz[8][10], char palavra[5]) {
    int count = 0;
    int len = strlen(palavra);
    for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 10; j++) {
    // horizontal direita
    if (j + len <= 10) {
    int k;
    for (k = 0; k < len; k++)
    if (matriz[i][j+k] != palavra[k]) break;
    if (k == len) count++;
    }
    // vertical para baixo
    if (i + len <= 8) {
    int k;
    for (k = 0; k < len; k++)
    if (matriz[i+k][j] != palavra[k]) break;
    if (k == len) count++;
    }
    }
    }
    return count;
    }