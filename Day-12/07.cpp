#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,2,2,2,5};
    int target = 2;

    int count = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == target){
            count++;
        }
    }

    cout << "Count of " << target << " in the array is " << count << endl;
    return 0;
}