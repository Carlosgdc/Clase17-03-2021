//
//  main.cpp
//  Clase17-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa resolveremos un ejercicio el cual consiste en expresar la suma de los numeros del 1 al 1000 de aquellos que sean multiplos de 3 y 5.
//
//Comenzamos añadiendo las librerias.
#include <iostream>
#include <cstdlib>


int main(int argc, char *argv[])
{
    int a = std::atof(argv[1]);
    int b = std::atof(argv[2]);
    
    int suma=0;
    for(int ii=a; ii<b; ++ii)
    {
        if(ii%3==0 || ii%5==0)
        {
            suma+=ii;
        }
    }
    std::cout<<"La suma es: "<<"\n";
    
    return 0;
}
// El programa esta hecho, si al momento de compilar y luego al ejecutar escribimos:
// ./a.out 1 1000
// El programa nos botara la suma de: 233168.
// Si hacemos la prueba de los numeros del 1 al 10 tenemos que al ejecutar escribimos:
// ./a.out 1 10
// El programa nos botara la suma de: 23.
