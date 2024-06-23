#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *archivo;
    char escribe[]="Escribir una cadena dentro de un archivo,mediante fputs\n";
        archivo=fopen("archivo2.txt", "r+");
    if (archivo != NULL)
    {
                printf("El archivo se abrio correctamente\n");
                fputs(escribe, archivo);
                fclose(archivo);
     }
     else
     {
         printf("Error al abrir el archivo\n");
         printf("El archivo no existe o no hay permiso de lectura\n");
     }
           system("pause>NUL");
}
