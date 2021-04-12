//
//  main.cpp
//  Clase17-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa organizaremos el ejercicio anterior modularizandolo en funciones.
//
//Comenzamos añadiendo las librerias.
#include <iostream>
#include <cstdlib>

void print_sum_multiples(int m, int n);

int main(int argc, char *argv[])
{
    int a = std::atof(argv[1]);
    int b = std::atof(argv[2]);
    
    print_sum_multiples(a, b);
    return 0;
}
void print_sum_multiples(int m, int n)
{
    int suma=0;
    for(int ii=m; ii<n; ++ii)
        {
            if(ii%3==0 || ii%5==0)
                {
                    suma+=ii;
                }
        }
    std::cout<<"La suma es: "<<"\n";
}

// El programa esta hecho, si al momento de compilar y luego al ejecutar escribimos:
// ./a.out 1 1000
// El programa nos botara la suma de: 233168.
// Si hacemos la prueba de los numeros del 1 al 10 tenemos que al ejecutar escribimos:
// ./a.out 1 10
// El programa nos botara la suma de: 23.
