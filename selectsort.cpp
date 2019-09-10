#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

void selectsort(int n, vector<int>* vec, long long min){
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if ((*vec)[min] > (*vec)[j]) min = j;
        }
        if ((*vec)[min] == (*vec)[i]) continue;
        swap((*vec)[i], (*vec)[min]);
    }
    for(int i = 0; i < n; i++){
        //cout << (*vec)[i] << " ";
    }
    cout << '\n';
}

int main(){
    long long min = 0;
    int n = 6000;
    //cin >> n;
    vector<int>vec(n);
    for(int i = 0; i < n; i++){
        //cin >> vec[i];
        vec[i] = rand();
    }
    for(int i = 0; i < n; i++){
        //cout << vec[i] << " ";
    }
    cout << '\n';
    selectsort(n, &vec, min);
    for(int i = 0; i < n;i++){
        //cout << vec[i] << " ";
    }
     // (n - 1) + (n - 2) + ... + 2 + 1 = n * (n - 1) / 2
}
