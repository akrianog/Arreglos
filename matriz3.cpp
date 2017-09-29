#include <iostream>
#include <array>
#include <vector>

const int Nx=7;
const int Ny=8;

void inicialize(int data[],int nx, int ny);
void transpouse(int data[], int nx, int ny);
void print(int data[],int nx, int ny);

int main(void)
{
  int A[Nx*Ny]={0};
  int At[Ny*Nx]={0};
  
  inicialize(A,Nx,Ny);
  transpouse(At,Nx,Ny);
  print(A,Nx, Ny);
  print(At,Nx,Ny);
   
  return 0;
}
void inicialize(int data[], int nx, int ny)
{
  for (int ii=0; ii<nx;++ii){ //Se esta fijando el i y luego se esta corriendo en j, si el for se hace al reves el codigo es mas lento.
    for (int j=0; j<ny;++j){
    data[ii*ny+j]=2*ii+j;}
  }
}

void transpouse(int data[], int nx, int ny)
{
  for(int ii=0;ii<Ny;++ii){
    for(int j=0; j<Nx; ++j){
      At[ii][j]=A[j][ii];
	}
  }
}

  void print(int data[],int nx, int ny)
  {

    for(int ii=0;ii<Nx;++ii){
    for(int j=0;j<Ny;++j){
      std::cout<<A[ii][j]<< " ";
    }
    std::cout<<std::endl;
  }

  std::cout<<'\n';
  }

 void print(int data[],int nx, int ny)
 {
   for(int ii=0;ii<Nx;++ii){
    for(int j=0; j<Ny;++j){
      std::cout<<At[ii][j]<<" ";
    }
    std::cout<<std::endl;
     }

  std::cout<<'\n';
 }
