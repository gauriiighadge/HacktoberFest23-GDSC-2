#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "aman";
    string P = s;
 
    reverse(P.begin(), P.end());
    if (s == P) {
       cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}
