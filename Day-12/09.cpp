#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> arr = {1,2,2,3,4,4,4,5};
    map<int,int> arr1;

    for(int i = 0 ; i < arr.size() ; i++){
        arr1[arr[i]]++;
    }

    int unique_count = 0;
    int duplicate_count = 0;

    for(auto it : arr1){
        if(it.second == 1){
            unique_count++;
        }
        if(it.second > 1){
            duplicate_count++;
        }
    }

    cout << "Unique count: " << unique_count << endl;
    cout << "Duplicate count: " << duplicate_count << endl;
}
