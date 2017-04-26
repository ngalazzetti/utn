/* 
 * File:   Multiplos.cpp
 * Author: Nicolás Galazzetti <UTN FRBA>
 *
 * Created on 26 de abril de 2017, 19:40
 */

#include <cstdlib>
#include<iostream>
#include<stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    system("cmd /c color f0");
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<endl;
    cout<<"Los multiplos de "<<num<<" son: ";
    for(int i=num;i<num+10;i++){
        if(i%num==0){
            cout<<i<<" - ";
        }
    }
    cout<<endl;
    system("cmd /c pause");
    return 0;
}

