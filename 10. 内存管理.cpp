//// 31.内存管理
#include<iostream>
#include<string>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Memory
{
	int marks;
	int lon;
	Memory()
	{
		this->lon = 1;
		this->marks = 0;
	}

};

bool comp(Memory m1, Memory m2)
{
	return m1.marks > m2.marks; //递减
}

int main()
{
	int t, m;
	cin >> t >> m;
	Memory* M = new Memory[m];
	int L = m; //内存长度
	int LL = m; //可使用空间内存！！！！！ 要区分开
	int x = 1; //内存编号

	string oper;
	//switch case 只识别整数和枚举类型，
	//计算机的汉字是从Unicode编码成UTF-8的，Unicode是十六进制数表示，嗯好像可以实现。
	for (int i = 0; i < t; i++)
	{

		cin >> oper;

		if (oper == "alloc")
		{
			int n;
			cin >> n;
			if (n > LL)
			{
				cout << "NULL" << endl;

			}
			else
			{
				for (int j = 0; j < m; j++) //寻找内存 
				{
					if (M[j].marks != 0)
					{
						j += M[j].lon - 1; //跳过内存块
					}
					else      //这时j已经在第一个未被利用的内存上了
					{
						int s = n;
						int count = 0;

						for (int k = j; s > 0 &&k<L;  s--)
						{
							if (M[k].marks == 0)
							{
								count++;
								k++; //连续内存！！ 寻找
								if (count == n) //s都已经变了不能比较
									break;
							}
							else
							{
								break;
							}
							
						}
						int ss = n;
						if (count == ss)
						{
							for (int kk = j; ss > 0 && kk < L; ss--, kk++)
							{
								M[kk].marks = x;

								M[kk].lon = n;


							}  //找到  记得内存长度要变小
							LL -= n;  //减去的只是空间大小！！
							cout << x << endl;
							x++;//顺序！！ 记得退出循环！！
							break;
						}
						else
						{
							cout << "NULL" << endl;
							break;
							//连续内存不够大
						}
					}  //寻找连续内存！！
				}
			} //分配内存



		}//分配内存

		else if (oper == "erase")  //释放内存 记得加上长度     //if else if        else  别用混淆
		{
			int xx;
			cin >> xx;
			int sss = 0;
			int pd = 0;
			for (int i = 0; i < L; i++)
			{
			
				  
				if (M[i].marks == xx) //!!!!!!!! 这里是xx 不是x细节！！  “”“”“; ”“if后面的一个分号！！！！！！影响巨大
				{
					pd = 1;
					int ss = M[i].lon;
					sss = M[i].lon;   
					for (int j = i; ss > 0; ss--, j++)
					{
						M[j].marks = 0;
						M[j].lon = 1; //没有让x-- 题目没讲要减一
					}
					 //sss = M[i].lon;  //要放前面 顺序影响结果
					break;
				}
				//LL+= sss; //恢复空间  注意位置 跳出了

			}
			if (pd == 0)
				cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
			LL += sss;
		}
		else if(oper=="defragment")
		{
			sort(M, M + L, comp);
		} //排序完成后 M[0]{marks=2 lon=3 } 降序
	}

}
//三个小时一个题 调试很重要！！
//
//3 10
//alloc 5
//alloc 3
//erase 3