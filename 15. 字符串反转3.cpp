#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    int n;
    cin >> n;
    int pd = 0;
  
    while (n--)
    {
        string str;
        if (pd == 0)
        {
            cin.get();  //Ҫ�����س���Ȼgetlineָ��ֹͣ�� ���� ǰ��������һ���س��ڻ�����
            pd++;
        } //����һ�ξ�����
        
        getline(cin, str); //Ĭ�ϻ��в�ֹͣ
      /*  cin.get();
        int L = str.length();
        string s;*/
        int L = str.length();
        string s;

       // cout << str << endl;
        for (int i = 0; i < L; i++)
        {
            if(str[i]!=32 )
                s += str[i];
            if (str[i] == 32||i==L-1)  //�߽����� ���һ���ַ���ȡ�˾Ϳ��������
            {
                // reverse(s.begin(),s.end()); �ַ�����ת����  �����ຯ��
                reverse(s.begin(), s.end());
                cout << s << " ";
                s = ""; //���
            }

        }
        cout << endl;

    }

       system("pause");
       return 0;	
}
/*

*/ 
