#include<iostream>
using namespace std;
#include<algorithm>


class Str
{
public:

    string str;
    int id;
    int disOrder;
    Str()
    {
        id = 0;
        this->disOrder = 0;
    }
};
bool comp(Str s1, Str s2)
{
    return s1.disOrder < s2.disOrder;  //����Str�������Ż�������ʾ
}
int main()
{


    int n, m;
    cin >> n >> m;
    int L = m;
    //string** str;
    //str = new string * [m];//m�� n��
    //�ò�������ָ��
    Str* S;
    S= new Str[m];//m�� �ַ���

    //for (int i=0;i<m;i++)
    //{
    //    str[i] = new string[n];
    //}

    for (int i = 0; i <m; i++)
    {

        cin >> S[i].str;  //�ṹ�� �� ��������
        S[i].id = i; //���
        
        //ȫ������һ��

    }

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {  // jҪ��j����ıȽ�
                if (S[i].str[j] > S[i].str[k])
                {
                    S[i].disOrder++;
                }
              }
          }

    }
    //�ó�ÿ������̶�
    sort(S, S + m, comp);
    for (int i = 0; i < m; i++)
    {
        cout << S[i].str << endl;
    }

       system("pause");
       return 0;	
}
/*

*/ 
