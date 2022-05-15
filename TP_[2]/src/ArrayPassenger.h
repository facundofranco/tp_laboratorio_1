/*
 * ArrayPassenger.h
 *
 *  Created on: 28 abr. 2022
 *      Author: Gouki
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flyCode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;
}Passenger;

/** \brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initPassengers (Passenger* list, int len);

/** \brief add in a existing list of passengers the values received as parameters
* in the first empty position
* \param list passenger*
* \param len int
* \param cant int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return int Return (-1) if Error [Invalid length or NULL pointer or withoutfree space] - (0) if Ok
* */
int addPassenger (Passenger* list, int len,int cant, int id, char name[], char lastName[], float price, int typePassenger,char flycode[]);

/** \brief find a Passenger by Id en returns the index position in array.
*
* \param list Passenger*
* \param len int
* \param id int
* \return Return passenger index position or (-1) if [Invalid length or
NULL pointer received or passenger not found]
*
*/
int findPassengerById (Passenger* list, int len, int id, int* pIndex);

/** \brief Remove a Passenger by Id (put isEmpty Flag in 1)
*
* \param list Passenger*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a passenger] - (0) if Ok
*
*/
int removePassenger (Passenger* list, int len, int id);

/** \brief Sort the elements in the array of passengers, the argument order
indicate UP or DOWN order
*
* \param list Passenger*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortPassengers (Passenger* list, int len, int order);

/// @fn void printOnePassenger(Passenger, int)
/// @brief print one passanger
///
/// @param list
/// @param len
void printOnePassenger(Passenger list, int len);

/** \brief print the content of passengers array
*
* \param list Passenger*
* \param length int
* \return int
*
*/
int printPassenger (Passenger* list, int length);

/** \brief Sort the elements in the array of passengers, the argument order
indicate UP or DOWN order
*
* \param list Passenger*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortPassengersByCode (Passenger* list, int len, int order);

/// @fn int sortByLastName(Passenger[], int, int)
/// @brief sort the elements in the array of passenger by last name
///
/// @param list
/// @param len
/// @param order
/// @return
int sortByLastName(Passenger list[], int len, int order);

/// @fn int buscarEspacioVacio(Passenger[], int, int*)
/// @brief busca espacio vacio
///
/// @param list
/// @param tam
/// @param pIndex
/// @return
int buscarEspacioVacio(Passenger list[],int tam, int* pIndex);

/// @fn int showPassenger(Passenger[], int)
/// @brief en caso de que este lleno lista los elementos
///
/// @param list
/// @param len
/// @return
int showPassenger(Passenger list[], int len);

/// @fn int menuModificar()
/// @brief menu caso 2
///
/// @return
int menuModificar();

/// @fn int menuMostrar()
/// @brief menu caso 4
///
/// @return
int menuMostrar();

/// @fn int modificarPasajero(Passenger[], int)
/// @brief
///
/// @param list
/// @param len
/// @return
int modificarPasajero(Passenger list[],int len);
#endif /* ARRAYPASSENGER_H_ */
