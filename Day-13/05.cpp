#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {3,7,11,2,1,10,12};

    int isMinimum = INT_MAX;
    int isSecondMinimum = INT_MAX;

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] < isMinimum){
            isSecondMinimum = isMinimum;
            isMinimum = nums[i];
        }

        else if(nums[i] < isSecondMinimum && nums[i] != isMinimum){
            isSecondMinimum = nums[i];
        }
    }

    cout << "Second minimum number is: " << isSecondMinimum << endl;

    return 0;
}