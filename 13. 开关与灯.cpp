#include<iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{

    int n, m;
    cin >> n >> m;
    string* X = new string[n];
    int L = m; //m�У���
    for (int i = 0; i < n; i++)
    {
        cin >> X[i]; //n�� 10101 
    }
    int* light=new int[m]; //m����

    for (int i = 0; i < m; i++)
    {
        light[i] = 0;//��գ���
    }

     // int* V=new int[n][m];  ���ܷ�����������
    int** V;
      V = new int* [n];  //n�� ÿ��ָ��ܶ���� 
    for (int i = 0; i < n; i++)
    {
        V[i] = new int[m];  //��ÿ�� V[i]ָ��ָ��һ��һά���飡�� m�У���
        
      }


   // vector<int> x;
   
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < m; j++)
        {
            if (X[i][j] == '1')
                V[i][j] = 1;
            else
                V[i][j] = 0;
         }  //�ַ���תΪ�����飡��

    }

    //int* sum = new int[n]; //��¼ĳ������
    //for (int i = 0; i < n; i++)
    //{
    //    sum[i] = 0; //0��ʾ����ȥ��
    //}


    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (V[i][j] == 1)
            {


                light[j] += 1;
                 

            }

            
        }  //�ַ���תΪ�����飡��

    }

    /*int pd = 0;*/
    int sum2 = 0;

    int* hang = new int[n];
    for (int i = 0; i < n; i++)
    {
        hang[i] = 0; //��ȥ��
    }
     

    for (int j = 0; j < m; j++) //!!! ������m
    {



        if (light[j] == 1)    //����ȥ����
        {
            for (int i = 0; i < n; i++)
            {
                if (V[i][j] == 1)
                {
                    hang[i] = 1; //���ɻ�ȱ
                    break;
                }

            }
            

        }  //�Խ��߾͹��� ��Ŀ���ȥ��

    }   //�ҳ��Ǽ��в���ȥ�� ������Щ���ز���ʡ�� ������x�� �� x���ܿ��رȽϾ�֪����
     
    for (int i = 0; i < n; i++)
    {
        if (hang[i] == 1)
            sum2 += 1;
    }


    if (sum2==n) //���ڵ��ڿ������� 
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
    }

    //for (int i = 0; i < n; i++)
    //{
    //    if (sum[i] == 0)
    //    {
    //        pd = 1;
    //        cout << "YES" << endl;
    //        return 0;
    //    }

    //}

    //if (pd == 0)
    //    cout << "NO" << endl;

    // //�߽����� ������ؿ���һ���� ĳЩ���ؿ���ȥ������
    //// 1
    //// 0
    //// 0  !!!


       system("pause");
       return 0;	
}
/*

*/ 
