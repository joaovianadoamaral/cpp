#include <string>
#include <iostream>
#include <cstring>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std;
 int main() {
 string small,large;
 char aux;
 int equalOrNot;
 //string str3,str4; //experimente declarar como array de char
 char str3[30],str4[30];
 small = "String 1";
 large = "String maior e com mais caracteres para exemplo de uma string mais longa...";

 cout << "A string curta possui " << small.length() << " caracteres." << endl;
 cout << "A string longa possui " << large.length() <<" caracteres." << endl;

 // obtendo caracteres das strings
 aux = small[0];
 cout << "primeiro caractere da string \""<< small << "\"" << "  ́e o caractere " <<
"\"" << aux << "\"" << endl;
 //comparando duas strigns
 //const char* str1 = "Abcde";
 //const char* str2 = "Abcdf" ;
 char str1[] = "Abcde";
 char str2[] = "Abcdf" ;

 //equalOrNot = strcmp(str1,str2); //biblioteca <cstring>
 equalOrNot = small.compare(large); //biblioteca <cstring>
 if(equalOrNot == 0){
 cout << str1 << " e " << str2 << " sao iguais"   << endl;
 }else{
 cout << str1 << " e " << str2 << " sao diferentes"   << endl;
 }
 //usando o metodo compare()
 equalOrNot = small.compare(large);
 if(equalOrNot == 0) cout << small << " e " << large << " sao iguais "   << endl;
 else cout << small << " e " << large << " sao diferentes "   << endl;
 cout << "entre com uma string: ";
 cin >> str3;
 cout << "entre com uma string: ";
 cin >> str4;

 //equalOrNot = strcmp(str3,str4); //biblioteca <cstring>
 cout << "strcmp(str3,str4) = " << equalOrNot << endl;
 //usando o metodo compare()
 equalOrNot = strcmp(str3,str4);
 if(equalOrNot == 0) cout << str3 << " e " << str4 << " sao iguais "   << endl;
    else cout << str3 << " e " << str4 << " s ̃ao diferentes " << endl;

 return 0;
 }