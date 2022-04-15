/*
 * calculos.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Gouki
 */
/**
 * @def CALCULOS_H_
 * @brief
 *
 */
#ifndef CALCULOS_H_
#define CALCULOS_H_

/// @fn void calcularCostos(float, float, float*, float*, float*, float*, int*)
/// @brief calcula todos los costos correspondientes.
///
/// @param precio
/// @param kilometros
/// @param resultadoDebito
/// @param resultadoCredito
/// @param resultadoBitcoin
/// @param resultadoPrecioKilometro
/// @param flag
void calcularCostos(float precio,float kilometros,float* resultadoDebito,float* resultadoCredito,float* resultadoBitcoin,float* resultadoPrecioKilometro,int* flag);



/// @fn float calcularDiferencia(float, float)
/// @brief calcula la diferencia entre ambos precios iniciales
///
/// @param precioUno
/// @param precioDos
/// @return
float calcularDiferencia(float precioUno,float precioDos);



/// @fn void mostrarCalculosAerolineas(float, float, float, float, float, float)
/// @brief muestra los calculos realizados sobre Aerolineas
///
/// @param precioAerolineas
/// @param kilometros
/// @param precioDebitoAerolineas
/// @param precioCreditoAerolineas
/// @param precioBitcoinAerolineas
/// @param precioPorKilometroAerolineas
void mostrarCalculosAerolineas(float precioAerolineas, float kilometros, float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBitcoinAerolineas, float precioPorKilometroAerolineas);


/// @fn void mostrarCalculosLatam(float, float, float, float, float, float)
/// @brief muestra los calculos realizados sobre Latam
///
/// @param precioLatam
/// @param kilometros
/// @param precioDebitoLatam
/// @param precioCreditoLatam
/// @param precioBitcoinLatam
/// @param precioPorKilometroLatam
void mostrarCalculosLatam(float precioLatam, float kilometros, float precioDebitoLatam, float precioCreditoLatam,float precioBitcoinLatam, float precioPorKilometroLatam);



/// @fn void mostrarDiferencia(float)
/// @brief se encarga de mostrar la diferencia en los precios previamente ingresados.
///
/// @param diferencia
void mostrarDiferencia(float diferencia);
#endif /* CALCULOS_H_ */
