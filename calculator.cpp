#include <iostream>
#include<cmath>
using namespace std;

    int main(){
        char operação;
        double numero1, numero2;

        cout << "Digite o operador desejado: + para adicao \n - para subtracao \n * para multiplicacao \n / para divisao \n ^ para potenciacao \n r para raiz 'x': ";
        cin >> operação;

        cout << "Digite os dois numeros: ";
        cin >> numero1 >> numero2;

        switch(operação) {
            case '+':;
                cout << numero1 << " + " << numero2 << " = " << numero1 + numero2;
                break;

            case '-':
                cout << numero1 << " - " << numero2 << " = " << numero1 - numero2;
                break;

            case '*': 
                cout << numero1 << " * " << numero2 << " = " << numero1 * numero2;
                break;

            case '/':
                cout << numero1 << " / " << numero2 << " = " << numero1 / numero2;
                break;

            case '^':
                cout << numero1 << " ^ " << numero2 << " = " << pow(numero1, numero2);
                break;

            case 'r':
                cout << numero1 << " r " << numero2 << " = " << pow(numero1, 1/numero2);
                break;

            defaut:
                cout << "Erro, o operador selecionado é incorreto, reinicie a aplicação.";
        }
    return 0;
    }