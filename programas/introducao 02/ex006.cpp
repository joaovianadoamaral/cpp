 #include <iostream>
 #include <iomanip>
 #include <bitset>
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 using namespace std ;


 int main () {
    int M [2][2];
    int i ,j , aux ;

    for ( i =0; i <2; i ++)
        for ( j =0; j <2; j ++) {
            cout << " Entre com o valor para o elemento M[ " << i << " ][ " << j << " ]: ";
            cin >> aux ;
             M [ i ][ j] = aux ;
            cout << endl ;

        }
    for ( i =0; i <2; i ++)
        for ( j =0; j <2; j ++)
            cout << "M [" << i << " ][ " << j << " ]= " <<M [i ][ j] << endl ;

    cout << " ---------------- -- --- -- --- -- -- -- " << endl ;
    cout << " No formato matricial : " << endl ;

    for ( i =0; i <2; i ++) {
        for ( j =0; j <2; j ++)
            cout << M [i ][ j] << " " ;
        cout << endl ;
    }
 return (0) ;
}