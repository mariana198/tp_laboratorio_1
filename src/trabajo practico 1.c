/*
 ============================================================================
 Name        : trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Inputs.h"
int main(void) {

    setbuf(stdout,NULL);
	int opcion;
	int respuesta;
	float kilometros;
	float precioAero;
	float precioLatam;
    float adebito;
    float acredito;
    float abit;
    float aprecioU;
    float diferencia;
    float ldebito;
    float lcredito;
    float lbit;
    float lprecioU;

 respuesta = getInt(&opcion ,"1. Ingresar Kilómetros:\n 2.Ingresar Precio de Vuelos:\n3."
        " Calcular todos los costos:\n4. Informar Resultados:\n"
        "5. Carga forzada de datos:\n6. Salir\n");




if(respuesta!=0){

	switch(opcion){

	      case 1:
	    	  kilometros =  getFloat(&kilometros,"Ingresar Kilometros");
			      break;
		     case 2:
		        precioAero = getFloat(&precioAero,"Ingresar Precio Aerolineas");
		        precioLatam =  getFloat(&precioLatam,"Ingresar Precio Latam");

			      break;
		      case 3:
		           if(precioAero!=0){
		    	    adebito =calcularPorcentaje(precioAero,10);
		    	   acredito= calcularPorcentaje(precioAero,25);
		    	   abit = calcularDivision(precioAero,4606954.55);
		    	   aprecioU= calcularDivision(precioAero,kilometros);
		    	  if(precioAero>precioLatam){

		    		diferencia = restarNumeros(precioAero,precioLatam);
		    	     }
		         }
		        if(precioLatam!=0){
		    	   ldebito =calcularPorcentaje(precioLatam,10);
		    	   lcredito= calcularPorcentaje(precioLatam,25);
		    	    lbit = calcularDivision(precioLatam,4606954.55);
		    	    lprecioU= calcularDivision(precioLatam,kilometros);
		        if(precioLatam>precioAero){

		         diferencia = restarNumeros(precioLatam,precioAero);

		         }


		    }

             break;
		      case 4:
		    	  printf("Precio aerolineas: %f\n", precioAero);
		    	  printf("a) Precio con tarjeta de débito: %f\n",adebito = calcularPorcentaje(precioAero,10));
		    	  printf("b) Precio con tarjeta de crédito: %f\n",  acredito= calcularPorcentaje(precioAero,25));
		    	  printf("c) Precio pagando con bitcoin :%f\n", abit = calcularDivision(precioAero,4606954.55));
                  printf("d) Precio unitario: %f\n", aprecioU= calcularDivision(precioAero,kilometros));
                  printf("Precio Latam: %f\n",precioLatam);
                  printf("a) Precio con tarjeta de débito: %f\n",ldebito =calcularPorcentaje(precioLatam,10));
                  printf("b) Precio con tarjeta de crédito: %f\n",lcredito= calcularPorcentaje(precioLatam,25));
                  printf("c) Precio pagando con bitcoin :%f\n",lbit = calcularDivision(precioLatam,4606954.55));
                  printf("d) Precio unitario: %f\n",lprecioU= calcularDivision(precioLatam,kilometros));
                  printf("La diferencia de precio es :",diferencia = restarNumeros(precioLatam,precioAero));


			      break;
		      case 5:
		    	  kilometros = 7090;
		    	  precioLatam = 159339;
		    	  precioAero = 162965;
		    	  printf("Kilometros % f \n",kilometros);
		    	  printf("Precio aerolineas: %f\n",precioAero);
		    	  printf("Precio Latam: %f\n", precioLatam);
		    	  printf("a) Precio con tarjeta de débito: %f\n",adebito = calcularPorcentaje(precioAero,10));
		    	  printf("b) Precio con tarjeta de crédito: %f\n",  acredito= calcularPorcentaje(precioAero,25));
		    	  printf("c) Precio pagando con bitcoin :%f\n", abit = calcularDivision(precioAero,4606954.55));
		    	  printf("d) Precio unitario: %f\n", aprecioU= calcularDivision(precioAero,kilometros));
		    	  printf("Precio Latam: %f\n",precioLatam);
		    	  printf("a) Precio con tarjeta de débito: %f\n",ldebito =calcularPorcentaje(precioLatam,10));
		    	  printf("b) Precio con tarjeta de crédito: %f\n",lcredito= calcularPorcentaje(precioLatam,25));
		    	  printf("c) Precio pagando con bitcoin :%f\n",lbit = calcularDivision(precioLatam,4606954.55));
		    	  printf("d) Precio unitario: %f\n",lprecioU= calcularDivision(precioLatam,kilometros));
		    	  printf("La diferencia de precio es :",diferencia = restarNumeros(precioLatam,precioAero));



			       break;
		      case 6:
		    	  break;

     }


}
return 0;
}
