//Matriz cuadrada y su transpuesta. Codigo para matrices ortogonales 
#include <iostream>
#include <array>
#include <vector>


const int N=8;


void inicialize(int data[], int n);
void transpouse(int data[], int n);
void ortogonal(int data[],int n);
void print1(int data[], int n);
void print2(int data[], int n);

int main (void)
  
{
  int A[N*N]={0};
  int At[N*N]={0};
  int Ao[N*N]={0};

  inicialize(A,N);
  transpouse(At,N);
  ortogonal(Ao,N);
  print1(A,N);
  print2(At,N);

  return 0;
}

void inicialize(int data[],int n)
{
  for(int ii=0; ii<n;++ii){
    for(int jj=0; jj<n; ++jj){
      data[ii*n+jj]=2*ii+jj;
    }
  }}

void transpouse(int data[],int n){
  for(int ii=0;ii<n;++ii){
    for(int jj=0;jj<n;++jj){
      data[ii*n+jj]=2*jj+ii;
    }
  }
}

void ortogonal(int data[],int n){
  for (int ii=0; ii<n;++ii){
    for(int jj=0;jj<n;++j){
      data [ii*n+jj]= (2*ii+jj)*(2*jj+ii);
      if(){
	return 1;}
      else
      	return 0;
          }}}
	
void print1(int data[],int n){
  for(int ii=0; ii<n;++ii){
    for(int jj=0; jj<n; ++jj){
      std::cout<<data[ii*n+jj]<<" ";
    }
    std::cout<<std::endl;
  }
  std::cout<<'\n';
}

void print2(int data[],int n){
  for(int ii=0; ii<n;++ii){
    for(int jj=0; jj<n; ++jj){
      std::cout<<data[ii*n+jj]<<" ";
    }
    std::cout<<std::endl;
  }
  std::cout<<'\n';
}

