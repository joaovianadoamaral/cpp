//vamos ler tres numeos e mostrar a adicao e a multiplicacao entre eles
#include <iostream>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
using namespace std;

int main(){
    float x,y,z;
    float soma,mult;
    
    cout<< "digite tres numeros "<< endl;
    cin>> x >>y >> z;

    soma=x+y+z;
    mult=x*y*z;
    
    cout << "a soma entre eles é : "<<x+y+z<<endl;
    cout << "a multiplicacao entre eles é : "<<x*y*z<<endl;
    
    // vamos notar que podemos tanto colocar uma variavel
    //ou a propia operação aritimetica ali, apenas testando.
    
}