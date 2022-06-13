#include <iostream>
#include <cstring>
#include <cstdio>
#define MAX 10
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 using namespace std;

 int main() {
 char s1[MAX];
 int i,N=MAX;
 cout << "entre com uma string (max 10 caracteres): ";
 cin >> s1;
 cout << endl;
 //comando strlen mostra quantos caracteres tem a string
 cout << "tamanho da string = " << strlen(s1) << "bytes" << endl;
 cout << "bytes da string = " << sizeof(s1) << "bytes" << endl;

 printf("\n bytes da string = %lu\n",sizeof(s1));


 for (i=0;i<N+10;i++){
 // aqui eu mostro o que a posicao, endereco e o que armazena, e apos a posicao 10, comeca a mostrar o lixo que esta na memoria.
 /*depois que passamos do tamanho da string os 
 caracteres sao armazenados na sequencia do char e no lixo, ou seja, eles vao para o proximo endereco hexadeciamal*/
 //quando digitamos menos caracteres que o total tanto o codigo ascii quanto o que o char armazena estao em null
    printf("s1[%i] = %c, &s1[%i] = %p e *(&s[%i]) = %c\n",i,s1[i],i,&s1[i],i,*(&s1[i]));
 }

 for (i=0;i<N+10;i++){// aqui faz a mesma  coisa do de cima soq em vez do caractere ele mostra o ascii dele
    printf("s1[%i] = %i, &s1[%i] = %p e *(&s[%i]) = %i\n",i,s1[i],i,&s1[i],i,*(&s1[i]));
 }

 return 0;
 }