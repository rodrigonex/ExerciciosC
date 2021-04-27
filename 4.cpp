#include<iostream>
#include<locale.h>

using namespace std;

/* 4 - Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no v�deo o correspondente em graus Celsius usando as f�rmulas que
seguem..
*/

int main (){

    setlocale(LC_ALL, "Portuguese");     
    
    cout<<"\t\tExercicio 4";
    /* A) Usar uma vari�vel double para ler o valor em Fahrenheit e a f�rmula
         C=(f-32.0) * (5.0/9.0).
    */
    
    double fahr;
    cout<<"\nCom double";
    cout<<"\n\nInforme um valor em graus Fahrenheit: ";
    cin>>fahr;
    
    cout<<"\nO valor "<<fahr<<" graus Fahrenheit em Celsius � "<<((fahr-32.0) * (5.0/9.0))<<"\n";
    
    /* b) Usar uma vari�vel int para ler o valor em Fahrenheit e a f�rmula
       C=(f-32)*(5/9).
    */
    
    int fahr2;
    cout<<"\nCom int";
    cout<<"\n\nInforme um valor em graus Fahrenheit: ";
    cin>>fahr2;
    
    cout<<"\nO valor "<<fahr2<<" graus Fahrenheit em Celsius � "<<((fahr2-32)*5/9)<<"\n";
    
    system("pause"); 
    return 0;
}
