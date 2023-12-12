//Enunciado examen: Tienes un camello con 2 alforjas de capacidades distintas y tienes que rellenarlo con pesos, dados n objetos cada uno con su peso, maximizar el peso que pueda llevar, la diferencia entre las 2 alforjas no puede ser mayor del 5%


void camellos(
        //Representación del problema
        int n, //nº de productos
        float peso[],
        float valor[],
        float cap1, float cap2,

        //Solución parcial
        int solParcial[], //0: no, 1: alf1, 2:alf2
        int k,

        //Marcaje
        float cargaAlf1, float cargaAlf2,
        float valorPendiente,
        int valorSolParcial,

        //Mejor solución
        int mejorSolucion[],
        int& valorOptimo
    ){

    if(n == k){
        if(valorSolParcial > valorOptimo){
            if(abs(cargaAlf1 - cargaAlf2) < 0.05 * (cargaAlf1 + cargaAlf2))     //No hay otra forma de hacerlo, no se considera fuerza bruta
                valorOptimo = valorSolParcial;
                for(int i = 0; i < n; ++i)
                    mejorSolucion[i] = solParcial[i];
            }
        return;
    }
            
    //Caso recursivo: ¿qué hago con ele producto k + 1?

    //Caso 1: a la alforja 1
    if(cargaAlf1 + peso[k] <= cap1){
        solParcial[k] = 1;
        camellos(n, peso, valor, cap1, cap2, solParcial, k + 1, cargaAlf1 + peso[k], cargaAlf2, valorPendiente - valor[k], valorSolParcial + valor[k], mejorSolucion, valorOptimo);
    }

    //Caso 2: a la alforja 2
    if(cargaAlf2 + peso[k] <= cap2){
        solParcial[k] = 1;
        camellos(n, peso, valor, cap1, cap2, solParcial, k + 1, cargaAlf1, cargaAlf2 + peso[k], valorPendiente - valor[k], valorSolParcial + valor[k], mejorSolucion, valorOptimo);
    }
    //Caso 3: no lo cogemos
    //Poda
    if(valorOptimo < valorSolParcial + valorPendiente - valor[k]){  
        solParcial[k] = 0;
        camellos(n, peso, valor, cap1, cap2, solParcial, k + 1, cargaAlf1, cargaAlf2, valorPendiente - valor[k], valorSolParciaL, mejorSolucion, valorOptimo);
    }
    //Sin poda
    /* 
    solParcial[k] = 0;
    camellos(n, peso, valor, cap1, cap2, solParcial, k + 1, cargaAlf1, cargaAlf2, valorPendiente - valor[k], valorSolParciaL, mejorSolucion, valorOptimo);
    */

   //Una vez vista la poda, podriamos añadir a la poda la condición de equilibrio, eso sí, este tendría que estar en todos los casos, no solo en el 3, así podríamos quitar el if de equilibrio del caso base
}

int main(){
    
    int pesos[100];
    int valores[100];
    int n;
    int c1, c2;

    //Lectura
    //...

    for(int i = 0; i < n; ++i)
        valorTotal += valores[i];

    //Llamada
    int dummyParcial[100];
    int solucion[100];
    int mejorValor = 0;
    camellos(n, pesos, valores, c1, c2, dummyParcial, 0, 0, 0, 0, valorTotal, solucion, mejorValor);

    return 0;
}