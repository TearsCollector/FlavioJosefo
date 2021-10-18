//programa que obtiene el resultado del problema de flavio Josefo
// http://progra.usm.cl/apunte/ejercicios/2/josefo.html

#include <stdio.h>
#define N 10

int array[N] = {1,2,3,4,5,6,7,8,9,10};

void elimina(int elegido, int restantes){
    for(int i = elegido; i <= restantes; i++){
        array[i] = array [i+1];
    }
}


int flavio(int salto){
    int elegido = 1, restantes = 10;
    for( int i = 1 ; i < N; i++){
        for(int j = 0; j <= salto; j++){
            if((elegido+1) >= restantes)
                elegido = 0;
            else
                elegido += 1;
        }
        elimina(elegido, restantes);
        restantes --;
    }
    return array[0];
}

int main(){
    int salto = 3, sobreviviente;
    sobreviviente = flavio(salto);

}