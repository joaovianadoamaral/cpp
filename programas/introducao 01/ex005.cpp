//exercicio básico 2
//ler dois primeiros nomes e concatenalos na tela.
#include <iostream>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std;

int main(){
    //declarei duas variaveis strings
    string n1,n2;
    //pedi para o usuario digitar dois nomes e armazenei
    cout << "digite o seu primeiro nome: " <<endl;
    cin >> n1;
    cout << "digite o seu segundo nome" <<endl;
    cin >> n2;
    //mostrei os nomes concatenados 
    //cout<< n1 << n2; dessa forma nao tem espaco entre eles
    //por isso vou usar 
    cout<<"bem vindo :"<< n1<<" " << n2<<endl;
    //detalhe que desse jeito se comporta como um scanf
    // ou seja, nao permite um nome composto, quando damos espaço ele armazena
    


}
