//24.欧洲冠军联赛
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class team         //关键用到了类 保证了分数和队伍绑定到了一起
{
public:
    string t_name; //队伍名
    int score_sum; //积分
    int goals_n;   //净胜球数
    team()
    {
        this->t_name = "0";
        this->score_sum = 0;
        this->goals_n = 0;
    }
    void Clear()
    {

        this->t_name = "0";
        this->score_sum = 0;
        this->goals_n = 0;
    }
};


int n;        //有几组数据
string name1,name2;  //队伍名称
string str;//占位

int goal_1, goal_2;           //两支队伍进球数

bool comp(team p1, team p2)
{

    if (p1.score_sum == p2.score_sum)
        return p1.goals_n > p2.goals_n;

    else
    {
        return p1.score_sum > p2.score_sum;
    }
}
int main()
{
    cin >> n;/*
    int* sss = new int[n];*/

      team Te[4];  //对象数组  4个队伍

      for (int i = 0; i < n; i++)
      {

          //清空 队伍
          for (int k = 0; k < 4; k++)
          {
              Te[k].Clear();
          }

          for (int j = 0; j < 12; j++)
          {
              cin >> name1 >> goal_1;
              cin >> str;
              cin >> goal_2 >> name2;
              //输入
              for (int k = 0; k < 4; k++)
              {
                  if (Te[k].t_name == name1)
                      break;

                  if (Te[k].t_name == "0")
                  {
                  
                  Te[k].t_name = name1;
                  break;

                   }
              }

              for (int k = 0; k < 4; k++)
              {
                  if (Te[k].t_name == name2)
                      break;

                  if (Te[k].t_name == "0")
                  {
                      Te[k].t_name = name2;
                      break;

                  }
              }//将name1 和name2存入team  有空位就 存入 保证不重复进入

              if (goal_1 > goal_2)
              {
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name1)

                      {
                          Te[k].score_sum += 3;
                          Te[k].goals_n += (goal_1 - goal_2);
                         
                      }
                  }
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name2)

                      {
                          //输的哪一方也要算净胜球数  球队的净胜球数是其进球数减去失球数（不考虑该球队在比赛中作为主队还是客队）。
                          Te[k].goals_n += (goal_2 - goal_1);  //负数

                      }
                  }


              }
              if (goal_1 == goal_2)
              {
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name1)

                      {
                          Te[k].score_sum += 1;
                      }
                  }
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name2)

                      {
                          Te[k].score_sum += 1; //平局加一分
                      }
                  }



              }


              if (goal_1 < goal_2)
              {
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name1)

                      {//输的哪一方也要算净胜球数  球队的净胜球数是其进球数减去失球数（不考虑该球队在比赛中作为主队还是客队）。
                          
                          Te[k].goals_n += (goal_1 - goal_2); //负数

                      }
                  }
                  for (int k = 0; k < 4; k++)
                  {
                      if (Te[k].t_name == name2)

                      {
                          Te[k].goals_n += (goal_2 - goal_1);  
                          Te[k].score_sum += 3;

                      }
                  }


              }


          }
          

         sort(Te,Te + 4, comp);
         // cout << Te[0].score_sum << " " << Te[0].goals_n << endl;
        cout << Te[0].t_name << " " << Te[1].t_name << endl;
          //for (int i = 0; i < 4; i++)
          //{
          //    //cout << Te[i].score_sum << " " << Te[i].goals_n << endl;
          //    cout << Te[i].t_name << endl;
          //}
      }
      return 0;
}
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        teams.clear();//清空
//        for (int j = 0; j < 12; j++)//每组12场
//        {
//            teams_cmpt.clear();
//            cin >> name >> goal_1 >> str >> goal_2;
//            teams_cmpt.push_back(name);
//            cin >> name;
//            teams_cmpt.push_back(name);
//            teams = competition(teams, teams_cmpt, goal_1, goal_2);
//        }
//        sort(teams.begin(), teams.end(), cmp);
//        /*for(it=teams.begin();it!=teams.end();it++)
//        {
//            cout << it->t_name << ' ' << "score " << it->score_sum << " goals_n " << it->goals_n << endl;
//        }*/
//        cout << teams[0].t_name << ' ' << teams[1].t_name << endl;
//    }
//    return 0;
//}
//
//bool cmp(const team& a, const team& b) //对球队进行排序
//{
//    if (a.score_sum == b.score_sum)
//    {
//        return a.goals_n > b.goals_n;
//    }
//    else
//    {
//        return a.score_sum > b.score_sum;
//    }
//}
//
//
//
//vector<team> competition(vector<team> teams, vector<string> teams_cmpt, int goal_1, int goal_2)
//{
//    vector<team>::iterator temp;
//
//    //检查所有队伍中是否存在这两队
//    int flag = 0;
//    for (temp = teams.begin(); temp != teams.end(); temp++)
//    {
//        if (temp->t_name == teams_cmpt[0])
//        {
//            flag = 1; break;
//        }
//    }
//    if (flag == 0)
//    {
//        teams.push_back(team(teams_cmpt[0]));
//    }
//    flag = 0;
//    for (temp = teams.begin(); temp != teams.end(); temp++)
//    {
//        if (temp->t_name == teams_cmpt[1])
//        {
//            flag = 1; break;
//        }
//    }
//    if (flag == 0)
//    {
//        teams.push_back(team(teams_cmpt[1]));
//    }
//
//    if (goal_1 == goal_2) //两队进球数相同，都得1分
//    {
//        for (temp = teams.begin(); temp != teams.end(); temp++)
//        {
//            if (temp->t_name == teams_cmpt[0]) //第一队
//            {
//                temp->score_sum += 1;
//            }
//            else if (temp->t_name == teams_cmpt[1]) //第二队
//            {
//                temp->score_sum += 1;
//            }
//        }
//    }
//    else if (goal_1 > goal_2) //第一队获胜，第一队得三分
//    {
//        for (temp = teams.begin(); temp != teams.end(); temp++)
//        {
//            if (temp->t_name == teams_cmpt[0]) //第一队
//            {
//                temp->score_sum += 3;
//                temp->goals_n += (goal_1 - goal_2); //净胜球数
//            }
//            else if (temp->t_name == teams_cmpt[1]) //第二队
//            {
//                temp->goals_n -= (goal_1 - goal_2);
//            }
//        }
//    }
//    else //第二队获胜，第二队得三分
//    {
//        for (temp = teams.begin(); temp != teams.end(); temp++)
//        {
//            if (temp->t_name == teams_cmpt[0]) //第一队
//            {
//                temp->goals_n -= (goal_2 - goal_1);
//            }
//            else if (temp->t_name == teams_cmpt[1]) //第二队
//            {
//                temp->score_sum += 3;
//                temp->goals_n += (goal_2 - goal_1); //净胜球数
//            }
//        }
//    }
//    return teams;
//}

