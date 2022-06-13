#include <iostream>
#include <cstdio>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std ;
int main ()
{
 int x ;
 cout << " Digite um inteiro : " ;
 cin >> x;//funciona como um scanf 
 cout << " Numero digitado : " << x << endl ;
 // usando printf ( biblioteca < cstdio >)
 printf (" Numero digitado ( usando printf ): % i \n ",x) ;
 return 0;
}