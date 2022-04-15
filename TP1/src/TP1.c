/*
 ============================================================================
 Name        : TP1.c
 Author      : Franco Facundo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "calculos.h"
#include "mostarmenu.h"


int main(void)
{
	setbuf(stdout,NULL);
	float kilometrosTotales;
	float precioAerolineas;
	float precioLatam;
	float descuentoAerolineas;
	float descuentoLatam;
	float interesesAerolineas;
	float interesesLatam;
	float bitcoinAerolineas;
	float bitcoinLatam;
	float precioKilometroAerolineas;
	float precioKilometroLatam;
	int bandera;
	float diferenciaPrecios;
	float kilometroForzado;
	float precioForzadoAerolineas;
	float precioForzadoLatam;
	float diferenciaPrecioForzado;
	char salir='n';


	kilometrosTotales=0;
	precioAerolineas=0;
	precioLatam=0;
	bandera=0;
	kilometroForzado=7090;
	precioForzadoAerolineas=162965;
	precioForzadoLatam=159339;


	do
	{
		switch(mostrarmenu())
		{
			case 1:
				do
				{
				printf("ingrese los kilometros:\n");
				fflush(stdin);
				scanf("%f",&kilometrosTotales);
				while(kilometrosTotales<1)
				{
					printf("DATO NO VALIDO.ingrese los kilometros:\n");
					fflush(stdin);
					scanf("%f",&kilometrosTotales);
				}
				}while(kilometrosTotales<0);

			break;
			case 2:
				do
					{
						printf("Ingrese los precios del vuelo\n");

						printf("ingrese el precio de Aerolineas: \n");
						fflush(stdin);
						scanf("%f",&precioAerolineas);
						while(precioAerolineas<1)
							{
								printf("ERROR.Ingrese el precio de Aerolineas: \n");
								fflush(stdin);
								scanf("%f",&precioAerolineas);
							}
						printf("ingrese el precio de Latam: \n");
						fflush(stdin);
						scanf("%f",&precioLatam);
						while(precioLatam<1)
						{
							printf("ERROR.Ingrese el precio de Aerolineas: \n");
							fflush(stdin);
							scanf("%f",&precioLatam);
						}
					}while(precioAerolineas<0&&precioLatam<0);

			break;
			case 3:
				if(kilometrosTotales<1 && precioAerolineas<1 && precioLatam<1)
				{
					printf("\n\nNo se puede calcular...\n\n");
				}
				else
				{
				calcularCostos(precioAerolineas,kilometrosTotales,&descuentoAerolineas,&interesesAerolineas,&bitcoinAerolineas,&precioKilometroAerolineas,&bandera);
				calcularCostos(precioLatam,kilometrosTotales,&descuentoLatam,&interesesLatam,&bitcoinLatam,&precioKilometroLatam,&bandera);

				diferenciaPrecios=calcularDiferencia(precioAerolineas,precioLatam);
				}
			break;
			case 4:
				if(bandera==0)
				{
					printf("\n\ntodavia no se calcularon los costos...\n");
				}
				else
				{
					mostrarCalculosAerolineas(precioAerolineas,kilometrosTotales,descuentoAerolineas,interesesAerolineas,bitcoinAerolineas,precioKilometroAerolineas);
					mostrarCalculosLatam(precioLatam,kilometrosTotales,descuentoLatam,interesesLatam,bitcoinLatam,precioKilometroLatam);
					mostrarDiferencia(diferenciaPrecios);
				}
				system("pause");
			break;
			case 5:
				calcularCostos(precioForzadoAerolineas,kilometroForzado,&descuentoAerolineas,&interesesAerolineas,&bitcoinAerolineas,&precioKilometroAerolineas,&bandera);
				calcularCostos(precioForzadoLatam,kilometroForzado,&descuentoLatam,&interesesLatam,&bitcoinLatam,&precioKilometroLatam,&bandera);
				diferenciaPrecioForzado=calcularDiferencia(precioForzadoAerolineas, precioForzadoLatam);

				mostrarCalculosAerolineas(precioForzadoAerolineas,kilometroForzado,descuentoAerolineas,interesesAerolineas,bitcoinAerolineas,precioKilometroAerolineas);
				mostrarCalculosLatam(precioForzadoLatam,kilometroForzado,descuentoLatam,interesesLatam,bitcoinLatam,precioKilometroLatam);

				mostrarDiferencia(diferenciaPrecioForzado);

				system("pause");
			break;
			case 6:
				printf("quieres salir?(responda s o n)\n");
				fflush(stdin);
				scanf("%c",&salir);
				while(salir!='s'&&salir!='n')
				{
					printf("LETRA NO VALIDA...quieres salir?(responda s o n)\n");
					fflush(stdin);
					scanf("%c",&salir);

				}
				if(salir=='s')
				{
					printf("\n Gracias por utlizar el programa \n");
				}

			break;
			default:
				printf("\nERROR...INGRESE UNA OPCION VALIDA\n");
				break;
		}
	}while(salir!='s');
	return EXIT_SUCCESS;
}
