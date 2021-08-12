// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int primero=0;
    int segundo=0;
    int tercero=0;
    int cuarto=0;
    
  int numero;
  cout << "ingrese numero[1]: ";
  cin>>numero;
     primero=numero; 
  
  int numero2;
  cout << "ingrese numero[2]: ";
  cin>>numero2;
     segundo=numero2; 
  
   int numero3;
  cout << "ingrese numero[3]: ";
  cin>>numero3;
     tercero=numero3; 
  
   int numero4;
  cout << "ingrese numero[4]: ";
  cin>>numero4;
     cuarto=numero4; 
  
  if(primero<segundo)
  {
     int temp=0;
     
     temp=primero;
     primero=segundo;
     segundo=temp;
    
  }
  if(primero<tercero)
  {
     int temp=0;
     
     temp=primero;
     primero=tercero;
     tercero=temp;
    
  }
  if(primero<cuarto)
  {
     int temp=0;
     
     temp=primero;
     primero=cuarto;
     cuarto=temp;
    
  }
  //2
  if(segundo>primero)
  {
     int temp=0;
     
     temp=primero;
     primero=segundo;
     segundo=temp;
    
  }
  if(segundo<tercero)
  {
     int temp=0;
     
     temp=segundo;
     segundo=tercero;
     tercero=temp;
    
  }
  if(segundo<cuarto)
  {
     int temp=0;
     
     temp=segundo;
     segundo=cuarto;
     cuarto=temp;
    
  }
  //3
  if(tercero>primero)
  {
     int temp=0;
     
     temp=tercero;
     primero=tercero;
     primero=temp;
    
  }
  if(tercero>segundo)
  {
     int temp=0;
     
     temp=tercero;
     tercero=segundo;
     segundo=temp;
    
  }
  if(tercero<cuarto)
  {
     int temp=0;
     
    temp=tercero;
     tercero=cuarto;
     cuarto=temp;
    
  }
  //4
  if(cuarto>primero)
  {
     int temp=0;
     
     temp=primero;
     primero=cuarto;
     cuarto=temp;
    
  }
  if(cuarto>segundo)
  {
     int temp=0;
     
     temp=cuarto;
     cuarto=segundo;
     segundo=temp;
    
  }
  if(cuarto>tercero)
  {
     int temp=0;
     
    temp=cuarto;
     tercero=cuarto;
     cuarto=temp;
    
  }
  
  cout << "numero[1]: ";
  cout << primero<<endl;
  cout << "numero[2]: ";
  cout << segundo<<endl;
  cout << "numero[3]: ";
  cout << tercero<<endl;
  cout << "numero[4]: ";
  cout << cuarto<<endl;
  
  

  
}