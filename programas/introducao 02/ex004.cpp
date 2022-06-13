#include <iostream>
#include <iomanip>//por causa do manipulador setw
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
int main ()
{
 using namespace std ;

 int x = 2;
 int y = 255;

 cout << showbase // show the 0 x prefix
 <<internal // fill between the prefix and the number
 <<setfill ('0') ; // fill with 0s

 cout << hex << setw (4) << x << dec << " = " << setw (3) << x << endl ;
 cout << hex << setw (4) << y << dec << " = " << setw (3) << y << endl ;

 wchar_t w = 'b';

 cout << w << endl ;
 cout << ( char )w << endl ;

 cout << "size of wchar_t : " << sizeof ( wchar_t ) << " bytes " << endl ;

 return 0;
}