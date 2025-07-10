#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {2,7,11,15,12,10};
    int target = 24;

    bool found = false;

    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = i + 1 ; j < nums.size() ; j++){
            for(int k = j + 1 ; k < nums.size() ; k++){
                if(nums[i] + nums[j] + nums[k] == target){
                    found = true;
                }
            }
        }
    }

    if(found){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    return 0;
}