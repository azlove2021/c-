#include<iostream>
using namespace std;

#include<string>
int main()
{

    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    int** arr;
    arr = new int* [n];
    long W = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        W += P1 * (arr[i][1] - arr[i][0]);
    }

    int* L = new int[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        L[i] = (arr[i + 1][0] - arr[i][1]);

    }
    for (int i = 0; i < n - 1; i++)
    {

        if (L[i] < T1 || L[i] == T1)
        {  
            W += (P1)*L[i];

          }

        if (L[i] > T1 &&  (L[i] < (T1+T2)  ||L[i]==T1+T2 ))
        {
            W += (P1)*T1;
            W += (L[i]-T1) * P2;

        }

        if (L[i] >( T1+T2) || L[i] == (T1+T2) )
        {
            W += (P1)*T1;
            W += (T2) * P2;
            W += (L[i] - (T1 + T2)) * P3;

        }
      
    }
    cout << W << endl;




       system("pause");
       return 0;	
}

/*

*/ 
