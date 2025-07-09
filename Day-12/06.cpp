#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,4,5};

    int sum = 0;
    int product = 1;

    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}