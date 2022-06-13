 #include <iostream>
 #include <cstring>
 #define MAX 7
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 using namespace std;

 int main () {
 char s1[MAX];
 int i,N = MAX;
 //copia para uma string destino (string destino , string)
 strcpy(s1,"ABCD"); //teste com s1 = 'ABCD' ou s1 = "ABCD";
 //rodar strcpy(s1,'ABCD') da erro enquanto ,"ABCD" nao da erro
 //aqui da erro caso a string for maior que 7
 //s1={'ABCD'}; <- ISSO DA ERRO    
 cout << "String: " << s1 << endl;
 cout << "tamanho da string = " << strlen(s1) << endl;
 cout << "bytes da string = " << sizeof(s1) << endl;
 for (i=0;i<N+5;i++)
 /*com valores maiores que o da string comecamos a acessar o lixo de memoria*/
 cout << "s1[" << i << "]= " << s1[i] << endl;
 return(0);
 }