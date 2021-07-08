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
bool comp1(team t1, team t2)        //想int*  这里就是int  比姓名
{
    return t1.name < t2.name;        //小于号是 ABCDE顺序

}
bool comp2(team t1, team t2)        //想int*  这里就是int  比分数
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
        name2 = name.substr(index+ 1, lon); // 左闭右开？？？

           
        //接下来 输入分数   当然可以，但char只存储一个字节的数据，范围有限。
        //有符号数为：[-127，128]。无符号数为：：[0，255]。
        //这里很巧妙 利用了char int 的特点
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

    sort(Te, Te + n, comp2);  //已经按分数拍好了 在选出前一半按姓名排序
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
【问题描述】

       2018年俄罗斯世界杯结束了，法国获得冠军，全世界球迷度过了一个非常愉快的夏天。作为中国球迷，不能总是看别人踢球，这不福利来了，根据FIFA（国际足联）及全体成员协会的一致决定，2118年世界杯将在中国举办，作为东道主，中国队将无需参加预选赛而直接参加决赛阶段的比赛。

   比赛规则如下：

总共n（n为偶数）个球队参加比赛

按照分组赛积分排名，前n/2的球队进入淘汰赛

积分排名的规则如下：球队获胜得3分，平局得1分，失利得0分，按照积分递减、净胜球递减以及进球数递减方式排名

编写一个程序，根据给出的参赛队伍名单和所有比赛的结果，找出成功进入淘汰赛阶段的球队名单。

【输入形式】

       第一行输入包含唯一整数n(1<=n<=50)，参加世界杯决赛的球队数量。接下来的n行是各球队的名字，为长度不超过30个字符的英文字符。接下来的n*(n-1)/2行，每行格式name1-name2 num1:num2（0<=num1, num2<=100），表示对阵球队及比分.

【输出形式】

       输入n/2行，表示进入淘汰赛阶段的球队，按照字典序进行排列，每个球队名字占一行。
【样例输入】

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

【样例输出】

A
D
*/ 
