/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float mostrarnumero();

int main(void) {
setbuf(stdout, NULL);
	float numero;
	numero = mostrarnumero();

	printf("el numero ingresado es %f ", numero);

	return 0;

}
float mostrarnumero()
{
	float numero;

	printf("ingrese un numero ");
		scanf("%f",&numero);

		return numero;
}



