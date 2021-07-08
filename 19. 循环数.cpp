#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<algorithm>
int main()
{
    string str;
    cin >> str;
  

    int L = str.length();


    int pd = 0;
    if (str[0] == '0')
        pd = 1;

    /*for (int i = 0; i < L; i++)
    {
        if (str[i] == '0')
        {


            pd++;
        }
        else
            break;
    }*/
     //str = str.substr(1, L); //从第二位开始 到末尾！1

    long num = 0;
    for (int i = 0; i < L; i++)
    {


        num = num * 10 + (str[i] - '0'); //字符转数字
        //得到数字 02468  2468

    }
    //while ( pd>0)
    //{

    //    num *= 10;  
    //    pd--;
    //} //几个0 就 扩大多少
    
    string* S = new string[L]; //L行
    stringstream ss; //流

    long num2 = 0;
    for (int i = 1; i <= L; i++)
    {
        ss.clear();
        num2= num * i;
        ss << num2;  //
      //  num >> ss; // 不能这么写 向左才行
        ss >> S[i-1]; //数字转字符串  //记得减一
        ss.clear();
       /* if (pd == 1)
            S[i][L] = '0';*/
    }
    

    sort(str.begin(), str.end(), greater<char>()); //排序

    int count = 0; //比较n次
    for (int i = 0; i < L; i++)
    {
        //cout << S[i] << endl;
        sort(S[i].begin(),S[i].end(), greater<char>()); //排序

        if (S[i] == str)
            count++;

    }

    if (count == L && pd == 0)
        cout << "Yes";

    else if (str == "0")
        cout << "Yes";
    else
    {
        cout << "No";
    }
   
   

    

       system("pause");
       return 0;	
}
/*

*/ 
