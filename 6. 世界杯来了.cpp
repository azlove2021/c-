#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<algorithm>
class team
{
public:
    team()
    {
        this->name = "0";
        this->score = 0;
    }
    string name;
    int score;
};
bool comp1(team t1, team t2)        //��int*  �������int  ������
{
    return t1.name < t2.name;        //С�ں��� ABCDE˳��

}
bool comp2(team t1, team t2)        //��int*  �������int  �ȷ���
{
    return t1.score > t2.score;

}
int main()
{
    int n;
    cin >> n;
    team* Te = new team[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Te[i].name;
    }
 

    string name1, name2;
    int score1, score2;
    string name;
    int l = n * (n - 1);
    for (int i = 0; i < l/2; i++)
    {
        cin >> name;
        int index = 0;
        int lon = name.length();
        int k = 0;
        for ( ; k < lon; k++)
        {
            if (name[k] == '-')
                index = k;

        }
        
        name1 = name.substr(0, index);
        name2 = name.substr(index+ 1, lon); // ����ҿ�������

           
        //������ �������   ��Ȼ���ԣ���charֻ�洢һ���ֽڵ����ݣ���Χ���ޡ�
        //�з�����Ϊ��[-127��128]���޷�����Ϊ����[0��255]��
        //��������� ������char int ���ص�
        char x;
        cin >> score1 >> x >> score2;


     /*   cin >> name1 >> str >> name2;
        cin >> score1 >> str >> score2;*/

        if (score1 > score2)
        {
            for (int j = 0; j < n; j++)
            {
                if (Te[j].name == name1)
                {
                    Te[j].score += 3;
                }
            }
        }

        if (score1 < score2)
        {
            for (int j = 0; j < n; j++)
            {
                if (Te[j].name == name2)
                {
                    Te[j].score += 3;
                }
            }
        }
        if (score1 == score2)
        {
            for (int j = 0; j < n; j++)
            {
                if (Te[j].name == name1)
                {
                    Te[j].score += 1;
                }
                if (Te[j].name == name2)
                {
                    Te[j].score += 1;
                }

            }
        }
    }

    sort(Te, Te + n, comp2);  //�Ѿ��������ĺ��� ��ѡ��ǰһ�밴��������
    sort(Te, Te + n / 2, comp1);

    for (int i = 0; i < n/2; i++)
    {
        cout << Te[i].name << endl;// " " << Te[i].score << endl;
    }

       system("pause");
       return 0;	
}
/*
* https://blog.csdn.net/lyj2014211626/article/details/71844122
������������

       2018�����˹���籭�����ˣ�������ùھ���ȫ�������Զȹ���һ���ǳ��������졣��Ϊ�й����ԣ��������ǿ����������ⲻ�������ˣ�����FIFA��������������ȫ���ԱЭ���һ�¾�����2118�����籭�����й��ٰ죬��Ϊ���������й��ӽ�����μ�Ԥѡ����ֱ�ӲμӾ����׶εı�����

   �����������£�

�ܹ�n��nΪż��������Ӳμӱ���

���շ���������������ǰn/2����ӽ�����̭��

���������Ĺ������£���ӻ�ʤ��3�֣�ƽ�ֵ�1�֣�ʧ����0�֣����ջ��ֵݼ�����ʤ��ݼ��Լ��������ݼ���ʽ����

��дһ�����򣬸��ݸ����Ĳ����������������б����Ľ�����ҳ��ɹ�������̭���׶ε����������

��������ʽ��

       ��һ���������Ψһ����n(1<=n<=50)���μ����籭�����������������������n���Ǹ���ӵ����֣�Ϊ���Ȳ�����30���ַ���Ӣ���ַ�����������n*(n-1)/2�У�ÿ�и�ʽname1-name2 num1:num2��0<=num1, num2<=100������ʾ������Ӽ��ȷ�.

�������ʽ��

       ����n/2�У���ʾ������̭���׶ε���ӣ������ֵ���������У�ÿ���������ռһ�С�
���������롿

4
A
B
C
D
A-B 1:1
A-C 2:2
A-D 1:0
B-C 1:0
B-D 0:3
C-D 0:3

�����������

A
D
*/ 
