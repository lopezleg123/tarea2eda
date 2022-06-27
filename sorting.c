#include "sorting.h"

int main () {   

    FILE * archivo;     
    char temp [1750];
    int numeroLineas;

    archivo = fopen("tweets.csv" , "r");
        
    
    while (!feof(archivo)) //CONTAMOS EL NUMERO DE LINEAS.
    {   
        fgets(temp,1750,archivo);
        numeroLineas++;
    }
    
    rewind(archivo);

    printf("%d" , numeroLineas);
    

    fclose(archivo);

    return 0;

}