#include<iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{

    int n;
    cin >> n;
   // int H = n;
  //  int* x = new int[n];
    int L = 0, R = 0;

    long x, temp;

    while ( n--)
    {
        cin >> x >> temp;
        if (x < 0)
            L++;
        else
        {
            R++;
        }
        
        
    }
    if (L == 1 || R == 1||L==0||R==0)
        cout << "Yes";
    else
    {
        cout << "No";
    }
    return 0;

    //cout << L << "　" << R;
     //边界条件 所以点都在同一边也可以！！！！！！！！！！！！！！！！！！！
}
/*

*/ 
