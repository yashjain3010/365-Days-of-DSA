#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    bool isAscending = true;
    bool isDescending = true;

    for(int i = 0 ; i < arr.size()-1 ; i++){
        if(arr[i] > arr[i+1]){
            isAscending = false;
        }
        if(arr[i] < arr[i+1]){
            isDescending = false;
        }
    }

    if(isAscending){
        cout << "Array is sorted in ascending order" << endl;
    }
    if(isDescending){
        cout << "Array is sorted in descending order" << endl;
    }

    if(!isAscending && !isDescending){
        cout << "Array is not sorted" << endl;
    }

    return 0;
}