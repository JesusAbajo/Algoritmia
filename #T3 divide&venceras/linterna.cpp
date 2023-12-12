




bool tripleta(int v[], int a, int b){// ,int &minElem, int&maxElem



        // caso recursivo

        int posiciondelmax= buscamaz();


        haytripleta(v, a, posiciondelmax-1);
        haytripleta(v, posiciondelmax + 1, b);

        int minIzq= minimo(v,a, posiciondelmax-1);
        int mindcha = maximo(v, posiciondelmax+1, b);

}