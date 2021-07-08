#include<iostream>
using namespace std;
#include<string>

int main()
{

    int n;
    cin >> n;
    string* S = new string[n];

    string* E = new string[n];
    string temp[7] = { "monday","tuesday","wednesday","thursday","friday","saturday","sunday" };//string字符串数组初始化
    int* L = new int[n];
    int* R = new int[n];  //表示比赛的可能持续天数 

    for (int i = 0; i < n; i++)
    {
        cin >> S[i] >> E[i];
        cin >> L[i] >> R[i];
    }//读入数据 
    
    int* s = new int[n];

    int* e = new int[n];  

    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < 7; j++)  //注意这里是小于7
        {
            if (S[i] == temp[j])
               s[i] = j + 1;  //比如星期六 就把s[i]=5+1; //方便

            if (E[i] == temp[j]) 
                e[i] = j + 1;  //比如星期六 就把e[i]=5+1; //方便

         }
         
    }//字符转为数字


    //for (int i = 0; i < n; i++)
    //{
    //    cout << s[i] <<"  "<< e[i] << endl;
    //}//输出 验证

    for (int i = 0; i < n; i++)
    {
        int count = 0; 
        int day = 0;

        for (int j = L[i]; j <= R[i]; j++)
        {
            if ( ((s[i] + j -1) % 7 ) == e[i]  || (s[i]+j-1) %7==0&&e[i]==7) //两种情况 因为 7%7==0  j表示的是比赛持续了几天 所以要减一 
            {
                count++;
                day = j; //记录是比赛了几天   //后面会覆盖 不用管因为只有count==1才会用上
            }
        }  //考虑跨周

        switch ( count)
        {
        case  0:
            cout << "impossible";
            break;

        case  1:
            cout << day;
            break;
           
        default:     //相当于else
            cout << "many";
           break;
        }
        cout << endl;

    }

       system("pause");
       return 0;	
}
/*

*/ 
