#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;

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

    cout << "Enter the sixth value: ";
    cin >> f;

    if (a != b && a != c && a != d && a != e && a != f && b != c && b != d && b != e && b != f && c != d && c != e && c != f && d != e && d != f && e != f)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    if (a > e)
                    {
                        if (a > f)
                        {
                            cout << "first value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "fifth value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
            else
            {
                cout << "third value is Max...";
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
                        if (b > f)
                        {
                            cout << "second value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "fifth value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                }
                else
                {
                    cout << "fourth value is Max...";
                }
            }
            else
            {
                if (c > d)
                {
                    if (c > e)
                    {
                        if (c > f)
                        {
                            cout << "third value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "fifth value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                }
                else
                {
                    if (d > e)
                    {
                        if (d > f)
                        {
                            cout << "fourth value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
                    }
                    else
                    {
                        if (e > f)
                        {
                            cout << "fifth value is Max...";
                        }
                        else
                        {
                            cout << "sixth value is Max...";
                        }
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