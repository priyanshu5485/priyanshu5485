#include<iostream>
using namespace std;

void pali(int n)
{
    int t1=0,t2=1,temp;
    if (n == 1)
        cout << t1;
    if (n == 2)
        cout << t1 << " " << t2;
    if (n > 2)
    {
        cout << t1 << " " << t2;
        for (int i = 2; i <= n; i++)
        {
            cout << " " << t1 + t2;
            temp = t1 + t2;
            t1 = t2;
            t2 = temp;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    pali(n);
    return 0;
}