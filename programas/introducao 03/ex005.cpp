//Fa ̧ca um programa C++ para ler 3 strings e mostr ́a-las em ordem alfab ́etica. Use a classe string.
#include <iostream>
#include <string>
using namespace std;
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
int main (){
    //declarar tres strings da clsse string
    string s,s1,s2,tmp;
    //ler as tres strings
    cout<<"digite a string 1:"<<endl;
    getline(cin,s);
    
    cout<<"digite a string 2:"<<endl;
    getline(cin,s1);
    
    cout<<"digite a string 3:"<<endl;
    getline(cin,s);

    //compara tamanho
    if (s > s2) {
       tmp = s2;
        s2 = s;
        s = tmp;
    }
    if (s > s1) {
        tmp = s1;
        s1 = s;
        s = tmp;
    }
    if (s1 > s2) {
        tmp = s2;
        s2 = s1;
        s1 = tmp;
    }
    //mostra as strings
     cout<<"as strings na ordem alfabetica"<<endl;
     cout<<s<<endl  <<s1<<endl<<s2<<endl;
    return (0);
}