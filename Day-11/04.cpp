#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;

    int cols;
    cin >> cols;

    bool flag = true;

    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= cols ; j++){
            if(flag){
                cout << "1" << " ";
                flag = false;
            }
            else{
                cout << "0" << " ";
                flag = true;
            }
        }
        cout << endl;
    }
    
 }