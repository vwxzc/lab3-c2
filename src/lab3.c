/*
 ============================================================================
 Name        : lab3.c
 Author      : MS
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "header.h"


int main(void) {
	int rozmiar=10;  //rozmiar listy
	for (int i = 0; i < rozmiar; i++) {
	        dodawanie_elementu(i+1);
	    }
	wyswietlanie_elementu();
	printf(" \n \n ----------usuwanie elementu 1--------- \n \n");
	usuwanie_elementu(1);
	wyswietlanie_elementu();
	printf(" \n \n ----------usuwanie elementu 1--------- \n \n");
	usuwanie_elementu(1);
	wyswietlanie_elementu();


}





