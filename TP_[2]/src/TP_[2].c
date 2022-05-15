/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Facundo Franco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "validaciones.h"
#include "tipoPasajero.h"
#include "funcionesExtra.h"
#include "mostrarmenu.h"
#define LEN 4

char salir = 'n';
int main(void)
{
	setbuf(stdout,NULL);
	int idIncremental = 100;
	Passenger pasajero[LEN];
	char auxName[51];
	char auxLastName[51];
	float auxPrice;
	char auxFlyCode[10];
	int auxTypePassenger;
	int opcion;
	//int auxStatusFlight;


	eTipoPasajero tip[2];

	hardcodearPasajeros(tip, 2 , &idIncremental);

	initPassengers(pasajero, LEN);
	do
	{
		switch(mostrarmenu())
		{
		case 1:

				idIncremental++;
				PedirCadena(auxName, "\nIngrese el nombre: \n");
				PedirCadena(auxLastName, "\nIngrese el apellido: \n");
				obtenerFloat(&auxPrice, "\nIngrese el precio: \n");
				obtenerCadena(auxFlyCode, "\nIngrese el codigo de vuelo: \n");
				mostrarTipos(tip, 2);
				do
				{
					obtenerNumero(&auxTypePassenger, "\nIngrese el ID correspondiente al tipo de vuelo: \n");
				}while(!validarEntero(auxTypePassenger,1,2));
				//obtenerNumero(&auxStatusFlight, "Ingrese el estado de vuelo");
				addPassenger(pasajero,LEN,1, idIncremental , auxName, auxLastName, auxPrice, auxTypePassenger, auxFlyCode);

				break;
		case 2:
			if(modificarPasajero(pasajero, LEN)==-1)
			{
				system("cls");
				printf("Modificacion realizada con exito.\n");
			}
			break;
		case 3:
			if(removePassenger(pasajero, LEN, idIncremental)==-1)
			{
				system("cls");
				printf("baja exitosa!!!");
			}
			break;
		case 4:
				switch(menuMostrar())
				{
				case 1:
					printf("INDIQUE EN QUE ORDEN LO QUIERE ( 1 ASCENDENTE 0 DESCENDENTE):\n");
					fflush(stdin);
					scanf("%d",&opcion);
					if(opcion == 0)
					{
						sortByLastName(pasajero, LEN,opcion);
						printPassenger(pasajero, LEN);
					}
					if(opcion==1)
					{
						sortByLastName(pasajero, LEN, opcion);
						printPassenger(pasajero, LEN);
					}
				}
			break;
		case 5:
			break;
		case 6:
			switch(casoSalir(salir))
			{
			case 's':
			case 'S':
				salir='s';
				printf("\n Gracias por utlizar el programa!!! \n");
				break;
			}
			break;
		default:
		printf("\nERROR...ingrese una opcion valida\n");
			break;
		}
	}while(salir!='s');
	return EXIT_SUCCESS;
}
