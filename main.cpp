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
int player1(int p1);
int player2(int p2);
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
        if(player1(p1)==-1)
            cout<<"jugador 1 cayo en una escalera\n";
        else if(player1(p1)==-2)
            cout<<"jugador 1 cayo en una serpiente\n";

        if (p1<t){
            p1 += vector[p1];
            cout<<"el jugador 1 esta en la posicion en:"<<p1<<"\n";
        }
        
        p2 += dado();
        if(player2(p2)==-1)
            cout<<"jugador 2 cayo en una escalera\n";
        else if(player2(p2)==-2)
            cout<<"jugador 2 cayo en una serpiente\n";
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
    vector[7]= +11;
    vector[10]= +9;
    vector[20]= +3;
    vector[37]= +10;
    vector[51]= +8;
    vector[63]= +2;
    vector[87] = +8;
    vector[34]= +11;
    vector[40]= +9;
    
    vector[60]= -3;
    vector[43]= -10;
    vector[98]= -8;
    vector[69]= -2;
    vector[35] = -8;
    vector[43]= -11;
    vector[49]= -9;
    vector[9]= -3;
    vector[32]= -10;
    vector[84]= -8;
}
int player1(int p1)
{
    int escaleras[10]={3,7,10,20,37,51,63,87,34,40};
    int ser[10]={60,43,98,69,35,43,49,9,32,84};
    for (int i=0; i<10; i++)
        if (p1==escaleras[i])
            return -1;
    
    for (int j=0; j<10; j++)
        if (p1==ser[j])
            return -2;
    
    return 0;
}
int player2(int p2)
{
    int escaleras[10]={3,7,10,20,37,51,63,87,34,40};
    int ser[10]={60,43,98,69,35,43,49,9,32,84};
    for (int i=0; i<10; i++)
        if (p2==escaleras[i])
            return -1;
    
    for (int j=0; j<10; j++)
        if (p2==ser[j])
            return -2;
    
    return 0;
}
void mostrarVector(int vecto[],int tamaño)
{
    for (int i=0; i<tamaño; i++)
        cout<<vecto[i]<<" ";
}