/*
【问题描述】

       欧洲冠军联赛常被誉为全世界最具影响力的俱乐部级赛事。在比赛的小组赛阶段，欧洲的各个足球俱乐部被分为八个小组，每个小组中四支球队。每个小组中的球队按照如下规则排序：

球队会根据比赛结果获得积分。一场比赛的双方被称为主队和客队。如果其中一方进球数多于另一方，那么进球较多的一方获得3 分，另一方获得0 分。如果双方打成平手，则各得1分。

球队的净胜球数是其进球数减去失球数（不考虑该球队在比赛中作为主队还是客队）。

积分较高的球队排名更加靠前。

如果两支球队积分相同，那么净胜球数较多的球队排名靠前。

      小组的各队伍进行循环赛，即每两支球队之间进行两场比赛，双方交替作为主队。给定一个小组内12 场比赛的结果，请求出小组的出线队伍：即排名第一和第二的两支球队。

保证答案唯一。

【输入形式】

      输入的第一行包含一个整数T，代表测试数据的组数。接下来是 T 组数据。

      每组数据共有12 行，每行描述一场比赛，格式为：“主队队名主队进球数vs. 客队进球数客队队名”，其中“主队队名”和“客队队名”为字符串，“主队进球数”和“客队进球数”为两球队在本场比赛中各自的进球数量。

1 ≤ T ≤ 50

球队队名仅包含小写英文字母

球队队名长度不超过10 个字符

0 ≤ 进球数 ≤ 100

【输出形式】

       对于每组数据，输出一行，包含两个字符串，代表排名第一和第二的球队的队名。

【样例输入】

2
manutd 8 vs. 2 arsenal
lyon 1 vs. 2 manutd
fcbarca 0 vs. 0 lyon
fcbarca 5 vs. 1 arsenal
manutd 3 vs. 1 fcbarca
arsenal 6 vs. 0 lyon
arsenal 0 vs. 0 manutd
manutd 4 vs. 2 lyon
arsenal 2 vs. 2 fcbarca
lyon 0 vs. 3 fcbarca
lyon 1 vs. 0 arsenal
fcbarca 0 vs. 1 manutd
a 3 vs. 0 b
a 0 vs. 0 c
a 0 vs. 0 d
b 0 vs. 0 a
b 4 vs. 0 c
b 0 vs. 0 d
c 0 vs. 0 a
c 0 vs. 0 b
c 1 vs. 0 d
d 3 vs. 0 a
d 0 vs. 0 b
d 0 vs. 0 c
【样例输出】

manutd fcbarca
d b
【样例说明】

第一组数据：每支球队的积分与净胜球数分别为： 这里样例有问题 重复了 第二组对的就行

manutd：16 分，净胜球数12。

manutd：8 分，净胜球数 4。

manutd：5 分，净胜球数 −5。

manutd：4 分，净胜球数 −11。

第二组数据：每支球队的积分与净胜球数分别为：

d：7 分，净胜球数 2。

b：7 分，净胜球数 1。

a：7 分，净胜球数 0。

c：7 分，净胜球数 −3。

所有球队的积分相同，但是净胜球数较多的队伍排名更加靠前。
*/ 



