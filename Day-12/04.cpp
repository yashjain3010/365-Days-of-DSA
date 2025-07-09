#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50};

    vector<int> arr1 = arr;

    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr1[i] << " ";
    }
    return 0;
}