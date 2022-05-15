/*
 * mostrarmenu.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarmenu()
{
	int opcion;
	int validar;

		system("cls");
		printf("MENU PRINCIPAL\n");
		printf("\n1. ALTA\n");
		printf("2. MODIFICAR\n");
		printf("3. BAJA\n");
		printf("4. INFORMAR\n");
		printf("5. CARGA DE DATOS FORZADA\n");
		//printf("5. \n");
		printf("6. salir:\n");
		printf("ingrese una opcion:");
		fflush(stdin);
		validar=scanf("%d",&opcion);
		if(validar==0)
		{
			opcion=7;
		}
	return opcion;
}

char casoSalir(char letra)
{
	printf("quieres salir?(responda s o n)\n");
	fflush(stdin);
	scanf("%c",&letra);
	while((letra!='s' && letra!='S') && (letra!='n' && letra!='N'))
	{
		printf("LETRA NO VALIDA...quieres salir?(responda s o n)\n");
		fflush(stdin);
		scanf("%c",&letra);

	}
	return letra;
}
