//
//  main.cpp
//  JRserpientesyescaleras
//
//  Created by misael rivera on 30/10/17.
//  Copyright © 2017 misael rivera. All rights reserved.

#include <iostream>
#include <stdlib.h>
#include <time.h>
void llenarVector2(int vector[], int tamaño);
void jugar(int vector[], int t);
void ganador(int p1, int p2);
int dado();

using namespace std;
int main(int argc, const char * argv[]) {
    int vector[100]={0}, tamaño=100;
    cout << "Serpientes y escaleras!\n";
    srand(int(time(NULL)));
    llenarVector2(vector, tamaño);
    jugar(vector, tamaño);

    return 0;
}
void jugar(int vector[], int t)
{
    int p1 = 0, p2=0;
    while(p1<t && p2<t)
    {
        p1 += dado();

        if (p1<t){
            if (vector[p1]>0)
                cout<<p1<<"-el jugador uno cayo en una escalera\n";
            else if (vector[p1]<0)
                cout<<"el jugador uno cayo en una serpiente\n";
            p1 += vector[p1];
            cout<<"el jugador 1 esta en la posicion en:"<<p1<<"\n";
        }
        
        p2 += dado();
        if (p2<t) {
            if (vector[p2]>0)
                cout<<p2<<"-el jugador dos cayo en una escalera\n";
            else if (vector[p2]<0)
                cout<<"el jugador dos cayo en una serpiente\n";
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







