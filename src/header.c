/*
 * header.c
 *
 *  Created on: 2 kwi 2019
 *      Author: X
 */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
struct element *wsk_str = NULL;  //wskaźnik na strukture


void dodawanie_elementu(int i) {
    struct element *aktualny;
    struct element *first;
    aktualny = (struct element*)malloc(sizeof(struct element)); //rezerwacja pamięci i przypisanie do wskaznika
    if (wsk_str == NULL) {
        wsk_str = aktualny;
       }
    else {
        struct element *temp = wsk_str;
        while (temp->nastepny !=NULL) {
            temp = temp->nastepny;
        }
        temp->nastepny = aktualny;
        aktualny->poprzedni = temp;
    }
    aktualny->calk = i;
    aktualny->rzecz = i+0.6;
    aktualny->pozycja = i;
    aktualny->pierwszy=wsk_str;

}

void usuwanie_elementu(int i)
{
	struct element *temp = wsk_str;
	struct element *aktualny = NULL;
	if(i==1){
		//podmiana danych z elemntu nr 2 do elementu nr 1
		temp=temp->nastepny;
		aktualny=temp->pierwszy;
		aktualny->poprzedni=NULL;
		aktualny->calk=temp->calk;
		aktualny->rzecz=temp->rzecz;
		aktualny->nastepny=temp->nastepny;

	}
	else if(i==10)
	{
		for(int k=0; k<i-1; k++)
			{
				temp=temp->nastepny;
			}
			aktualny=temp->poprzedni;
			aktualny->nastepny=NULL;
	}
	else
	{
		for(int k=0; k<i-1; k++)
		{
			temp=temp->nastepny;
		}

	aktualny=temp->poprzedni;
	aktualny->nastepny=temp->nastepny;
	aktualny=temp->nastepny;
	aktualny->poprzedni=temp->poprzedni;
	aktualny=temp;
	temp=temp->nastepny;
	free(aktualny);
	}
}

void wyswietlanie_elementu() {
    struct element *temp = wsk_str;
    while (temp != NULL) {
        printf("Integer: %d ", temp->calk);
        printf("Float: %.1f \n", temp->rzecz);
        temp = temp->nastepny; //przejście do następnego
    }
}



