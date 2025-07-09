#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 5, 6};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Value of index " << i << " is " << arr[i] << endl;
    }
}