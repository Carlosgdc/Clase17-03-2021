//
//  main.cpp
//  Clase17-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
//Comenzamos añadiendo las librerias.
#include <iostream>     //Esta libreria nos da la utilidad de utilizar las funciones cout, cin, entre otras.
#include <cstdlib>      //Esta libreria nos da la utilidad de utilizar las funciones atoi, atof, entre otras. Estas funciones me transforman una cadena o cualquier conjunto de caracteres en un valor entero si utilizamos atoi y en un valor double si utilizamos atof.

double average(double k, double y);

int main(int argc, char *argv[]) // Al momento de ejecutar esta declaración tenemos dos funciones que realizan trabajos distintos.
// Cuando compilamos este programa se genera un archivo a.out, el cual al momento de ejecutar podemos escribir una o varias cadenas o arreglos de caracteres.
// Un ejemplo de como se veria esta acción seria: /a.out 1 2. En este caso al escribir ./a.out ejecutamos este archivo y creamos dos cadenas, la cadena 1 y la cadena 2.
// La función argc lo que realiza es que nos cuenta cuantas cadenas existen al ejecutar nuestro archivo, hay que tener en cuenta que el archivo en si lo contara como una cadena. En el ejemplo anterior la función argc seria argc=3.
// La función argv lo que realiza es que denominada a cada una de las cadenas por indices comenzando desde 0 y escoje la cadena que haya sido seleccionada acorde a los indices. En el ejemplo anterior la función argv[1]= 1, argv[2]=2 y argv[0]=./a.out.
{
    double x = std::atof(argv[1]); //
    double y = std::atof(argv[2]);
    double z = 0;
    z = average(x, y);
    std::cout << z << std::endl;
    return 0;
}

double average(double k, double y)
{
    double result = 0;
    result = 0.5*(k + y);
    return result;
}
//En este programa aprendimos a crear una función de manera organizada sin necesidad que se encontrara dentro de la función main, de esta forma conseguimos que segun las dos primeras cadenas que pongamos al lado de nuestro ejecutable a.out se les sacara su promedio.
