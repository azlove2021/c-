#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


int main()
{
    int n;
    int r; //进制
    string str;
    string X = "0123456789abcdef"; //16进制内   //这里有问题 a和0 Ascall码不是相差11位
    
    //string XX = "abcdef";  // 10 11 12 13 14 15
    //30%的测试数据N的位数L 1 ≤ L≤ 102；  位数太大了 不能转换为数字！！！！！
  
    cin >> n;

    for (int k = 0; k < n; k++)
    {
        cin >> r >> str; //进制10进制的数

        //int L = str.length();

      //  bool pd = false;

        string Str = str;


      

        //对于每组测试数据，输出一位占一行：正整数N在B进制下的校验码。（如果校验码可以为B-1，也可以为0，输出0）。
    
        for (int i = 0; i < r; i++)
        {

            Str = str; //还原
            
            Str += X[i]; //补上最后一位再转换   不能一直加下去
            int ans = 0, j = 0;
            int L = Str.length();
            for (int j = 0; j < L; j++)
            {

                //16进制 780  7 112  120 1920
                if (Str[j] >= '0' && Str[j] <= '9')
                    ans += Str[j] - '0';
                //c++里面大于或等于是 >=
                else if (Str[j] >= 'a' && Str[j] <= 'f')
                    ans += Str[j] - 'a' + 10;

                else if (Str[j] >= 'A' && str[j] <= 'F')
                    ans += Str[j] - 'A' + 10;   //这样修改后才完善！！！！！！！！！！

            }
           

            if (ans % (r - 1) == 0)
            {
                cout << X[i] << endl;
                break;
               // pd = true; 
                  //一定能找到唯一一个！！！！！！
            } //   B进制的数能被B - 1整除，      当且仅当           各位数字和能被B - 1整除。
            
           
          
        }

       

    }

       system("pause");
       return 0;	
}
//int占用4字节，32比特，数据范围为-2147483648~2147483647[-2^31~2^31-1]  21亿 10位
/*
* 
char str[30] = "780 This is test";
   char *ptr;  //780  16进制表示为1920
   long ret;


   ret = strtol(str, &ptr, 16);
    // 将字符串str里面的 数字部分转化返回给ret 字符部分存入ptr

   printf("数字（无符号长整数）是 %ld\n", ret);

   printf("字符串部分是 |%s|", ptr);
   B进制的数能被B-1整除，当且仅当各位数字和能被B-1整除。

第一组测试数据 10进制数123 最后添加检验码3，10进制数1233各位数字和是9，是9的倍数

第二组测试数据 16进制数78 最后添加检验码0，16进制数780各位数字和是15，是15的倍数

第三组测试数据 16进制数1234321 最后添加检验码e，16进制数1234321e各位数字和是30，是15的倍数

第四组测试数据 12进制数ab 最后添加检验码1，12进制数ab1各位数字和是22，是11的倍数



#include<iostream>
#include<string>
using namespace std;

int main()
{
    int r,i=0,ans=0;
    string n;
    cin>>r>>n;//R表示进制,N表示要转换的数，ans表示要转换的结果。
    while(n.size()!=i)
    {
        ans*=r;       //我这里是把1看成0，把0看成1来算的。这样比较方便。其实都一样。
       if(n[i]>='0'&&n[i]<='9')
        ans+=n[i]-'0';
         //c++里面大于或等于是 >=
         else if(n[i]>='a'&&n[i]<='f')
        ans+=n[i]-'a'+10;

       else if(n[i]>='A'&&n[i]<='F')
          ans+=n[i]-'A'+10;   //这样修改后才完善！！！！！！！！！！

        i++;        //1234567 8进制 1 先读取 乘以了8的6次方！！
    }
    cout<<ans<<endl;
    return 0;
 }  //有漏洞    return (c - 'a' + 10);
  //
*/ 
