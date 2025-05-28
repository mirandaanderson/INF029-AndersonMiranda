// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Anderson Miranda da Silva
//  email: andersonmiranda180@gmail.com
//  Matrícula: 20242160007
//  Semestre: 2025.1

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <AndersonSilva-20242160007-T1.h>

    /String para inteiro
    int stringParaInteiro(char *str, int *indice) {
    int num = 0;
    while (str[*indice] >= '0' && str[*indice] <= '9') {
        num = num * 10 + (str[*indice] - '0');
        (*indice)++;
    }
    return num;
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
    //Questão 5
    int q5(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

    return 0;
}