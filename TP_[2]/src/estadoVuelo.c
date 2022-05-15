/*
 * estadoVuelo.c
 *
 *  Created on: 14 may. 2022
 *      Author: Gouki
 */


#include <stdio.h>
#include <stdlib.h>
#include "estadoVuelo.h"

int hardcodearEstados(eEstadoVuelo estado[],int tam , int* pNextId)
{
	int todoOk = 0;
    eEstadoVuelo est[2] =
    {
    		{1,"ACTIVO"},
			{2,"EN ESPERA"}
    };

    if( estado != NULL &&  tam >0 && tam<=2 )
        {
            for(int i=0; i < tam; i++)
            {
                estado[i] = est[i];
                est[i].id = *pNextId;
                (*pNextId)++;
            }
            todoOk = 1;
        }

    return todoOk;
}


void mostrarUnEstado(eEstadoVuelo estado)
{
	printf("\n ID: %2d | descripcion: %5s",estado.id,estado.descripcion);
}
