#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include "arbb.h"

int main(){
	
	Arbol *unArbol;
	int *arreglo;
	
	
	int elem;
	int h;
	int posicion;
	int tam_max;
	unArbol=NULL;
	arreglo=NULL;
	
    unArbol=Insertar(unArbol,5);
    unArbol=Insertar(unArbol,3); 
	unArbol=Insertar(unArbol,2);  
	unArbol=Insertar(unArbol,1); 
	
	
	MostrarArbol(unArbol);
	
	h=altura(unArbol);
	printf("LA ALTURA ES %d \n",h);
	tam_max=TamanoMaximoArreglo(unArbol);
	printf("LA CANTIDAD MAXIMA DE HIJOS ES %d \n",tam_max);
	
	arreglo=calloc(tam_max,sizeof(int));
	
	
	printf("El arbol en arreglo es:");
	Crea_arbol_en_arreglo(unArbol,arreglo,posicion);
	qsort(arreglo,tam_max,sizeof(int),comparar);
	
	
	MostrarArreglo(arreglo,posicion,tam_max);

}

