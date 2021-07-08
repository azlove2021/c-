/*【思路】
括号串合法性的判断：声明两个stack容器，一个栈堆用于按顺序存储输入过程的合法的左括号，如果输入遇到合法的右括号，则判断该括号是否与栈顶元素匹配，如果匹配，则删除栈顶元素，如果不匹配或者或者栈为空，则将该右括号压入到另一个栈中。判断完字符串的最后一个字符时，如果两个栈均为空，这证明该括号串为合法的，否则不合法。最后输出结果。
————————————————
版权声明：本文为CSDN博主「LG.田猿」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_45909595/article/details/107825188*/

/* 关键利用栈 因为合法括号必须是 外面的括号包含里面的括号 把右括号放栈1 左括号放栈2 
每次都对比两个栈顶的括号 完全匹配才是合法的 因为括号是一个包含一个 

*/
#include<iostream>
using namespace std;
#include<stack>  //属于STL自动扩容？？
#include<string>
int main()
{
    int n;
    cin >> n;
    while (n>0)
    {
        stack<char> s1;
        stack<char> s2;
        string str;
        cin >> str;
        int l = str.length();
        int pd = 0;
        for (int i = 0; i < l; i++)
        {
            
            if (str[i] == '<' || str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                //右括号 
                s1.push(str[i]);
            }
            else if (str[i] == '>' )
            {  
                 //要判断非空不然 内存泄漏！！！！！！！！！！
                if (!s1.empty()&&s1.top() == '<')
                    s1.pop();
                else
                {
                    cout << "No";
                    pd = 1;
                    break;
                }
                
            }
            else if( str[i] == ')' )
            {

                if (!s1.empty() && s1.top() == '(')
                    s1.pop();
                else
                {
                    cout << "No";
                    pd = 1;
                    break;
                }

            }
            else if (!s1.empty() && str[i] == '}')
            {

                if (s1.top() == '{')
                    s1.pop();
                else
                {
                    cout << "No";
                    pd = 1;
                    break;
                }
            }
            else
            {
              // str[i] == ']'

                if (!s1.empty() && s1.top() == '[')
                    s1.pop();
                else
                {
                    cout << "No";
                    pd = 1;
                    break;
                }
            }
          
        }
        if ((s1.empty() && s2.empty()&&pd==0 ))
            cout << "Yes";
        if ((pd == 0 && !s1.empty()))
            cout << "No";  //不为空 也是非法括号

        cout << endl;


        n--;
    }

       system("pause");
       return 0;	
}
/*
一个合法的括号串，是指只包含括号的串，如果满足如下条件：

（1）<> () [] {} 这四对括号是合法的；

（2）如果r是合法括号串，则<r> (r) [r] {r}也是；

（3）如果r，s是合法括号串，则rs也是；

所以<<>> , [<>{}(())],[({<>})]是合法的括号串，而)(,[( ])就不是。

【输入形式】

输入第一行正整数t (10 ≤ n ≤ 100)，表示有多少组测试数据。

后面有t行，每行一个只包含8种括号符号的括号串。

40%的括号串的长度L 2 ≤ L≤ 20；

30%的括号串的长度L 2 ≤ L≤ 200；

20%的括号串的长度L 2 ≤ L≤ 2000；

10%的括号串的长度L 2 ≤ L≤ 20000；

【输出形式】

对于每组测试数据，如果括号串是合法的，输出“Yes”（输出没有引号）占一行，否则，输出“No”（输出没有引号）占一行。

【样例输入】


6
<<>>
)(
[<>{}(())]
[({<>})]
[(])
<([{
【样例输出】


Yes
No
Yes
Yes
No
No
*/ 
