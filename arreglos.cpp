#include <iostream>

const int N=10; //Tamaño del arreglo

void print (const double a[], int size); // el double a[] implica arreglo. Declaracion de print 
void average(const double a[], int size); //Declaracion funcion promedio
void inicializar( double a[], int size);

int main (void)
{
  double data[N] {0};//Se está inicializando en cero, sin el igual antes de los corchetes se debe compilar con g++ -std=c++11

  //std::cout<<data[0]<<std::endl;//Debe empezar en cero y terminar en N-1
  //std::cout<<data[N-1]<<std::endl;
  //std::cout<<data[N]<<std::endl; WRONG !!!! Compila pero sale un valor incorrecto
  //std::cout<<data[N]<<std::endl; Compilar con -fsanitize y asi sale el error
  

  // for (int ii=0;ii<N;++ii){ //OJO ii no puede ser <=N 
  //  data[ii]=2*ii; //Se está inicializando el arreglo con 2*ii
    
  print (data,N); //Como se usa print 
  average(data,N); //Como se usa average
  inicializar(data,N);//Como se usa inicializar
  
  //for(int ii=0;ii<N;++ii){// Lo dejo como comentario porque metúi la funcion average
  //  suma+=data[ii];
  //}

  //for (int ii=0;ii<N;++ii){
  //std::cout<<data[ii]<<std::endl;
  //}

  return 0;
}


void print ( const double a[], int size) //implementacion de la función print 
{
  for(int ii=0; ii<size;++ii){
    std::cout<<a[ii]<<std::endl;}
}


void average(const double a[],int size)
{
  double sum=0.0;
  for(int ii=0, ii<size, ++ii){
  sum +=a[ii];}
  
  std::cout<<"Average= "<<sum/size<<std::endl;
}


void inicializar(const duble a[],int size)
{
  for (int ii=0;ii<size;++ii){ 
    a[ii]=2*ii;}
}
  
