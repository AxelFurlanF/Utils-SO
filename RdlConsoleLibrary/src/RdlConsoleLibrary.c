/*
 ============================================================================
 Name        : RdlConsoleLibrary.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

size_t bufsize = 32;


size_t console(char *buffer) {


    size_t characters;


    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }

    printf("> ");
    characters = getline(buffer,&bufsize,stdin);
    //printf("%zu characters were read.\n",characters);

    return characters;

}

int main(void){
	char *buffer;
	size_t n_characters;

	buffer = (char *)malloc(bufsize * sizeof(char));

	n_characters = console(&buffer);

	printf("You typed: '%s'\n", buffer);

	free(buffer);
}
