/*
 ============================================================================
 ALUMNO CARLOS ZALAZAR 1G

1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada
 actualizarRecuperados que reciba el país y los recuperados del dia y que acumule
 estos a los que ya tiene el país. La función no devuelve nada.


 2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres
 como parámetro  y su responsabilidad es invertir los caracteres de la misma.
  Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_CADENA 30


typedef struct{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

void actualizarRecuperados(ePais pais, int recuperados);

void invertirCadena(char cadena[]);

int main(void) {
	setbuf(stdout,NULL);
	int persRecuperadas;
	char cadena[TAM_CADENA];
	ePais pais;


	printf("INGRESAR RECUPERADOS");
	scanf("%d", &persRecuperadas);

	actualizarRecuperados(pais, persRecuperadas); // LLAMADA A FUNCION ACTUALIZAR

	printf("\nInvertir Cadena: ");
	gets(cadena);

	invertirCadena(cadena); // LLAMADA A FUNCION INVERTIR CADENA

	printf("%s", cadena);
	return EXIT_SUCCESS;
}

void actualizarRecuperados(ePais pais, int recuperados){

	pais.recuperados = pais.recuperados + recuperados;
	pais.infectados =  pais.infectados - recuperados;

}

void invertirCadena(char cadena[]){

	int tamanio;
	char auxCadena[TAM_CADENA];

	tamanio = strlen(cadena);

	for(int i=tamanio; i>0; i--){

		for(int j=0; j<tamanio;j++){
			auxCadena[j] = cadena[i];
		}
	}
	strcpy(cadena, auxCadena);
}

