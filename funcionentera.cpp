/* 
 * File:   funcionentera.cpp
 * Author: nicogala
 *
 * Created on 26 de abril de 2017, 17:59
 */

#include <cstdlib>
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    system("cmd /c color 16");
    int n;
    int n2;
    cout<<"ingrese un numero real: ";
    cin>>n;
    cout<<endl;
    if(n>0)n=n/1;   
    if(n<0)n=(n/1)-1;
    cout<<"El valor en función entera es:"<<n;cout<<endl;
    system("cmd /c pause");
    return 0;
}

