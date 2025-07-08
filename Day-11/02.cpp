#include <iostream>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    int cols;
    cin >> cols;

    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= cols ; j++){
            if(j%2 == 1){
                cout << "0" << " ";
            }
            else{
                cout << "1" << " ";
            }
        }
        cout << endl;
    }
}