#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {12,14,2,43,1,333,122312,23123};
    int isMinimum = INT_MAX;

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] < isMinimum){
            isMinimum = nums[i];
        }
    }

    cout << "Minimum number is: " << isMinimum << endl;

    return 0;
}