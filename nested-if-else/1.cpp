#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    if (a != b)
    {
        if (a > b)
        {
            cout << "First value is Max...";
        }
        else{
            cout << "Second value is Max...";
        }
    }
    else
    {
        cout << "this value are same";
    }
}