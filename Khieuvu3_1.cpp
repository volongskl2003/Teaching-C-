#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool dancing_check[1000000001];
ll dancing[100001];

int max_count(ll dancing [], int k, int a){    
    int count = 0;
    for (int i = 0; i < a; i++){
        if (dancing_check[dancing[i] + k] == true){
            count ++;
        }
    }
    return count;
}


int main(){
    int a, k;
    cin >> a >> k;
    for (int i = 0; i < a; i++){
        cin >> dancing[i];
        dancing_check[dancing[i]] = true;
    }
    cout << max_count(dancing, k, a);
    return 0;
}
    