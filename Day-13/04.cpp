#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {3,7,11,2,1,10,12};
    int isMaximum = INT_MIN;
    int isSecondMaximum = INT_MIN;

    if(nums.size() < 2){
        cout << "Invalid array" << endl;
        return 0;
    }

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > isMaximum){
            isSecondMaximum = isMaximum;
            isMaximum = nums[i];
        }
        else if(nums[i] > isSecondMaximum && nums[i] != isMaximum){
            isSecondMaximum = nums[i];
        }
    }

    cout << "Second maximum number is: " << isSecondMaximum << endl;

    return 0;
}