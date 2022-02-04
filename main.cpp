#include <iostream>
#include <math.h>

using namespace std;

int calls = 0, fib = 0; //fib são o número de áreas, calls é a soma final

int * contador(int numero){
    calls = calls + 2;
    if (numero - 1 == 1){
        fib++;
    }else{
        if (numero - 2 == 1){
            fib++;
        }
    }
    if (numero - 1 > 1){
        contador(numero - 1);
    }
    if (numero - 2 > 1){
        contador(numero - 2);
    }
}

int main()
{
    int cont = 0, casos; // cont é usado para contar os casos verificados em "casos" -
    cin >> casos;
    while (cont < casos){
        int numero; // numero é o posição a ser verificada
        cin >> numero;
        if (numero == 1){
            cout << "fib(1) = 0 calls = 1" <<endl;
        }else{
            fib = 0;
            calls = 0;
            contador(numero);
            cout << "fib(" << numero << ") = " << calls << " calls = " << fib <<endl;
        }
        cont++;
    }
    return 0;
}
