#include <iostream>
#include <array>
#include <vector>

const int Nx=7;
const int Ny=8;

int main(void) //arreglos unidimensionales para la matriz [Nx][Ny]
{
  int A[Nx*Ny]={0}; //Se inicializa como unidimensional
  int At[Ny*Nx]={0}; //Se inicializa como unidimensional
  

  for (int ii=0; ii<Nx;++ii){ //Se esta fijando el i y luego se esta corriendo en j, si el for se hace al reves el codigo es mas lento.
    for (int j=0; j<Ny;++j){
      A[ii*Ny+j]=ii*j; //Se cambia la forma de acceder al arreglo porque es unidimensional
    }
  }

  for(int ii=0;ii<Ny;++ii){
    for(int j=0; j<Nx; ++j){
      At[ii*Nx+j]=A[j*Ny+ii]; //Se cambia la forma de acceder al arreglo
	}
  }
  
  for(int ii=0;ii<Nx;++ii){
    for(int j=0;j<Ny;++j){
      std::cout<<A[ii*Ny+j]<< " ";
    }
    std::cout<<std::endl;
  }
  std::cout<<'\n';
  
  
   for(int ii=0;ii<Nx;++ii){
    for(int j=0; j<Ny;++j){
      std::cout<<At[ii*Ny+j]<<" ";
	}
    std::cout<<std::endl;
     }
   std::cout<<'\n';
  return 0;
}
  
