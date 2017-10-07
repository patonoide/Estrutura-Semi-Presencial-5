/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

FilaD * filadCria() {
    FilaD * f = (FilaD *) malloc(sizeof (FilaD));
    f->ini = f->fim = NULL;
    return f;
}

void filadInsere(FilaD* f, float v) {
    Lista * novo = (Lista *) malloc(sizeof (Lista));
    novo-> info = v;
    novo-> prox = NULL;
    if (f->fim == NULL && f-> ini) {
        f->ini = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f-> fim = novo;
    }
}

float filadRetira(FilaD * f) {
    Lista * t;
    float v;
    if (f-> fim == NULL && f-> ini == NULL) {
        printf(" vazio esta porra");
        exit(1);

    }
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if (f->ini == NULL) {
        free(t);
    }
    return v;
}

void filadLibera(FilaD * f) {
    Lista * q = f-> ini;
    while (q != = NULL) {
        Lista * t = q -> prox;
        free(q);
        q = t;

    }
    free(f);
}

FilaV * filavCria() {
    FilaV * f = (FilaV*) malloc(sizeof (FilaV));
    f->n = 0;
    f->ini = 0;
    return f;
}

void filavInsere(FilaV* f, float v) {
    int fim;
    if (f->n != 10) {
        fim = (f->ini + f->n) % 10;
        f->vet[fim] = v;
        f->n++;

    } else {
        printf("cheia");
        exit(1);
    }
}

float filavRetira(FilaV * f) {
    float v;
    if (f->n != 0) {
        v = f-> vet[f-> ini ];
        f->n--;
        f->ini = (f->ini + 1) % 10;
        return v;
    } else {
        printf("vazia");
        exit(1);
    }
}

void filavImprime(FilaV * f) {
    int i;
    for (i = 0; i < f->n; i++) {
        printf("%f", f->vet[f->ini + i] % 10);
    }
}