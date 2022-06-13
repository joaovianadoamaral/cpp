 #include <iostream>
 #include <iomanip>
 #include <bitset>
 #include <cstdio>
 #define MAX1 7
 #define MAX2 8
 #define MAX3 9
//joao vitor viana 204b
//nicolas 204
//Alexsandro de Matos - 204A
//Julia Cesário Camelo - 204A
 using namespace std ;

 int main () {
 float tamanho_myVector , tamanho_myMatrix , tamanho_s3 , tamanho_s4 , tamanho_s5 ;
 float tamanho_s2 ; int i , j ;
 int myVector [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 int myMatrix [][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9} };
 int M [2][2] = {{1 ,2} ,{3 ,4}};

 char s2 [ MAX1 ] = {"world!"};
 char s3 [ MAX2 ] = "Coltec" ;
 char s4 [] = "123456" ;
 char s5 [ MAX3 ] = "123456" ;
 // experimente trocar os valores MAX1 , MAX2 e MAX3 acima

 tamanho_myVector = ( float ) sizeof ( myVector ) / sizeof ( int );
 tamanho_myMatrix = ( float ) sizeof ( myMatrix ) / sizeof ( int );
 tamanho_s2 =( float ) sizeof ( s2 ) / sizeof ( char );
 tamanho_s3 =( float ) sizeof ( s3 ) / sizeof ( char );
 tamanho_s4 =( float ) sizeof ( s4 ) / sizeof ( char );
 tamanho_s5 =( float ) sizeof ( s5 ) / sizeof ( char );

 cout << " myVector tem dimensao " << tamanho_myVector << endl ;
 cout << " myMatrix tem dimensao " << tamanho_myMatrix << endl ;
 cout << " s2 tem dimensao " << tamanho_s2 << endl ;
 cout << " s3 tem dimensao " << tamanho_s3 << endl ;
 cout << " s4 tem dimensao " << tamanho_s4 << endl ;
 cout << " s5 tem dimensao " << tamanho_s5 << endl ;

 for ( i =0; i < tamanho_myVector ;i ++)
    cout << " vetor [" << i << " ] =" << myVector [ i]<< endl ;
 for ( i =0; i < tamanho_s2 ; i ++)
    cout << " s2 [ " << i << " ]= " << s2 [ i] << endl ;
 for ( i =0; i < tamanho_s3 ; i ++)
    cout << " s3 [ " << i << " ] = " << s3 [i ]<< endl ;
 for ( i =0; i < tamanho_s4 ; i ++)
    cout << " s4 [" << i << " ]= " << s4 [i ]<< endl ;
 for ( i =0; i < tamanho_s5 ; i ++)
    cout << " s5 [" << i << " ]= " << s5 [i ]<< endl ;
 for ( i =0; i <2; i ++)
    for ( j =0; j <2; j ++)
        cout << " M [" << i << " ][ " << j << "] = " << j << M [i ][ j ]<< endl ;
return (0) ;
}