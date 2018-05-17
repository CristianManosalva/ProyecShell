#include <stdio.h>
#include <string.h>
#include "funcionesShell.h"

int main(int argc, char** argv) {

	char instruccion[50];

	while(true){
	
		printf("\n\nIngrese la instruccion:  ");
		scanf("%[^\n]", instruccion);
		char * comando = instruccion;	
		eliminarEspacios(comando);
	
		if (strcmp(comando,"exit")){
			break;
		}else{
			mayorque(comando);
			System(comando);
		}
	}
	return 0;
}


