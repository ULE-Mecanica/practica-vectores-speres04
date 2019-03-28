#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
int main()
{
    srand(time(NULL));

    int matriz [5][5];

    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 5; columna++)
        {
            matriz[fila][columna] = rand() % (13)+3;

            cout << matriz[fila][columna] << " ";
        }

        cout<<endl;
    }

 
   return 0;
}
