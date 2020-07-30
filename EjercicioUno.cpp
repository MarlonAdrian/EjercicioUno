#include <iostream>
using namespace std;

// DEFINIR EL PROTOTIPO DE LAS FUNCIONES - PASO 1
void prueba();
int suma ( int a, int b);
void regresiva();
void cuentaregresiva ( int x);
int sumarecursiva (int m, int n);
int factorial (int p);


//funcion principal
int main()
{
  // LLAMAR A LA FUNCIÓN - PASO 3
  prueba();

  cout << suma ( 5, 15) << endl;

  //regresiva(); sin tener caso base

  cuentaregresiva (10);

  cout << sumarecursiva (2 , 2);

  factorial (3);

  return 0;
}



// DESARROLLO DE LA FUNCION - PASO 2
void prueba()
{
  cout<<"EL VALOR DE LA FUNCIÓN ES HOLA"<< endl;
}


int suma (int a, int b)
{
  int resultado = a+b;
  //resultado = a + b;
  return resultado;
}


void regresiva()
{
  regresiva(); // no tiene caso base, solamente se llama así misma
}


void cuentaregresiva (int x)
{
 cout << x << endl;

 if (x > 0)
 {
  cuentaregresiva (x-1);
 }

}



int sumarecursiva(int m, int n)
{
 int resultado = m+n;

 if (m == 0) //esto es mi caso base
  {
    resultado = n;
  }

  else
  {
   sumarecursiva( m-1, n+1); //resultado = sumarecursiva(m-1, n+1);
   //resul = sumarecursiva( m-1, n+1);
  }

 return resultado; //return resul; -> imprime: 6295648
}


int factorial (int p)
{
  if (p==0)
   {
    return 1;
   }

  else
  {
   return p * factorial(p-1);
  }

}

