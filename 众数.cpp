#include<iostream>
using namespace std;


int main()
{
    int N;
    while (1)
    {
        cin >> N;
        if (N == 0)break;
        int* arr = new int[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        } //输入数据完成 

        int Max = 0, m = 1, num = 0;
        for (int i = 0; i < N; i++)
        {

            int j = i;
            for (; arr[j] == arr[j + 1]&&j<N-1; j++)
            {
                if (arr[j] == arr[j + 1])
                     m += 1;

            }
            if (m > Max)
            {
                Max = m;
                num = arr[i];
            }
            //还要加速一下 不然会重复计算 1111 会计算四次三次
             //平均占用内存:1.550K    平均CPU时间:0.09684S    平均墙钟时间:0.09680S
            //加速后   平均占用内存:1.549K    平均CPU时间:0.04341S    平均墙钟时间:0.04344S
            i += m - 1;
            m = 1;

        }
        cout << num << "\n";

    }
  


       system("pause");
       return 0;	
}
/*

*/ 
