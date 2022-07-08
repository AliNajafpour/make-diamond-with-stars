/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    int n , l = 1 ,d = 1,e,f,g,h;
    char s1 = '*' , s2 = '#';
    cin>>n;
    h = n;
    while (h!=0){

        f = d;
        if (l < (n+1) /2){
            e = (n-d)/2;
            g = (n-d)/2;
            while( e != 0){
                cout<<s2;
                e--;
            }
            while(f != 0){
                cout<<s1;
                f--;
            }
            while( g != 0){
                cout<<s2;
                g--;
            }
            d += 2;
        }
        
        if (l >= (n+1)/2){
            e = (n-d)/2;
            g = (n-d)/2;
                        while( e != 0){
                cout<<s2;
                e--;
            }
            while(f != 0){
                cout<<s1;
                f--;
            }
            while( g != 0){
                cout<<s2;
                g--;
            }
            d -= 2;
            
        }
        

        cout<<'\n';
        l++;
        h--;
    }
    
    
    
}
