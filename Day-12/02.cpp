#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,5,6};

    int n = arr.size();

    for(int i = n-1 ; i >= 0 ; i--){
        cout << arr[i] << " ";
    }
}