#include <iostream>
#define Unknown 1001
using namespace std;
 
int main() {
    int n, m,uf = 0,maxi;
    //input
    cin >> n >> m;
    int ** x = new int * [n];
    for (int i = 0; i < n; i++)
        x[i] = new int[m];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> x[i][j];
    //workspace
    int  max[m];
    for (int i = 0; i < m; i++){
        max[i] = Unknown;   
    }
    for (int i = 0; i < n; i++) {
        int min = x[i][0];
        for (int j = 1; j < m; j++) {
            if ( min > x[i][j] ) {
                min = x[i][j];
            }
        }
        for (int j = 0; j < m; j++) {
            if (x[i][j] == min) {
                if (max[j] != Unknown){
                    maxi = max[j];  
                }
                else {
                    maxi = x[i][j];
                    for (int l = 0; l < n; l++) {
                        if (maxi < x[l][j]){
                            maxi = x[l][j];
                        }
                    }
                    max[j] = maxi;
                }
                if ( maxi == min) {
                    uf++;
                }
            }
        }
    }
    //output
    cout << uf;
    return 0;
}