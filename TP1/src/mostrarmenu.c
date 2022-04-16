/*
 * mostrarmenu.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarmenu(float kilometros,float precioAerolineas, float precioLatam)
{
	int opcion;
	int validar;

		system("cls");
		printf("\n1. ingresar los kilometros:(km = %.2f)\n", kilometros);
		printf("2. ingresar el precio de los vuelos:(precio Aerolineas = $ %.2f , precio Latam = $ %.2f)\n", precioAerolineas, precioLatam);
		printf("3. calcular todos los costos:\n");
		printf("4. informar resultados:\n");
		printf("5. carga forzada de datos:\n");
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
