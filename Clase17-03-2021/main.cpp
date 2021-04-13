//
//  main.cpp
//  Clase17-03-2021
//
//  Created by Countyfoot on 4/12/21.
//
// En este programa queremos hacer un segundo ejercicio, en este ejercicio queremos realizar la suma de los numeros pares de la sucesión de fibonacci en donde el mayor numero que tomemos de la sucesión no supere los 4 millones.
//
//Comenzamos añadiendo las librerias.
#include <iostream>
#include <cstdlib>

void sum_even_fibo(int nmax);

int main(int argc, char *argv[])
{
    int limit =std::atoi(argv[1]);

    sum_even_fibo(limit);

    return 0;
}

void sum_even_fibo(int nmax)
{
  int suma = 2;
  int na = 1, nb = 2;
  std::cout << na << " ";
  std::cout << nb << " ";
  int term = na + nb;
  while (term <= nmax)
  {
    if (term%2 == 0)
    {
      suma += term;
    }
    std::cout << term << " ";
    na = nb;
    nb = term;
    term = na + nb;
  }
  std::cout << "\n";
  std::cout << "suma: " << suma << "\n";
}
