/*
 * funcionesExtra.c
 *
 *  Created on: 12 may. 2022
 *      Author: Gouki
 */


#include <stdio.h>
#include <stdlib.h>

void obtenerNumero(int* variableRecibida, char textoAMostrar[])
{
	printf(textoAMostrar);
	fflush(stdin);
	scanf("%d", variableRecibida);
}

void obtenerFloat(float* variableRecibida, char textoAMostrar[])
{
	printf(textoAMostrar);
	fflush(stdin);
	scanf("%f", variableRecibida);
}

void obtenerCadena(char arrayRecibido[], char textoAMostrar[])
{
	printf(textoAMostrar);
	fflush(stdin);
	gets(arrayRecibido);
}
