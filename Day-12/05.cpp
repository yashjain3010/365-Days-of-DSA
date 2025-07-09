#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,8,15,16,23,42};

    vector<int> odd_nums;
    vector<int> even_nums;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]%2 == 0){
            even_nums.push_back(arr[i]);
        }else{
            odd_nums.push_back(arr[i]);
        }
    }

    cout << "Odd numbers: ";
    for(int i = 0 ; i < odd_nums.size() ; i++){
        cout << odd_nums[i] << " ";
    }

    cout << endl;

    cout << "Even numbers: ";

    for(int i = 0 ; i < even_nums.size() ; i++){
        cout << even_nums[i] << " ";
    }
    return 0;
}
