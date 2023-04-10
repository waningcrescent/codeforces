#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int l = 0; l < t; l++){
        int a, b;
        cin >> a >> b;
        /*if((a == b || abs(b-a)==1) && (a%2!=0 || b%2!=0)){
            cout << 1 << endl;
            cout << a << " " << b << endl;
        
        }
        else if((a%2!=0 && b%2!=0) && a!=b){
            cout << 1 << endl;
            cout << a << " " << b << endl;
        }
        else{
            int c = a;
            int d = b;
            cout << 2 << endl;
            if(b%2==0){
                d = b-1;
            }
            else if(a%2==0){
                c = a-1;
            }
            if(c == d){
                c = 1;
            }
            cout << c << " " << d << endl;
            cout << a << " " << b << endl;*/
            
            cout << 2 << endl;
            cout << 1 << " " << b-1 << endl;
            cout << a << " " << b << endl;
    }  
        //}}
        return 0;
    }

