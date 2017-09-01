#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;




int main()
{
    int cantidadnumeros;
    int i,j;
    long int numero;
    long int sumadivisores=0;
    cout<<"Ingrese la cantidad de numeros a leer: ";
    cin>>cantidadnumeros;

    for (j=0;j<cantidadnumeros;j++){
        cout<<"\nIngrese el numero "<<j+1<<": ";
        cin>>numero;
        cout<<"\nSus divisores propios son: ";
        for (i=1;i<=(numero/2);i++){
                if (numero%i==0){
                    cout<<i<<",";
                    sumadivisores=sumadivisores+i;
                }
                if (i==(numero/2)){
                    if (sumadivisores==numero){
                        cout<<"\nEl numero es Perfecto.";
                    }
                    if (sumadivisores<numero){
                        cout<<"\nEl numero es Deficiente.";
                    }
                    if (sumadivisores>numero){
                        cout<<"\nEl numero es Abundante.";
                    }
                    sumadivisores=0;
                }
        }
    }

    return 0;
}
