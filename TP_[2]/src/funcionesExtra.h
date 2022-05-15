/*
 * fecha.h
 *
 *  Created on: 12 may. 2022
 *      Author: Gouki
 */

#ifndef FUNCIONESEXTRA_H_
#define FUNCIONESEXTRA_H_

#include <stdio.h>
#include <stdlib.h>

/// @fn void obtenerNumero(int*, char[])
/// @brief recibe un entero
///
/// @param variableRecibida
/// @param textoAMostrar
void obtenerNumero(int* variableRecibida, char textoAMostrar[]);

/// @fn void obtenerFloat(float*, char[])
/// @brief recibe un flotante
///
/// @param variableRecibida
/// @param textoAMostrar
void obtenerFloat(float* variableRecibida, char textoAMostrar[]);

/// @fn void obtenerCadena(char[], char[])
/// @brief recibe una cadena
///
/// @param arrayRecibido
/// @param textoAMostrar
void obtenerCadena(char arrayRecibido[], char textoAMostrar[]);

#endif /* FUNCIONESEXTRA_H_ */
