
//由于缺少了3 和8原来的数字已经不表示本来的意义了 4 表示移动了3下 9表示移动了7下 
 //        0 1 2 3 4 5 6 7 8 9
//         0 1 2   3 4 5 6   7    理解为距离远点距离  移动8下就得进位 8进制！！！！！ 
// 每八个数进一位就是用八进制表示 用 octonary函数
#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<algorithm>
#include<cstdio>
int main()
{

	int n;
	stringstream ss;
	cin >> n;
	string* a = new string[n + 2]; //记录有多少行字符串
	int* b = new int[n + 2]; //记录转换的结果
	string s;//一行一行的读取 在修改为八进制对应数字 最后再通过一个函数转换为八进制

	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; //输入 空格和回车做分割
	}

	for (int i = 0; i < n; i++)
	{
		//一行一行读取
		s = a[i];
		int l = s.length();
		for (int j = 0; j < l; j++)
		{
			switch (s[j] )
			{
			case '4':
				s[j] = '3';
				break;

			case '5':
				s[j] = '4';
				break;

			case '6':
				s[j] = '5';
				break;

			case '7':
				s[j] = '6';
				break;

			case '9':
				s[j] = '7';
				break;

		}
		}
		
		
		ss.clear(); //stringstream使用之前要先清空 
		
		//现在s中字符已经转换为8进制下字符
		ss << oct << s; //10进制转换为8进制 再存入ss流里面 

		ss >> b[i];//ss流再流向b[]数组
		//这里还将 字符串转化为了数字？？ 
		cout << b[i] << endl;
		
		
		//cout << oct << s << endl; //这样不行得用一个流来接收它 
		}
	return 0;

}