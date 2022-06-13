#include <iostream>
#include <iomanip>
#include <bitset>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 using namespace std ;
 int main () {
 unsigned long int A = 0b00111100 ;
 unsigned long int B = 0b00001101 ;
 unsigned long int x ,y ,w ,z ;

 x = A & B ;
 y = A | B ;
 z = A ^ B ;
 w =  ~A;

 cout << " A = " << A << " e B = " << B << endl ;
 cout << " A & B = " << x << endl ;
 cout << " A | B = " << y << endl ;
 cout << " A ^ B = " << z << endl ;
 cout << "  ̃ A = " << w << endl ;

 cout << " ---------------- -- --- -- --- -- --- " << endl ;
 cout << " Podemos mostrar na base 2 " << endl ;

 cout << " A = " << bitset <8 >{ A } << endl << " B = " << bitset <8 >{ B } << endl ;
 cout << " ------------------- " << endl ;


 cout << " A & B = " << bitset <8 >{ x} << endl ;
 cout << " A | B = " << bitset <8 >{ y } << endl ;
 cout << " A ^ B = " << bitset <8 >{ z} << endl ;
 cout << "  ̃ A = " << bitset <8 >{ w } << endl ;


 cout << " ---------------- -- --- -- --- -- --- " << endl ;

 cout << " Podemos mostrar na base 16 " << endl ;
 cout << " A = " << hex << uppercase << A << endl << " B = " << hex <<

uppercase << B << endl ;

 cout << " ------------------- " << endl ;

 cout << " A & B = " << hex << uppercase << x << endl ;
 cout << " A | B = " << hex << uppercase << y << endl ;
 cout << " A ^ B = " << hex << uppercase << z << endl ;
 cout << "  ̃ A = " << hex << uppercase << w << endl ;
 return 0;


 }