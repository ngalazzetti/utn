/* 
 * File:   Aprobado.cpp
 * Author: Nicolás Galazzetti <UTN FRBA>
 *
 * Created on 26 de abril de 2017, 18:43
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    system("cmd /c color f0");
    string nom;
    int p1,r1,p2,r2,tp,ok;
    int nf1,nf2;
    cout<<"ingrese el nombre del estudiante: ";cin>>nom;cout<<endl;
    cout<<"Nota primer parcial: ";cin>>p1;cout<<endl;
    if(p1<8){
    cout<<"¿Tuvo recuperatorio? (1=si 0=no): ";cin>>ok;cout<<endl;
    if(ok==1){
        cout<<"Nota de recuperatorio: ";cin>>r1;cout<<endl;
        nf1=r1;
    }else{
        nf1=p1;
    }
    }else if(p1>=8){
        nf1=p1;
    }
    cout<<"Nota segundo parcial: ";cin>>p2;cout<<endl;
    if(p2<8){
    cout<<"¿Tuvo recuperatorio? (1=si 0=no): ";cin>>ok;cout<<endl;
    if(ok==1){
        cout<<"Nota de recuperatorio: ";cin>>r2;cout<<endl;
        nf2=r2;
    }else{
        nf2=p2;
    }
    }else if(p2>=8){
        nf2=p2;
    }
    cout<<"Aprobo tp con discreta: (1=si 0=no): ";cin>>tp;cout<<endl;
    
    
    if(nf2>=8 && nf1>=8 && tp==1){
        system("cmd /c cls");
        cout<<"El alumno "<<nom;
        cout<<" promociono!! ";
        cout<<"Felicitaciónes."<<endl;
    }else{
        cout<<"El alumno "<<nom;
        cout<<" no promociono. ";
        cout<<"Suerte la proxima!"<<endl;
    }
        
    system("cmd /c pause");
    return 0;
}

