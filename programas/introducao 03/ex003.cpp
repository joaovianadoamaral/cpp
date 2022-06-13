#include <iostream>
#include <cstring>
 using namespace std;
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 //comprimentos maximos
 #define MAX_NAME_LENGTH 50
 #define MAX_ADDRESS_LENGTH 100
 #define MAX_ABOUT_LENGTH 200

 using namespace std;

 int main()
 {
 char delimitador=39;
 char name[MAX_NAME_LENGTH],address[MAX_ADDRESS_LENGTH],about[MAX_ABOUT_LENGTH];

 cout << "Entre seu nome: ";
 cin.getline(name,MAX_NAME_LENGTH); //comente esssa linha
 //cin >> name; // tire o coment ́ario dessa linha

 cout << "Entre seu Endereco: ";
 cin.getline(address,MAX_ADDRESS_LENGTH);

 cout << "Fale sobre voce (pressione "<<delimitador<< " para finalizar): ";
 cin.getline(about,MAX_ABOUT_LENGTH,delimitador); //aspas simples  é o delimitador
 /*usei o codigo ascci dela pois nao tinha ideia de
  outro jeito, tava dando erro como se  tivesse uma aspas semm completar usando ''', descobri, eu posso
 usar a barra invertida para acessar o caractere*/
 
 cout << "\nESeus dados:";
 cout << "Nome: " << name << endl;
 cout << "Endereco: " << address << endl;
 cout << "Sobre Voce: " << about << endl;

 return 0;
 }