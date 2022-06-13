//use a classe string
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std;

void aloca(string *s,int n);


int main(){
    //criar um menu para os 10 exercicios
    int opc=1;
    //q1)
    string nome,endereco;
    //q2)
    bool cond;
    string aux,aux2;
    char *c;
    int n;
    string s[10];
    //q3)
    bool palindrono = true ,space[3]; 
    int posicaoReversa = 0; 
    int asc;
    //q7)
    int maior=0, ini=0; //variaveis da maior palavra
    int cont=0, temp_ini=0; //variaveis do temporario
    //q9)
    //q10)
    int seq[5];
    
    while(opc){
        //le a opcao do menu
        cout<<"digite qual questao dos exercicios 5: 1 a 10, digite 0 para sair. ";
        cin>>opc;
        cout<<endl;
        
        switch(opc){
            case 1:
                //Faca um programa C++ para ler e imprimir na tela o nome completo e endere ̧co do usu ́ario.

                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;
                
                setbuf(stdin,NULL);
                cout<<"digite seu nome: "<<endl;
                getline(cin,nome);

                cout<<"digite seu endereco completo: "<<endl;
                getline(cin,endereco);

                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                cout<<"seu nome: "<<nome<<endl;
                cout<<"seu endereço completo: "<<endereco<<endl;
                
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;
                
                continue;
            case 2: 
                /*fa ̧ca um programa C++ para ler N strings (N dado pelo usu ́ario) e
                mostr ́a-las na ordem alfab ́etica
                inversa (da “maior”para ”menor”)*/
                
                //usuario digita a quantidade de strings
                cout<<"digite a quandidade de strings"<<endl;
                cin>>n;

                //preencha as strings
                for(int i=0;i<n; i++){
                    cout<<"digite a string "<<i+1<<":"<<endl;
                    cin>>*(s+i);
                }
                //colocar as strings em ordem decrescente alfabetica 
                //seleciona o maior
                 aux=*s;//recebe a primeira
                for(int i=0; i <n; i++){
                    if(*(s+i)>aux)
                        aux=*(s+i);
                }
                cout<<"as strings em ordem alfabetica "<<endl;
                //agora que temos o maior  iremos fazer um loop que vai diminuir e printar a ordem 
                for (int j = 0; j < n; j++)                
                {
                    //©aso seje o maior printa ele 
                    for(int i = 0;i<n; i++){
                        if(*(s+i)==aux){
                                cout<<aux;
                        }
                    }
                    //escolho um novo inicializador que nao seje o maior
                    for (int i = 0; i < n; i++){
                        if(*(s+i)!=aux&&*(s+i)<aux){
                            aux2=*(s+i);
                        }    
                    }
                    //muda o aux para um que seja menor que o antigo maior e maior que todos os outros
                    for (int i = 0; i < n; i++){
                        if(aux2<*(s+i)&&aux2!=aux)
                            aux2=*(s+i);
                    }
                    //mudado o auxiliar passamos para o aux principal
                    aux=aux2;

                }
                
                continue;
            case 3:
                //3. Fa ̧ca um programa C++ ler uma string e mostr ́a-la invertida.
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                cout<<"digite a string a ser invertida: "<<endl;

                setbuf(stdin,NULL);
                getline(cin,aux);

                //comprimento da stringa para comecar a printar do final ao inicio
                n=aux.size();

                //passa a string para um char
                c=&aux[0];

                //mostra de tras para a frente
                for(int i=n-1;i>=0;i--)
                    cout<<*(c+i);
                cout<<endl;

                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                continue;
            case 4:
                /*4. Fa ̧ca um programa C++ para ler uma string e verificar se ela  ́e pal ́ındromo.*/
                 for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                
                cout << "Digite a string para ver se ela é um palíndromo : ";
                setbuf(stdin,NULL);
                getline(cin,aux);
                
                for (int i = aux.length() - 1; i > 0; i--) {
                    posicaoReversa = aux.length() - i - 1; 
                    if (aux.substr(i, 1) != aux.substr(posicaoReversa, 1)) {
                        palindrono = false;
                        break;
                    }
                }
                //terminou todo o processamento necessário, chegará aqui em duas situações:
                //1. ocorreu o break saindo do for e mandando para cá (não é palindromo)
                //2. terminou o loop do for e não tem mais o que repetir (é palindromo)
                cout << endl << (palindrono ? "É um palindromo" : "Não é palindromo")<<endl;
                
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;
                
                continue;
            case 5:
                /*Fa ̧ca um programa C ++ para alterar todas as letras em uma determinada string com a letra
                seguinte no alfabeto (ou seja, a torna-se b, p torna-se q, z torna-se a).*/
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                cout<<"digite a string :"<<endl;
                setbuf(stdin,NULL);
                getline(cin,aux);
                
                n=aux.size();
                //passo para um ponteiro
                c=&aux[0];
                //percorro a string mudando a->b  p->q e z -> a, apenas o z que volta no codigo asci e por isso vou fazer um if para o z maiusculo 90, e o z minusculo 122
                for (int i = 0; i <n;i++){
                    asc=*(c+i);
                    if(asc==90){
                        asc=65;//recebe o A
                        *(c+i)=asc;//armazena o A
                    }
                    if(asc==122){
                        asc=96;//recebe o a
                        *(c+i)=asc;//armazena o a
                    }
                    if(asc!=90&&asc!=122&&asc!=32){
                        asc++;
                        *(c+i)=asc;//armazena o proximo
                    }
                    //o espaco tambem seria alterado entao vamos excluir ele dos ifs

                }
                //mostra a nova string
                cout<<"a nova string :"<<endl<<aux<<endl;
                
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;
            
                continue;
            case 6:
                /*6. Fa ̧ca um programa C ++ para colocar em mai ́uscula a primeira letra de cada palavra de uma
                determinada string. As palavras devem ser separadas por apenas um espa ̧co.*/
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                cout<<"digite a string :"<<endl;
                setbuf(stdin,NULL);
                getline(cin,aux);

                c=&aux[0];
                
                //inicializa com uma maiuscula
                asc=*c-96;//observa a diferenca para o a em numero
                asc+=64;//reflete a diferenca em maiusculo
                *(c)=asc;


                n=aux.size();
                space[2]=false;
                for(int i = 0; i <n; i++){
                    //se detectar espaco armazena a variavel boolean verdadeiro, caso nao
                    if(space[2]==true){
                            asc=*(c+i)-96;//observa a diferenca para o a em numero
                            asc+=64;//reflete a diferenca em maiusculo
                            *(c+i)=asc;
                        }

                    if(*(c+i)==32){
                        if(space[0]==true)//siginifica que encontrou mais de um espaco
                            space[1]=true;
                        space[0]=true;                        
                    }else space[0]=false;
                    //faremos um xor de space[0] e space[1], e armazenaremos em space[2] caso true proxima letra maiuscula, caso falso proxima letra igual ao que foi digitado
                        space[2]=space[0]^space[1];
                }
                cout<<"a string mudada : "<<aux<<endl;

                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;
                continue;
            case 7:
                for (int i = 0; i <10; i++)
                    cout<<"-";
                cout<<endl;

                cout<<"digite a string :"<<endl;
                setbuf(stdin,NULL);
                getline(cin,aux);

                c=&aux[0];
                n=aux.size();

                for (int i = 0; i <=n; i++){
                    //se a frase terminou ou a palavra terminou
                    if(i==n || *(c+i) == ' '){
                        if(maior<cont){
                            maior=cont;
                            ini=temp_ini;
                        }
                        cont=0;
                        temp_ini=i+1;
                    }
                    else{
                        cont++;
                            }
                }

            cout<<endl<<"Maior palavra: "<<endl;
            for (int i = ini; i <ini+maior; i++)
                cout<<*(c+i);
            cout<<endl;

            continue;
            case 8:
                cout<<"mesmo enunciado da 7"<<endl;
                continue;
            case 9:
                cout<<"nosso grupo achou muito complexo"<<endl;
            case 10:
                cout << "Digite uma sequencia de numeros:";
    
                for (int i = 0; i < 5; i++){
                    cin >> seq[i];
                }
                
                cout << "Com hifen:" << endl;
                for (int i = 0; i < 5; i++){
                    if (seq[i] % 2 == 1 && seq[i + 1] % 2 == 1){
                        cout << seq[i] << "-";
                    }
                    else{
                        cout << seq[i];
                    }
                }
                 continue;
            case 0: 
                cout<<"saindo..."<<endl;
                break;
            default:
                cout<<"opcao invalida, digite outra."<<endl;
                continue;

                
        }

    }
    return 0;
}

