 #include <iostream>
 #include <iomanip>
 using namespace std ;
 //joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 int main () {

 bool b1 = true;
 cout << b1 << endl ;

 char c1 = 'a';
 //mostra a variavel char 'a'
 cout << c1 << endl ;
 //mostra o char em ascii
 cout << (int) c1 << endl ;


 int x = 10;
 //mostra x
 cout << x << endl ;
 //mostra x na forma de exadecimal
 cout << hex << x << endl ;
 //uppercase mostra o caractere maiusculo
 cout << hex << uppercase << x << endl ;

 // float e precisao

 float f1 = 1.1;
 cout << "f1 = " << f1 << endl ;

 if (f1==1.1)
 cout << f1 << " igual 1.1 " << endl ;
 else
 cout << f1 << "  ́e diferente de 1.1 " << endl ;

 cout << "f1 = " << setprecision (10) << f1 << endl ;

 cout << "f1 = " << setprecision (6) << f1 << endl ;

 float precisao = 1e-7;

 if (f1 -1.1 <= precisao )
 cout << f1 << " igual 1.1 " << endl ;
 else
 cout << f1 << "  ́e diferente de 1.1 " << endl ;

 return 0;

}