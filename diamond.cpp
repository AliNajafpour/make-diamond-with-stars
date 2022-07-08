#include <iostream>
//https://www.onlinegdb.com/
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
