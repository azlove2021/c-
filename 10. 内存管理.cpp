//// 31.�ڴ����
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
	return m1.marks > m2.marks; //�ݼ�
}

int main()
{
	int t, m;
	cin >> t >> m;
	Memory* M = new Memory[m];
	int L = m; //�ڴ泤��
	int LL = m; //��ʹ�ÿռ��ڴ棡�������� Ҫ���ֿ�
	int x = 1; //�ڴ���

	string oper;
	//switch case ֻʶ��������ö�����ͣ�
	//������ĺ����Ǵ�Unicode�����UTF-8�ģ�Unicode��ʮ����������ʾ���ź������ʵ�֡�
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
				for (int j = 0; j < m; j++) //Ѱ���ڴ� 
				{
					if (M[j].marks != 0)
					{
						j += M[j].lon - 1; //�����ڴ��
					}
					else      //��ʱj�Ѿ��ڵ�һ��δ�����õ��ڴ�����
					{
						int s = n;
						int count = 0;

						for (int k = j; s > 0 &&k<L;  s--)
						{
							if (M[k].marks == 0)
							{
								count++;
								k++; //�����ڴ棡�� Ѱ��
								if (count == n) //s���Ѿ����˲��ܱȽ�
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


							}  //�ҵ�  �ǵ��ڴ泤��Ҫ��С
							LL -= n;  //��ȥ��ֻ�ǿռ��С����
							cout << x << endl;
							x++;//˳�򣡣� �ǵ��˳�ѭ������
							break;
						}
						else
						{
							cout << "NULL" << endl;
							break;
							//�����ڴ治����
						}
					}  //Ѱ�������ڴ棡��
				}
			} //�����ڴ�



		}//�����ڴ�

		else if (oper == "erase")  //�ͷ��ڴ� �ǵü��ϳ���     //if else if        else  ���û���
		{
			int xx;
			cin >> xx;
			int sss = 0;
			int pd = 0;
			for (int i = 0; i < L; i++)
			{
			
				  
				if (M[i].marks == xx) //!!!!!!!! ������xx ����xϸ�ڣ���  ����������; ����if�����һ���ֺţ�����������Ӱ��޴�
				{
					pd = 1;
					int ss = M[i].lon;
					sss = M[i].lon;   
					for (int j = i; ss > 0; ss--, j++)
					{
						M[j].marks = 0;
						M[j].lon = 1; //û����x-- ��Ŀû��Ҫ��һ
					}
					 //sss = M[i].lon;  //Ҫ��ǰ�� ˳��Ӱ����
					break;
				}
				//LL+= sss; //�ָ��ռ�  ע��λ�� ������

			}
			if (pd == 0)
				cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
			LL += sss;
		}
		else if(oper=="defragment")
		{
			sort(M, M + L, comp);
		} //������ɺ� M[0]{marks=2 lon=3 } ����
	}

}
//����Сʱһ���� ���Ժ���Ҫ����
//
//3 10
//alloc 5
//alloc 3
//erase 3