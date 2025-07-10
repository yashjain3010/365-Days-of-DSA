#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2,7,11,15,12,10};

    int isMaximum = INT_MIN;

    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] > isMaximum){
            isMaximum = nums[i];
        }
    }

    cout << "Maximum number is: " << isMaximum << endl;

    return 0;
}