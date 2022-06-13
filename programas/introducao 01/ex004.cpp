#include <iostream>
#include <cstdio>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A

//#include <string> // experimente compilar sem essa biblioteca
 using namespace std ;
 int main ()
 {
 string nome ;
 cout << " Digite seu nome : " ;
 cin >> nome ;
 cout << " Seu nome : " << nome << endl ;
 // usando printf ( biblioteca < cstdio >)
 printf ( " Seu nome ( usando printf ): %s \n " , nome . c_str () ) ;
 // repare ( experimente !) que nao podemos fazer :
 // printf (" Seu nome ( usando printf ): % s\ n", nome );
 //isso da erro ja que nome é da classe string e nao um array de char
 return 0;
}