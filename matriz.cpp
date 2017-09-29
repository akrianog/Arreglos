#include <iostream>
#include <array>
#include <vector>

const int Nx=7;
const int Ny=8;

int main(void)
{
  int A[Nx][Ny]={{0}};
  int At[Ny][Nx]={{0}};
  

  for (int ii=0; ii<Nx;++ii){ //Se esta fijando el i y luego se esta corriendo en j, si el for se hace al reves el codigo es mas lento.
    for (int j=0; j<Ny;++j){
    A[ii][j]=2*ii+j;
    }
  }

  for(int ii=0;ii<Ny;++ii){
    for(int j=0; j<Nx; ++j){
      At[ii][j]=A[j][ii];
	}
  }
  
  for(int ii=0;ii<Nx;++ii){
    for(int j=0;j<Ny;++j){
      std::cout<<A[ii][j]<< " ";
    }
    std::cout<<std::endl;
  }

  std::cout<<'\n';
  
  for(int ii=0;ii<Nx;++ii){
    for(int j=0; j<Ny;++j){
      std::cout<<At[ii][j]<<" ";
    }
    std::cout<<std::endl;
     }

  std::cout<<'\n';
  
  return 0;
}
  
  
