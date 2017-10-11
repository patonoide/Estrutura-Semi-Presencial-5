/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Asus
 *
 * Created on 6 de Outubro de 2017, 20:22
 */

#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int opcao = 0;
    int escolhedor = 0;
    FilaD *d;
    FilaV * v;
    float elemento;
    int elementoi;
    printf("Portinho e MiniMarina Productions EC e nois 2017.\n");
    do {
        printf("\nDigite a opcao desejada de acordo com o menu\n 1-Criar filas\n 2-Inserir elemento nas filas \n 3-Excluir o elemento da fila.\n 4-Inverter a fila.\n 5-Imprimir a fila.\n 6-Demitir a fila.\n 7-Sair\nOpcao:");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
            {
                d = filadCria();
                v = filavCria();
                break;
            }
            case 2:
            {
                printf("\nSe escolha qual fila ira receber o seu elemento: \n1-Fila Vector\n2-Fila com lista tipo D\n Opcao(Rei Hey  Apple): ");
                scanf("%i", &escolhedor);
                setbuf(stdin,NULL);
                printf("\nDigite o elemento: ");
                scanf("%f", &elemento);
                setbuf(stdin,NULL);
                if (escolhedor == 1) {

                    filavInsere(v, elemento);
                    printf("\nSucesso\n");
                } else
                    if (escolhedor == 2) {

                    filadInsere(d, elemento);
                    printf("\nSucesso\n");
                } else {
                    printf("\n Opcao ou elemento errados.");
                }

                break;
            }
            case 3:
            {
                printf("\nEscolha de qual fila o elemento sera excluido: \n1-Fila Vector\n2-Fila com lista tipo D\n Opcao(Rei Hey  Apple): ");
                scanf("%i", &escolhedor);

                if (escolhedor == 1) {
                    elemento = filavRetira(v);
                    printf("\nO elemento e:%.2f", elemento);
                } else
                    if (escolhedor == 2) {
                    elemento = filadRetira(d);
                    printf("\nO elemento e:%.2f", elemento);
                } else {
                    printf("\n Opcao ou elemento errados.");
                }

                break;
            }
            case 4:
            {

                break;
            }
            case 5:
            {
                printf("\nEscolha de qual fila o elemento sera mostrado: \n1-Fila Vector\n2-Fila com lista tipo D\n Opcao(Rei Hey  Apple): ");
                scanf("%i", &escolhedor);

                if (escolhedor == 1) {
                    filavImprime(v);

                } else
                    if (escolhedor == 2) {
                    filadImprime(d);

                } else {
                    printf("\n Opcao errada.");
                }

                break;
            }
            case 6:
            {
                printf("\nEscolha qual fila sera libertada: \n1-Fila Vector\n2-Fila com lista tipo D\n Opcao(Rei Hey  Apple): ");
                scanf("%i", &escolhedor);

                if (escolhedor == 1) {
                    elemento = filavRetira(v);

                } else
                    if (escolhedor == 2) {
                    filadLibera(d);

                } else {
                    printf("\n Opcao errada.");
                }
                break;
            }

        }
    } while (opcao != 7);
    printf("\nSaindo...\n");
    return (EXIT_SUCCESS);
}

