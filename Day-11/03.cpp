#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;

    int cols;
    cin >> cols;

    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= cols ; j++){
            if(i == 1 || i == rows || j == 1 || j == cols){
                cout << "1" << " ";
            }
            else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}