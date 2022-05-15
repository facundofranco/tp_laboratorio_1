/*
 * ArrayPassenger.c
 *
 *  Created on: 28 abr. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"

#include "mostrarmenu.h"
#include "validaciones.h"
#include "tipoPasajero.h"

int initPassengers (Passenger* list, int len)
{
    int todoOk = 0;
    if( list != NULL && len > 0)
    {
        for(int i=0; i < len; i++)
        {
            list[i].isEmpty = -1;
        }
        todoOk = 1;
    }
    return todoOk;
}

void printOnePassenger(Passenger list, int len)
{
printf("\n ID: %4d | NOMBRE: %7s | APELLIDO: %7s | PRECIO: %.2f | CODIGO DE VUELO: %7s | TIPO PASAJERO: %4d | ESTADO DE VUELO: %4d\n", list.id,
																																list.name,
																																list.lastName,
																																list.price,
																																list.flyCode,
																																list.typePassenger,
																																list.statusFlight);
}

int printPassenger (Passenger* list, int length)
{
	int retorno=-1;
	int i;

	if(list!=NULL)
	{
		if(length>=0)
		{
			for(i=0; i<length; i++ )
			{
				if(list[i].isEmpty == 0)
				{
					printOnePassenger(list[i], length);
				}
			}
			retorno=0;
		}
	}
	return retorno;
}

int buscarEspacioVacio(Passenger list[],int tam, int* pIndex)
{
    int todoOk = 0;
    if( list != NULL && pIndex != NULL && tam > 0)
    {
        *pIndex = -1;
        for(int i=0; i < tam; i++)
        {
            if(list[i].isEmpty)
            {
                *pIndex = i;
                break;
            }
        }
        todoOk = 1;
    }
    return todoOk;
}


int addPassenger (Passenger* list, int len,int cant, int id, char name[], char lastName[], float price, int typePassenger, char flycode[])
{
	int retorno=-1;
	int indice;
	int i=0;
	//Passenger auxPassenger;

	if(list != NULL && len > 0)
		{
			system("cls");
			printf("    *** subiendo los datos ***\n\n");
			buscarEspacioVacio(list, len, &indice);

			if(indice == -1)
			{
				printf("No hay lugar en el sistema\n");
			}
			else
			{
				for(;i<len;i++)
				{
					if(list[i].isEmpty == -1)
					{
						list[i].id = id;
						strcpy(list[i].name,name);
						strcpy(list[i].lastName,lastName);
						list[i].price = price;
						strcpy(list[i].flyCode , flycode);
						list[i].typePassenger=typePassenger;
						list[i].isEmpty = 0;

						i = len + 1;
					}
				retorno = 1;
				}

			}
	}
	return retorno;
}

int findPassengerById (Passenger* list, int len, int id, int* pIndex)
{
    int todoOk = 0;
    if( list != NULL && pIndex != NULL && len > 0)
    {
        *pIndex = -1;
        for(int i=0; i < len; i++)
        {
            if(!list[i].isEmpty && list[i].id == id)
            {
                *pIndex = i;
                break;
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

int showPassenger(Passenger list[], int len)
{
    int todoOk = 0;
    int flag = 1;
    if( list != NULL && len > 0)
    {
        system("cls");
        printf("       *** Listado de pasajeros ***\n");

        for(int i=0; i < len; i++)
        {
            if( list[i].isEmpty==0)
            {
                printOnePassenger(list[i], len);
                flag = 0;
            }
        }
        if(flag)
        {
            printf("     No hay datos en el sistema\n");
        }

        todoOk = 1;
    }
    return todoOk;
}

int removePassenger(Passenger* list,int len,int id)
{
    int todoOk = 0;
    int indice;
	char confirma;

    if( list != NULL  && len > 0)
    {
    	showPassenger(list, len);
    	printf("Ingrese el id: ");
    	scanf("%d",&id);

        findPassengerById(list, len, id, &indice);

        if(indice==-1)
        {
        	printf("No existe un pasajero con ese id: %d en el sistema.\n",id);
        }
        else
        {
        	printf("EL ID SELECCIONADO ES EL SIGUIENTE: \n");
        	printOnePassenger(list[indice], len);
        	printf("Confirmar baja???");
        	fflush(stdin);
        	scanf("%c",&confirma);
        	while((confirma!='s' && confirma!='S')&&(confirma!='n'&&confirma!='N'))
        	{
        		printf("LETRA NO VALIDA...Confirmar baja???");
        		fflush(stdin);
        		scanf("%c",&confirma);
        	}
        	if(confirma=='s'||confirma=='S')
        	{
        		list[indice].isEmpty=-1;
        		printf("baja exitosa");
        	}
        	else
        	{
        		printf("baja cancelada por el usuario");
        	}
        }
        todoOk = 1;
    }
    return todoOk;
}

int menuModificar()
{
    int opcion;

    printf("     *** Campo a modificar ***\n\n");
    printf("1. nombre\n");
    printf("2. apellido\n");
    printf("3. precio\n");
    printf("4. tipo de pasajero\n");
    printf("5. codigo de vuelo\n");
    printf("6. SALIR\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}

int modificarPasajero(Passenger list[],int len)
{
	int todoOk = 0;
	int indice;
	int id;
	char auxCadName[21];
	char auxCadLastName[21];
	float auxPrecio;
	int auxTipo;
	char auxCodigoVuelo[10];
	char salir ='n';

	eTipoPasajero tipo[2];
	int idTipo=1;
	hardcodearPasajeros(tipo, 2, &idTipo);

	if(list!=NULL && len>0)
	{
		showPassenger(list, len);
		printf("Ingrese el id");
		scanf("%d",&id);

		if(findPassengerById(list, len, id, &indice))
		{
			if(indice == -1)
			{
			    printf("No existe un pasajero con id: %d en el sistema\n", id);
			}
			else
			{
				printOnePassenger(list[indice], len);
			do
			{
				switch(menuModificar())
				{
				case 1:
					 printf("Ingrese nuevo nombre: ");
					 fflush(stdin);
					 gets(auxCadName);
					 strcpy(list[indice].name, auxCadName);
					 printf("\nNombre modificado!!!\n");
					  break;
				case 2:
					printf("ingrese nuevo apellido:");
					fflush(stdin);
					gets(auxCadLastName);
					strcpy(list[indice].lastName, auxCadLastName);
					printf("\napellido modificado!!!\n");
					break;
				case 3:
					printf("Ingrese el precio nuevo");
					scanf("%f",&auxPrecio);
					list[indice].price=auxPrecio;
					printf("\nEl precio se modifico!!!\n");
					break;
				case 4:
					mostrarTipos(tipo, 2);
					printf("\nIngrese el tipo de pasajero a modificar\n");
					scanf("%d",&auxTipo);
					list[indice].typePassenger=auxTipo;
					printf("\nEl tipo de pasajero se modifico!!!\n");
					break;
				case 5:
					printf("Ingrese el codigo nuevo:\n");
					fflush(stdin);
					gets(auxCodigoVuelo);
					strcpy(list[indice].flyCode , auxCodigoVuelo);
					printf("\nEl codigo de vuelo se modifico!!!\n");
					break;
				case 6:
					switch(casoSalir(salir))
					{
						case 's':
						case 'S':
							salir='s';
							printf("\n volviendo al menu!!! \n");
							break;
					}
					break;
				default:
					printf("Opcion no valida...\n");
					break;
				}
			}while(salir!='s');
			}
			todoOk = 1;
		}
	}
	return todoOk;
}


int menuMostrar()
{
    int opcion;

    printf("     *** submenu MOSTRAR ***\n\n");
    printf("1. Listado de los pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.\n");
    printf("2. Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio promedio.\n");
    printf("3. Listado de los pasajeros por Código de vuelo y estados de vuelos ‘ACTIVO’\n");
    printf("4. SALIR\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}

int sortByLastName(Passenger list[], int tam, int order)
{
	Passenger auxiliar;
		int todoOk = 0;
		int i;
		int j;

		if(list != NULL && tam >0)
		{
			for(i=0; i<tam-1;i++)
			{
				for(j=i+1;j<tam;j++)
				{
					if ((strcmp(list[i].lastName, list[j].lastName) > 0 && order == 0) && list[i].typePassenger > list[j].typePassenger)
					{
						auxiliar = list[j];
						list[j] = list[i];
						list[i] = auxiliar;
					}
					else
					{
						if ((strcmp(list[i].lastName, list[j].lastName) < 0 && order == 1) && list[i].typePassenger < list[j].typePassenger)
						{
							auxiliar = list[j];
							list[j] = list[i];
							list[i] = auxiliar;
						}
					}
				}
			}
		todoOk = 1;
		}
	return todoOk;
}



