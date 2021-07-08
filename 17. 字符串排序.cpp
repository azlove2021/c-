#include<iostream>
using namespace std;
#include<algorithm>


class Str
{
public:

    string str;
    int id;
    int disOrder;
    Str()
    {
        id = 0;
        this->disOrder = 0;
    }
};
bool comp(Str s1, Str s2)
{
    return s1.disOrder < s2.disOrder;  //现在Str对象后面才会智能提示
}
int main()
{


    int n, m;
    cin >> n >> m;
    int L = m;
    //string** str;
    //str = new string * [m];//m行 n列
    //用不到二级指针
    Str* S;
    S= new Str[m];//m行 字符串

    //for (int i=0;i<m;i++)
    //{
    //    str[i] = new string[n];
    //}

    for (int i = 0; i <m; i++)
    {

        cin >> S[i].str;  //结构体 类 方便排名
        S[i].id = i; //编号
        
        //全部列数一样

    }

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {  // j要和j后面的比较
                if (S[i].str[j] > S[i].str[k])
                {
                    S[i].disOrder++;
                }
              }
          }

    }
    //得出每行无序程度
    sort(S, S + m, comp);
    for (int i = 0; i < m; i++)
    {
        cout << S[i].str << endl;
    }

       system("pause");
       return 0;	
}
/*

*/ 
