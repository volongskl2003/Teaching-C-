#include <bits/stdc++.h>

using namespace std;


void check_order(vector<int> a, vector <int> b){
    for (int i = 1; i < a.size(); i++){
        a[i] += a[i-1];
    }
    for (int i = 0; i < b.size(); i++){
        int begin = 0;
        int end = a.size() - 1;
        while (begin < end){
            int mid = (begin + end) /2;
            if (b[i] <= a[mid]){
                end = mid;
            }else{
                begin = mid + 1;
            }
        }
        if (a[begin] >= b[i]){
            cout << begin + 1 << " ";
        }else{
            cout << begin + 2 << " ";
        }
    }

}

int main(){
    int a, b;
    vector <int> vec_1, vec_2;
    int num;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> num;
        vec_1.push_back(num);
    }
    cin >> b;
    for (int i = 0; i < b; i++){
        cin >> num;
        vec_2.push_back(num);
    }
    check_order(vec_1, vec_2);
    return 0;
}