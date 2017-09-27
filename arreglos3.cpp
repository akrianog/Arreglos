#include <iostream>
#include <vector>

const int N=10;

void inicializar(std::vector<double> &a); //Funciones Reciben arreglos de tipo array, está  pasando por valor
void print(std::vector<double>a);
void average(std::vector<double>a);

int main (void)
{

  std::vector<double> data {0};

  inicializar(data);
  print(data);
  average(data);

  return 0;
}

void inicializar(std::vector<double> &a);
{
  for (int ii=0; ii < N, ++ii){
    a[ii] = 2*ii;
  }
}

void print(uble a[], int size)
{
  // print the array
  for(int ii = 0; ii < size; ++ii){
    std::cout << a[ii] << std::endl;
  }
}

