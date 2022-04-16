/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Gouki
 */

#include <stdio.h>
#include <stdlib.h>

void calcularCostos(float precio,float kilometros,float* resultadoDebito,float* resultadoCredito,float* resultadoBitcoin,float* resultadoPrecioKilometro,int* flag)
{
	if(kilometros>0&&precio>0)
	{
	float descuentoConDebito;
	float descuento;

	float interesesConCredito;
	float intereses;

	float bitcoin;


	descuentoConDebito=10;
	interesesConCredito=25;
	bitcoin= 4606954.55;
	*flag=1;

	descuento=precio*descuentoConDebito/100;
	*resultadoDebito=precio-descuento;
	intereses=precio*interesesConCredito/100;
	*resultadoCredito=precio+intereses;
	*resultadoBitcoin=precio/bitcoin;
	*resultadoPrecioKilometro=precio/kilometros;
	}
	else
	{
		printf("\n\nERROR...FALTAN DATOS\n");
	}

}

float calcularDiferencia(float precioUno,float precioDos)
{
	float diferencia;

	if(precioUno>precioDos)
	{
		diferencia=precioUno-precioDos;
	}
	else
	{
		diferencia=precioDos-precioUno;
	}

	return diferencia;
}

void mostrarCalculosAerolineas(float precioAerolineas, float kilometros, float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBitcoinAerolineas, float precioPorKilometroAerolineas)
{
	printf("\nLa cantidad de kilometros es:%.2f\n",kilometros);
	printf("\nPrecio Aerolineas: $%.2f",precioAerolineas);
	printf("\nA)Precio con tarjeta de débito: $%.2f",precioDebitoAerolineas);
	printf("\nB)Precio con tarjeta de crédito: $%.2f",precioCreditoAerolineas);
	printf("\nC)Precio pagando con bitcoin: %f BTC",precioBitcoinAerolineas);
	printf("\nD)Mostrar precio unitario: $%.2f\n",precioPorKilometroAerolineas);
}

void mostrarCalculosLatam(float precioLatam, float kilometros, float precioDebitoLatam, float precioCreditoLatam,float precioBitcoinLatam, float precioPorKilometroLatam)
{
	printf("\nPrecio Aerolineas: $%.2f",precioLatam);
	printf("\nA)Precio con tarjeta de débito: $%.2f",precioDebitoLatam);
	printf("\nB)Precio con tarjeta de crédito: $%.2f",precioCreditoLatam);
	printf("\nC)Precio pagando con bitcoin: %f BTC",precioBitcoinLatam);
	printf("\nD)Mostrar precio unitario: $%.2f\n",precioPorKilometroLatam);
}

void mostrarDiferencia(float diferencia)
{
		printf("\nla diferencia es %.2f\n",diferencia);
}
