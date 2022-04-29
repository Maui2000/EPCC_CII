#include <iostream>
#include <conio.h>
using namespace std;

/*
//TABLA DE MULTIPLICACION
int main()
{
    cout << "TABLA DE MULTIPLICACION DE 1 A 10" << endl;
    cout << "-------------------------------------------" << endl;
    int a,b;
    for(a=1;a<=10;a++){
        for(b=1;b<=10;b++){
            cout<<a*b<<"\t";
        }
        cout<<endl;
    }
    getch();
    return 0;
}
*/
//Your job is to write a program that reads
//integers from the standard input, sorts them into ascending order, and
//then prints the sorted numbers, one per line.
int main(){
    int vector[50];
    int x,i,j,aux;

    cout<<"Cantidad de numeros a ingresar: ";
    cin>>x;

    for(i=0;i<x;i++){
        cout<<"Numero "<<(i+1)<<": ";
        cin>>vector[i];
    }

    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(vector[i]>vector[j]){
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }

    cout<<"Numeros ordenados de menor a mayor: ";

    for(i=0;i<x;i++){
        cout<<vector[i]<<";";
    }
}
