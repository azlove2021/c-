#include<string>
#include<iostream>
using namespace std;


int getYiNum(int num)
{
	//ͳ��1  255 -��  11111111  8��һ
	int sum = 0;
	while (num>0)
	{
		sum+=num & 1; // num & 1ĩβΪ0�ͷ���0  Ϊ1�ͷ���1
		 //  num >> 1; //ɾ��ĩλ����0��ߣ���
		//���ﲻ�� num>>1   ���� num=num>>1  �൱�� num>>=1;
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
		cin >> str; //���� 255.255.255.0  ת��Ϊ����   ���255 11111111
		int l = str.length();
		int num = 0;
		int sum = 0;
		for (int j = 0; j < l; j++)
		{
			//ע������ i j
			if (str[j] == '.')  //�Ǿ��� �������֣���
			{//�����Ѿ��õ�num��

				sum += getYiNum(num);
				
				num = 0;//���
			}
			else
			{
				num = num * 10 + (str[j] - '0'); //ASCALL�����ֵ�������ֲ�ֵ

			}
		}
		//���һ��
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
				num = num * 10 + (a[i] - '0');  //�ַ�ת���֣�������������ת
			}
		}
		sum += getNum(num);
		cout << sum << endl;

	}

	return 0;
}
*/ 
