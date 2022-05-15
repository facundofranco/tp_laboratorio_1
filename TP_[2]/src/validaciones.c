/*
 * validaciones.c
 *
 *  Created on: 12 may. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int validarEntero(int entero, int min, int max)
{
    int retorno = 0;
    if(entero >=min && entero <= max)
    {
    	retorno = 1;
    }
	return retorno;
}

void PedirCadena(char cadena[],char mensaje[])
{
    printf(mensaje);
    scanf("%s",cadena);
    while(!ValidarUnaCadena(cadena))
    {
        printf("\nERROR\n");
        printf(mensaje);
        scanf("%s",cadena);
    }
}

int ValidarUnaCadena(char cadena[])
{
    int retorno=1;
    int len;
    if(cadena!=NULL)
    {
        len=strlen(cadena);
        for(int i=0;i<len;i++)
        {
            if(!isalpha(cadena[i]))
            { //el if toma al 0 como false y a != de 0 como true
                retorno=0;
            }
        }
    }

    return retorno;
}
