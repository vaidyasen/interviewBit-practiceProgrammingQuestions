#include<bits/stdc++.h>
// #include<vector>
using namespace std;

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int n  = A.size() , m = A[0].size();
    int t = 0, b = n -1, l = 0, r = m -1 ;
    int dir = 0;
    vector<int> arr;
    int i;
    if ( b == 0 && r ==0 ) {
        arr[x] = A[b][r];
        return arr;
    }
    
    while(t<= b && l <= r){
        if (dir == 0) {
            for (i  = l ; i<= r;i++) {
                arr.push_back(A[t][i]);
                // x++;
            }
            dir = 1;
                t ++; 
        }
        else if (dir == 1) {
            for (i  = t ; i<= b;i++) {
                arr.push_back(A[i][r]);
                // x++;
            }
            dir = 2;
                r -- ;
        }
        else if (dir == 2) {
            for (i  = r ; i>= l;i--) {
                arr.push_back(A[b][i]);
                // x++;
            }
            dir = 3;
                b --; 
        }
        else if (dir == 3) {
            for (i  = b ; i>= t;i--) {
                arr.push_back(A[i][l]);
                // x++;
            }
            dir = 0;
               l++;
        }
    }
    return arr;
}

int main() 
{
      vector<vector<int> > a
     {
        {1, 2, 3 , 4},
        {4, 5, 6 , 5},
        {7, 8, 9 , 3}
    };
    vector<int> ab;
    ab =  spiralOrder(a);
    for(int i = 0; i<ab.size() ; i++ ) cout << ab[i] <<" " ;
    return 0;
}
