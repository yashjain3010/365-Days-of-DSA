#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,9,5,6,7,8,2,3};

    for(int i = 0 ; i < arr.size() ; i+=2){
        cout << arr[i] << " ";
    }
}