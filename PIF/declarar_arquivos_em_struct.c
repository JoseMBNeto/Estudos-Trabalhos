#include <stdio.h>
#include <string.h>

typedef struct Livro{
        char titulo[50];
        char autor[50];
        char genero[25];
        int livro_id;
}Livro;

int main(){
    
    Livro livro1;
    Livro livro2;
    
    strcpy(livro1.titulo, "Senhor do aneis");
    
    strcpy(livro1.autor, "Tolkien");
    
    strcpy(livro1.genero, "Fantasia");
    
    livro1.livro_id = 100;
    
    strcpy(livro2.titulo, "O corno voador");
    
    strcpy(livro2.autor, "Carai de asa");
    
    strcpy(livro2.genero, "Putaria");
    
    livro2.livro_id = 200;
    
    
    
    return 0;
}