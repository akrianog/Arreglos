#include <iostream>
#include <array>

const int N=10;

void inicializar(std::array<double,N> &a); //Funciones Reciben arreglos de tipo array, está  pasando por valor
void print(std::array<double,N>a);
void average(std::array<double,N>a);

int main (void)
{

  std::array<double, N> data {0};

  inicializar(data);
  print(data);
  average(data);

  return 0;
}

void inicializar(std::array<double,N> &a);
{
  for (int ii=0; ii < N, ++ii){
    a[ii] = 2*ii;
  }
}

