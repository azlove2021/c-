
//����ȱ����3 ��8ԭ���������Ѿ�����ʾ������������ 4 ��ʾ�ƶ���3�� 9��ʾ�ƶ���7�� 
 //        0 1 2 3 4 5 6 7 8 9
//         0 1 2   3 4 5 6   7    ���Ϊ����Զ�����  �ƶ�8�¾͵ý�λ 8���ƣ��������� 
// ÿ�˸�����һλ�����ð˽��Ʊ�ʾ �� octonary����
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
	string* a = new string[n + 2]; //��¼�ж������ַ���
	int* b = new int[n + 2]; //��¼ת���Ľ��
	string s;//һ��һ�еĶ�ȡ ���޸�Ϊ�˽��ƶ�Ӧ���� �����ͨ��һ������ת��Ϊ�˽���

	for (int i = 0; i < n; i++)
	{
		cin >> a[i]; //���� �ո�ͻس����ָ�
	}

	for (int i = 0; i < n; i++)
	{
		//һ��һ�ж�ȡ
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
		
		
		ss.clear(); //stringstreamʹ��֮ǰҪ����� 
		
		//����s���ַ��Ѿ�ת��Ϊ8�������ַ�
		ss << oct << s; //10����ת��Ϊ8���� �ٴ���ss������ 

		ss >> b[i];//ss��������b[]����
		//���ﻹ�� �ַ���ת��Ϊ�����֣��� 
		cout << b[i] << endl;
		
		
		//cout << oct << s << endl; //�������е���һ������������ 
		}
	return 0;

}