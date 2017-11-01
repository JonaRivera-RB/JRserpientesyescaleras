//
//  main.cpp
//  JRserpientesyescaleras
//
//  Created by misael rivera on 30/10/17.
//  Copyright © 2017 misael rivera. All rights reserved.

#include <iostream>
#include <stdlib.h>
#include <time.h>
void llenarVector(int vector[], int tamaño);
void mostrarVector(int vector[], int tamaño);
void llenarVector2(int vector[], int tamaño);
void jugar(int vector[], int t);
void player1(int p1);
void player2(int p2);
void ganador(int p1, int p2);
int dado();

using namespace std;
int main(int argc, const char * argv[]) {
    int vector[100]={0}, tamaño=100;
    cout << "Serpientes y escaleras!\n";
    srand(int(time(NULL)));
   // llenarVector(vector, tamaño);
    llenarVector2(vector, tamaño);
    //mostrarVector(vector, tamaño);
    jugar(vector, tamaño);

    return 0;
}
void jugar(int vector[], int t)
{
    int p1 = 0, p2=0;
    while(p1<t && p2<t)
    {
        p1 += dado();
        player1(p1);
        if (p1<t){
            p1 += vector[p1];
            cout<<"el jugador 1 esta en la posicion en:"<<p1<<"\n";
        }
        p2 += dado();
        player2(p2);
        if (p2<t) {
            p2 += vector[p2];
            cout<<"el jugador 2 esta en la posicion en:"<<p2<<"\n";
        }
    }
    
    if (p1>p2)
        cout<<"\t jugador 1 gana \n";
    else
        cout<<"\t jugador 2 gana \n";
}
int dado()
{
    int numeroAleatorio;
    return numeroAleatorio = 1+rand()%6;
}
void llenarVector(int vector[], int tamaño)
{
    for (int i=0; i<tamaño; i++)
        vector[i] = i+1;
}
void llenarVector2(int vector[], int tamaño)
{
    vector[3] = +8;
    vector[20]= +11;
    vector[40]= +9;
    vector[60]= +3;
    vector[37]= -10;
    vector[81]= -8;
    vector[63]= -2;
}
void player1(int p1)
{
    if (p1==3 || p1==20 || p1==40)
        cout<<"jugador uno cayo en una escalera!\n";
     
    else if(p1==37 || p1==81 || p1==63)
        cout<<"jugador uno cayo en una serpiente!\n";

}
void player2(int p2)
{
    if (p2==3 || p2==20 || p2==40)
        cout<<"jugador dos cayo en una escalera!\n";
    
    else if(p2==37 || p2==81 || p2==63)
        cout<<"jugador dos cayo en una serpiente!\n";
}
void mostrarVector(int vecto[],int tamaño)
{
    for (int i=0; i<tamaño; i++)
        cout<<vecto[i]<<" ";
}







