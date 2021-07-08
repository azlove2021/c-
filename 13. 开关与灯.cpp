#include<iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{

    int n, m;
    cin >> n >> m;
    string* X = new string[n];
    int L = m; //m列！！
    for (int i = 0; i < n; i++)
    {
        cin >> X[i]; //n行 10101 
    }
    int* light=new int[m]; //m个灯

    for (int i = 0; i < m; i++)
    {
        light[i] = 0;//清空！！
    }

     // int* V=new int[n][m];  不能放两个变量？
    int** V;
      V = new int* [n];  //n行 每行指向很多个数 
    for (int i = 0; i < n; i++)
    {
        V[i] = new int[m];  //让每个 V[i]指针指向一个一维数组！！ m列！！
        
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
         }  //字符串转为了数组！！

    }

    //int* sum = new int[n]; //记录某行数据
    //for (int i = 0; i < n; i++)
    //{
    //    sum[i] = 0; //0表示可以去掉
    //}


    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (V[i][j] == 1)
            {


                light[j] += 1;
                 

            }

            
        }  //字符串转为了数组！！

    }

    /*int pd = 0;*/
    int sum2 = 0;

    int* hang = new int[n];
    for (int i = 0; i < n; i++)
    {
        hang[i] = 0; //能去掉
    }
     

    for (int j = 0; j < m; j++) //!!! 这里是m
    {



        if (light[j] == 1)    //不可去数量
        {
            for (int i = 0; i < n; i++)
            {
                if (V[i][j] == 1)
                {
                    hang[i] = 1; //不可或缺
                    break;
                }

            }
            

        }  //对角线就够了 多的可以去掉

    }   //找出那几行不能去掉 就是那些开关不能省略 加入有x个 看 x和总开关比较就知道了
     
    for (int i = 0; i < n; i++)
    {
        if (hang[i] == 1)
            sum2 += 1;
    }


    if (sum2==n) //大于等于开关数量 
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

    // //边界条件 多个开关控制一个灯 某些开关可以去掉！！
    //// 1
    //// 0
    //// 0  !!!


       system("pause");
       return 0;	
}
/*

*/ 
