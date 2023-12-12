

// Un vector escalonado tanto ascendete como descente modulo 10 es 12332109898012
// 235 no lo es
// Dan dos funciones sube(n) = n + 1 si n < 9, 0 si n == 9 y baja(n) = n - 1 si n > 0, 9 si n == 0
// Decir Cuantos menores a k son escalonados

bool esEscaRaiz(){
    return true;
}

int numEs(int n){


    //CB
    if(n < 10){
        return n;
    }

    //Cuento bloque 1
    int r = n / 10;
    int d = n % 10;
    int ret = numEs(r);
    ret = 2 * ret + 8;
    //Cuento bloque2
    if(esEscaRaiz()){   //Esta llamdada podría ahorrarse generalizando la recursión y añadiendo que te diga si n es escalonado
        int ult = r % 10;
        if(sube(ult) < d)
            ret++;
        if(baja(ult) < d)
            ret++;
    }
}


//Versión definitiva

int numEscalonados(int n, bool& escalonado){
    //CB
    if(n < 10){
        escalonado = true;
        return n;
    }
    //CR
    //Contamos bloque 1
    int ret = 0;
    int r = n / 10;
    int d = n % 10;
    ret = numEscalonados(r, escalonado);
    ret = 2 * ret + 8;
    //Contamos bloque 2
    if(escalonado){   //Esta llamdada podría ahorrarse generalizando la recursión y añadiendo que te diga si n es escalonado
        int ult = r % 10;
        if(sube(ult) < d)
            ret++;
        if(baja(ult) < d)
            ret++;
    }
    //Comprabamos si soy escalonado
    escalonado = escalonado && (sube(r % 10) == d) || baja(r % 10) == d);
    return ret;
}