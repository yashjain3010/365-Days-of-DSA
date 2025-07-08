#include <iostream>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    int cols;
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= cols; j++)
            {
                cout << "1" << " ";
            }
            cout << endl;
        }
        else{
            for(int j = 1 ; j <= cols ; j++){
                cout << "0" << " ";
            }
            cout << endl;
        }
    }
}