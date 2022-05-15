/*
 * tipoPasajero.h
 *
 *  Created on: 12 may. 2022
 *      Author: Gouki
 */

#ifndef TIPOPASAJERO_H_
#define TIPOPASAJERO_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int idTipo;
	char descripcion[21];
}eTipoPasajero;

/// @fn int hardcodearPasajeros(eTipoPasajero[], int, int*)
/// @brief carga los datos en el main
///
/// @param tipo
/// @param tam
/// @param pNextId
/// @return
int hardcodearPasajeros(eTipoPasajero tipo[],int tam , int* pNextId);

/// @fn void mostrarUntipo(eTipoPasajero)
/// @brief muestra un solo tipo
///
/// @param tipo
void mostrarUntipo(eTipoPasajero tipo);

/// @fn int mostrarTipos(eTipoPasajero[], int)
/// @brief muestra los elementos que esten cargados
///
/// @param tipo
/// @param tam
/// @return
int mostrarTipos(eTipoPasajero tipo[], int tam);


#endif /* TIPOPASAJERO_H_ */
