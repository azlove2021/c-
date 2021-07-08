#include<string>
#include<iostream>
using namespace std;


int getYiNum(int num)
{
	//统计1  255 -》  11111111  8个一
	int sum = 0;
	while (num>0)
	{
		sum+=num & 1; // num & 1末尾为0就返回0  为1就返回1
		 //  num >> 1; //删除末位补上0左边！！
		//这里不是 num>>1   而是 num=num>>1  相当于 num>>=1;
		num = num >> 1;


	}
	return sum;

}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str; //接收 255.255.255.0  转换为数字   最大255 11111111
		int l = str.length();
		int num = 0;
		int sum = 0;
		for (int j = 0; j < l; j++)
		{
			//注意区分 i j
			if (str[j] == '.')  //那就是 单个数字！！
			{//表明已经得到num了

				sum += getYiNum(num);
				
				num = 0;//清空
			}
			else
			{
				num = num * 10 + (str[j] - '0'); //ASCALL编码差值就是数字差值

			}
		}
		//最后一组
		sum += getYiNum(num);
		cout << sum << endl;

	}
}
/*
int getNum(int num) {
	int sum = 0;
	while (num) {
		sum += (num & 1);
		num >>= 1;

	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	string a;
	int sum = 0;
	while (n--) {
		int sum = 0;
		cin >> a;
		int num = 0;
		int n = a.size();
		for (int i = 0; i < n; i++) {
			if (a[i] == '.') {
				sum += getNum(num);
				num = 0;
			}
			else {
				num = num * 10 + (a[i] - '0');  //字符转数字！！！单个单个转
			}
		}
		sum += getNum(num);
		cout << sum << endl;

	}

	return 0;
}
*/ 
