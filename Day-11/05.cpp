#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;
    int cols;
    cin >> cols;

    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= cols ; j++){
            int n = (cols + 1) / 2;
            if( j == n || i == n){
                cout << "0" << " ";
            }
            else{
                cout << "1" << " ";
            }
        }
        cout << endl;
    }
}