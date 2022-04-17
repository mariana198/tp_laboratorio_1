/*
 * getint.c
 *
 *  Created on: 15 abr. 2022
 *      Author: mariana
 */
#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"

int getInt(int *numeroEntero,char mensaje[]){

int retorno=-1;

 if(numeroEntero!=NULL && mensaje != NULL){

		printf("%s",mensaje);
		scanf("%d",numeroEntero);
		retorno = 0 ;

 }


	return retorno;

}

float getFloat(float *numeroFlotante,char mensaje[]){

int retorno=-1;

 if(numeroFlotante!=NULL && mensaje != NULL){

		printf("%s",mensaje);
		scanf("%d",numeroFlotante);
		retorno = 0 ;

 }


	return retorno;

}
float calcularPorcentaje( float numero, int porcentaje){
	float respuesta;
		respuesta = (numero * porcentaje )/100;



	return respuesta;
}

float calcularDivision( float dividendo, float divisor){

	float respuesta;

	respuesta = dividendo/divisor;


	return respuesta;
}

float restarNumeros(float x, float y)
{
	float respuesta;

	respuesta = x -y;

	return respuesta;

}
