#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int l = 0; l < t; l++){
        int n, k;
        cin >> n >> k;
        int mat[n][n] ;
        for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
            cin >>  mat[i][j];
        }  
        }
        for(int i = 0; i < n/2; i++){
          for(int j = 0; j < n; j++){
            if(mat[i][j] !=  mat[n-i-1][n-j-1]){
            k = k-1;}
        }  
        }
        if(k>=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}


