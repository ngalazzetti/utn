/* 
 * File:   Alfabeto.cpp
 * Author: Nicolás Galazzetti <UTN FRBA>
 *
 * Created on 26 de abril de 2017, 20:21
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    cout<<"ingrese el numero a buscar (0<numero<28): ";
    cin>>x;
    if(x<28 && x>1){
   switch (x)  {
   case 1 : cout<<"A";break; 
   case 2 : cout<<"B";  break;
   case 3 : cout<<"C";  break;   case 4 : cout<<"D";  break;
   case 5 : cout<<"E";  break;   case 6 : cout<<"F";  break;
   case 7 : cout<<"G";  break;   case 8 : cout<<"H";  break;
   case 9 : cout<<"I";  break;   case 10: cout<<"J";  break;
   case 11: cout<<"K";  break;   case 12: cout<<"L";  break;
   case 13: cout<<"M";  break;   case 14: cout<<"N";  break;
   case 15: cout<<"Ñ";  break;   case 16: cout<<"O";  break;
   case 17: cout<<"P";  break;   case 18: cout<<"Q";  break;
   case 19: cout<<"R";  break;   case 20: cout<<"S";  break;
   case 21: cout<<"T";  break;   case 22: cout<<"U";  break;
   case 23: cout<<"V";  break;   case 24: cout<<"W";  break;
   case 25: cout<<"X";  break;   case 26: cout<<"Y";  break;
   case 27: cout<<"Z";  break;
   }
   
    }
    else{
        cout<<"El valor ingresado no es correcto."<<endl;
        
    }
    
    cout<<endl;
    system("cmd /c PAUSE");
    
    return 0;
}

