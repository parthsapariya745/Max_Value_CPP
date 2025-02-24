#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    cout << "Enter the third value: ";
    cin >> c;

    cout << "Enter the fourth value: ";
    cin >> d;

    cout << "Enter the fifth value: ";
    cin >> e;

    if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    if (a > e)
                    {
                        cout << "first value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "fourth value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        cout << "third value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "fourth value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    if (b > e)
                    {
                        cout << "second value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "fourth value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        cout << "third value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
                else
                {
                    if (d > e)
                    {
                        cout << "fourth value is Max...";
                    }
                    else
                    {
                        cout << "fifth value is Max...";
                    }
                }
            }
        }
    }
    else
    {
        cout << "this value are same";
    }
}