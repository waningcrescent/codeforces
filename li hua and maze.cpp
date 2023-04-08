#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, m, path_len;
        cin >> n >> m;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 == 1 && y1 == 1) || (x2 == 1 && y2 == 1) ||
            (x1 == 1 && y1 == m) || (x2 == 1 && y2 == m) ||
            (x1 == n && y1 == m) || (x2 == n && y2 == m) ||
            (x1 == n && y1 == 1) || (x2 == n && y2 == 1)){
            path_len = 2;
        }
        else if((x1 == 1) || (x2 == 1) ||(y1 == 1) || (y2 == 1) ||
                (x1 == n) || (x2 == n) ||(y1 == m) || (y2 == m)){
            path_len = 3;
        }
        else{
            path_len = 4;
        }
        cout << min(path_len,min(n,m)) << endl;
    }
    return 0;
}
