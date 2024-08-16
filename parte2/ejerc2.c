#include <stdio.h>
#include <string.h>

int main() {
    char contra[9] = "123Abcde"; 
    char input[9];       

    printf("Ingrese contraseña: ");
    scanf("%8s", input);        

    if (strcasecmp(contra, input) == 0) {
        printf("Contraseña correcta\n");
    } else {
        printf("Contraseña incorrecta\n");
    }

    return 0;
}
