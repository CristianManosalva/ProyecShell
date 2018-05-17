#include <stdio.h>
#include <string.h>
#include <errno.h>

void eliminarEspacios(char *str)
{
     int i = 0;
     int j = 0;
     
    while((*(str + i) = *(str + j++)) != '\0')
        if((*(str + i)) != ' ' || (*(str + j)) != ' ' && i > 0)
                 i++;

}

void mayorque(char *ptr, int len)
{
	int pos = 0;
	int tamano = strlen(frase) - 1;
	int operar = 0;
	while (*ptr != '\0'){
		if(*ptr == '>'){
			break;
			operar = 1;
		}
		pos = pos + 1;
		ptr++;
	}
	ptr++;
	//printf("%c\n", frase[pos]);
	char separa[tamano - pos];
	//printf("**********************\n");
	int i = 0;
	while(*ptr != '\0'){
		printf("%c\n",*ptr);
		separa[i] = *ptr;
		ptr++;
		i++;
	}
	
	if (operar == 1){

		FILE* f = NULL;
		f = fopen("Holi","r");
		if (f == NULL && errno == ENOENT){
			printf("El archivo no existe, comando ejecutado con exito");
		}else{
			fclose(f);
			printf("El archivo existe, no se puede ejecutar el comando");
		}
	}
}


//fflush(stdin);
