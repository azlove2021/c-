#include<iostream>
using namespace std;


int main()
{ 
      
    int n;
    while (1)
    {
        cin >> n;
        if (n != 0)
        {
            double* arr = new double[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            double ave = 0;
            for (int i = 0; i < n; i++)
            {
                ave += arr[i];
            }
            ave /= n;

            double sum = 0;

            for (int i = 0; i < n; i++)
            {
                sum += (arr[i] - ave) * (arr[i] - ave);  //double���� ��sum

            }
            int S = sum /= n; //����ȡ��
            cout << S << endl;

        }
        else
            break;

    }


       system("pause");
       return 0;	
}
/*

*/ 
