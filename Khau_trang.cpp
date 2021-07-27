#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


void khau_trang(int array[], int n, int num){
    
    int begin = 0;
    int end = n-1;
    while (begin < end){
        int mid = (begin + end) / 2;
        if (num <= array[mid]){
            end = mid;
        }else{
            begin = mid +1; 
        }
    }
    if (num > array[begin]){
        cout << begin + 1 << endl;
    }else{
        cout << begin << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int array [100001];
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    sort(array, array + n);
    int q;
    int num;
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> num;
        khau_trang(array, n,  num);
    }
    return 0;
}