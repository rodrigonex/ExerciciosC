#include<iostream>
#include<locale.h>

using namespace std;

/*1 - Fazer um programa em C++ que pergunta um valor em metros e imprime o
correspondente em dec�metros, cent�metros e mil�metros.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");     
    
    //variaveis
    float metros;
    
    cout<<"\t\tExercicio 1";
    
    //Entrada
    cout<<"\n\nInforme um valor em metros: ";
    cin>>metros;
    
    cout<<"\n\nO valor de metros "<<metros<<" em decimetro � "<< (metros * 10)<<" dm";
    cout<<"\n\nO valor de metros "<<metros<<" em centimetros � "<< (metros * 100)<<" cm";
    cout<<"\n\nO valor de metros "<<metros<<" em centimetros � "<< (metros * 1000)<<" mm\n\n";
    
    system("pause"); 
    return 0;
}
