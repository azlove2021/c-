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
        } //����������� 

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
            //��Ҫ����һ�� ��Ȼ���ظ����� 1111 ������Ĵ�����
             //ƽ��ռ���ڴ�:1.550K    ƽ��CPUʱ��:0.09684S    ƽ��ǽ��ʱ��:0.09680S
            //���ٺ�   ƽ��ռ���ڴ�:1.549K    ƽ��CPUʱ��:0.04341S    ƽ��ǽ��ʱ��:0.04344S
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
