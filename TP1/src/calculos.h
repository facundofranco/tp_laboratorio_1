/*
 * calculos.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Gouki
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

void calcularCostos(float precio,float kilometros,float* resultadoDebito,float* resultadoCredito,float* resultadoBitcoin,float* resultadoPrecioKilometro,int* flag);
float calcularDiferencia(float precioUno,float precioDos);
void mostrarCalculosAerolineas(float precioAerolineas, float kilometros, float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBitcoinAerolineas, float precioPorKilometroAerolineas);
void mostrarCalculosLatam(float precioLatam, float kilometros, float precioDebitoLatam, float precioCreditoLatam,float precioBitcoinLatam, float precioPorKilometroLatam);
void mostrarDiferencia(float diferencia);
#endif /* CALCULOS_H_ */
