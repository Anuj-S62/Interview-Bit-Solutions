
#include <bits/stdc++.h>
 
using namespace std;

int isprime(int a){
    int x=sqrt(a);
    for(int i=2;i<x+1;i++){
        if(a%i==0){
        return -1;
        }
    }
    return a;
}
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n;
     cin>>n;
     int x=3,y=5;
    int temp1;
    int temp2;
     for(int i=5;i<=n-2;i++){
         temp1=isprime(i);
         temp2=isprime(i+2);
         if((temp1!=-1 && temp2!=-1) && ((temp2-temp1)==2)){
             x=temp1;
             y=temp2;
         }
         
     }
     
     cout<<x<<" "<<y<<endl;
     
 
    return 0;
}