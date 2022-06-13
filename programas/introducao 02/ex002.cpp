#include <iostream>
#include <limits.h> // para int , char macros
#include <float.h> // para float , double macros
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std ;
int main ()
{

// Mostra a faixa de cada tipo usando macros
 cout << " char varia de : " << CHAR_MIN << " a " << CHAR_MAX ;
 cout << " \n \nshort char varia de : " << SCHAR_MIN << " a " << SCHAR_MAX ;
 cout << " \n \nunsigned char varia de : " << 0 << " a " << UCHAR_MAX ;

 cout << " \n \n \nshort int varia de : " << SHRT_MIN << " a " << SHRT_MAX ;
 cout << " \n \nunsigned short int varia de : " << 0 << " a " << USHRT_MAX ;
 cout << " \n \nint varia de : " << INT_MIN << " a " << INT_MAX ;
 cout << " \n \nunsigned int varia de : " << 0 << " a " << UINT_MAX ;
 cout << " \n \nlong int varia de : " << LONG_MIN << " a " << LONG_MAX ;
 cout << " \n \nunsigned long int varia de : " << 0 << " a " << ULONG_MAX ;
 cout << " \n \nlong long int varia de : " << LLONG_MIN << " a " << LLONG_MAX ;
 cout << " \n \nunsigned long long int varia de : " << 0 << " a " << ULLONG_MAX ;

 cout << " \n \n \nfloat varia de : " << FLT_MIN << " a " << FLT_MAX ;
 cout << " \n \nnegative float varia de : " << - FLT_MIN << " a " << -FLT_MAX ;
 cout << " \n \ndouble varia de : " << DBL_MIN << " a " << DBL_MAX ;
 cout << " \n \nnegative double varia de : " << - DBL_MIN << " a " << + DBL_MAX <<endl;

 return 0;

 }