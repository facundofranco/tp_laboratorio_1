/*
 * estadoVuelo.h
 *
 *  Created on: 14 may. 2022
 *      Author: Gouki
 */

#ifndef ESTADOVUELO_H_
#define ESTADOVUELO_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char descripcion[31];
}eEstadoVuelo;

int hardcodearEstados(eEstadoVuelo estado[],int tam , int* pNextId);

#endif /* ESTADOVUELO_H_ */
