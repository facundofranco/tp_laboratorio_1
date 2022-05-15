/*
 * tipoPasajero.c
 *
 *  Created on: 12 may. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>
#include "tipoPasajero.h"

int hardcodearPasajeros(eTipoPasajero tipo[],int tam , int* pNextId)
{
	int todoOk = 0;
    eTipoPasajero tip[2] =
    {
    		{1,"TURISTA"},
			{2,"PRIMERA CLASE"}
    };

    if( tipo != NULL &&  tam >0 && tam<=2 )
        {
            for(int i=0; i < tam; i++)
            {
                tipo[i] = tip[i];
                tip[i].idTipo = *pNextId;
                (*pNextId)++;
            }
            todoOk = 1;
        }

    return todoOk;
}

void mostrarUntipo(eTipoPasajero tipo)
{
	printf("\n ID: %2d | descripcion: %5s",tipo.idTipo,tipo.descripcion);

}

int mostrarTipos(eTipoPasajero tipo[], int tam)
{
	int rtn = -1;
	int i;

	if (tipo != NULL)
	{
		if (tam >= 0)
		{
			printf("\n-----LOS TIPOS DE VUELO SON-----\n");
			for (i = 0; i < tam; i++)
			{
				mostrarUntipo(tipo[i]);
			}
			rtn = 0;
		}
	}

	return rtn;
}

