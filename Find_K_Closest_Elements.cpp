#include <bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector <int> result;
    int begin = 0;
    int end = arr.size()-1;
    while (begin < end){
        int mid = begin + (end - begin) / 2;
        int i = 1;
        while (arr[mid] == arr[mid + i]){
            i++;
        }
        if (abs(arr[mid] - x) > abs(arr[mid + i] - x)){
            begin = mid + 1;
            
        }else{
            end = mid;
        }
    }
    int i = begin - 1;
    int j = begin + 1;
    int count = 1;
    result.push_back(arr[begin]);
    while (count < k && (i >= 0 && j <= arr.size()-1)){
        if (abs(arr[i]- x) <= abs(arr[j] - x)){
            count ++;
            result.push_back(arr[i]);
            i--;
        }else{
            count ++;
            result.push_back(arr[j]);
            j++;
        }
    }
    while (count < k && i >= 0){
        count ++;
        result.push_back(arr[i]);
        i--;
    }
    while (count < k && j <= arr.size()-1){
        count ++;
        result.push_back(arr[j]);
        j++;
    }


    sort(result.begin(), result.end());
    return result;
}

int main(){
    vector <int> number = {1, 3};
    int k = 1;
    int x = 2;  
    vector <int> result = findClosestElements(number, k, x);
    for (int i = 0; i < result.size() ; i ++){
        cout << result[i] << " ";
    }
    return 0;
}