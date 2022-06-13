//Fa ̧ca um programa C++ para ler 3 strings e mostr ́a-las em ordem alfab ́etica. Use a blibioteca cstring
#include <iostream>
#include <cstring>
#define tam 30
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std;
int main (){
    //declarar tres strings da clsse string
    char s[tam],s1[tam],s2[tam],tmp[tam];
    //string s,s1,s2,tmp;
    //ler as tres strings
    cout<<"digite a string 1:"<<endl;
    cin>>s;
    
    cout<<"digite a string 2:"<<endl;
    cin>>s1;

    cout<<"digite a string 3:"<<endl;
    cin>>s2;
    //compara tamanho
    if (strcmp(s,s2)==1) {
       //tmp = s2;
        strcpy(tmp,s2);
        //s2 = s;
        strcpy(s2,s);
        //s = tmp;
        strcpy(s,tmp);
    }
    if (strcmp(s,s1)==1) { 
        //tmp = s1;
        strcpy(tmp,s1);
        //s1 = s;
        strcpy(s1,s);
        //s = tmp;
        strcpy(s,tmp);
    }
    if (strcmp(s1,s2)==1) {
        
        //tmp = s2;
        strcpy(tmp,s2);
        //s2 = s1;
        strcpy(s2,s1);
        //s1 = tmp;
        strcpy(s1,tmp);
    }
    //mostra as strings
     cout<<"as strings na ordem alfabetica"<<endl;
     cout<<s<<endl  <<s1<<endl<<s2<<endl;
    return (0);
}