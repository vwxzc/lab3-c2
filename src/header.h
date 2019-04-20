/*
 * header.h
 *
 *  Created on: 2 kwi 2019
 *      Author: x
 */

#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>
#include <stdlib.h>

struct element
{
    int calk;  //liczba całkowita
    float rzecz; //liczba rzeczywista
    int pozycja; //definiuje pozycje elemnetu na liście
    struct element *poprzedni; //wskaznik na poprzedni element
    struct element *nastepny; //Wskaznik na nastepny element
    struct element *pierwszy; //Wskazanie na pierwszy element
};
#endif /* HEADER_H_ */
