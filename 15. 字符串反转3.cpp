#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    int n;
    cin >> n;
    int pd = 0;
  
    while (n--)
    {
        string str;
        if (pd == 0)
        {
            cin.get();  //要消除回车不然getline指针停止了 ！！ 前面输入了一个回车在缓冲区
            pd++;
        } //吸收一次就行了
        
        getline(cin, str); //默认换行才停止
      /*  cin.get();
        int L = str.length();
        string s;*/
        int L = str.length();
        string s;

       // cout << str << endl;
        for (int i = 0; i < L; i++)
        {
            if(str[i]!=32 )
                s += str[i];
            if (str[i] == 32||i==L-1)  //边界条件 最后一个字符读取了就可以输出了
            {
                // reverse(s.begin(),s.end()); 字符串反转函数  不是类函数
                reverse(s.begin(), s.end());
                cout << s << " ";
                s = ""; //清空
            }

        }
        cout << endl;

    }

       system("pause");
       return 0;	
}
/*

*/ 
