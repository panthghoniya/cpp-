#include<iostream>
using namespace std;

int main(){

    for (int i = 5; i >= 1; i--)
    {
        for (int k = 2; k <= i; k++)
        {
            cout << "  ";
        }
        
        for (int j = i; j < 5; j++)
        {
            cout << j << " ";
        }
        for (int col = 5; col >= i; col--)
        {
           cout<< col << " ";
           
        }
        cout << endl;
    }
    
}