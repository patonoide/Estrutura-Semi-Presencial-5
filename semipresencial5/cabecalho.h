/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cabecalho.h
 * Author: Asus
 *
 * Created on 6 de Outubro de 2017, 20:22
 */

#include <stdio.h>
#include <stdlib.h>

struct lista {
    float info;
    struct lista* prox;
};
typedef struct lista Lista;

struct filad {
    Lista * ini;
    Lista *fim;
};
typedef struct filad FilaD;

struct filav {
    int n;
    int ini;
    float vet[10];

};
typedef struct filav FilaV;


void filadImprime(FilaD* f);
FilaD * filadCria();
void filadInsere(FilaD* f, float v);
float filadRetira(FilaD * f);
void filadLibera(FilaD * f);
FilaV * filavCria();
void filavInsere(FilaV* f, float v);
float filavRetira(FilaV * f);
void filavImprime(FilaV * f);