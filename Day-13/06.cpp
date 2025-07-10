#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {3,7,11,2,1,10};
    int X = 3;
    int val = 5;

    vector<int> ans;

    for(int i = 0 ; i <= nums.size() ; i++){
        if(i == X){
            ans.push_back(val);
        }
        else{
            ans.push_back(nums[i]);
        }
    }

    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }

    return 0;
}