#include<iostream>
using namespace std;

int main(){
    int user;

    cout << "Enter any number: ";
    cin >> user;

    if (user < 18)
    {
        cout << "you are not eligible for vote";
    }
    else if (user == 18)
    {
        cout << "you are also eligible for vote";
    }
    else
    {
        cout << "you are eligible for vote";
    }
}