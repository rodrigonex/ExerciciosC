#include<iostream>
#include<locale.h>
#include<conio.h>

using namespace std;

// 2 - Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

int main (){

    setlocale(LC_ALL, "Portuguese");     
    
    //variaveis
    int total;
    
    cout<<"\t\tExercicio 1\n\n";
    
    for (int i = 1; i <= 9; i++) {
        for ( int n = 1; n <= 9; n++){
            cout<<"\n"<<i<<" * "<<n<<" = "<<(i * n);
        }
        cout<<"\n----------\n";   
    } 
  
    system("pause"); 
    return 0;
}
