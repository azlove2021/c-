#include<iostream>
using namespace std;
#include<string>    
#include<algorithm>

class Player
{
public:
    string name;
    int score;
    int rank[100] = { 0 };
    Player()
    {
        this->name = "0";
        this->score = 0;
    }
};

//����һ �÷����� �������
bool comp1(Player p1, Player p2)
{
    if (p1.score == p2.score)
    {
        if (p1.rank[1] == p2.rank[1])
        {
            return p1.rank[2] > p2.rank[2];
        }
        else 
        {
            return p1.rank[1] > p2.rank[1];
        }
    }
   
    else
    {
        return  p1.score > p2.score;
    }
    //������       ���Ͻ��������������������� û�бȽϸ�����������  
}
//����� �������� ��˵÷�
bool comp2(Player p1, Player p2)       //�����p1 ,p2 ��&ȡ��ַ���ű����ܹ����� CJϵͳ��ȴ��������
{
    if (p1.rank[1] == p2.rank[1])
    {
        if (p1.score = p2.score)
            return p1.rank[2] > p2.rank[2];
        else
        {
            return p1.score > p2.score;
        }
    }

    else
    {
        return  p1.rank[1] > p2.rank[1];
    }
    //������ 
}

int main()
{

    int t;
    cin >> t;
    int lon = t;
    Player* P = new Player[101];
    while (t>0)
    {
        int n;
        cin >> n;
        string name1;
        //ֻ��ǰ10�����ְ�����˳���÷�����25��18��15��12��10��8��6��4��2��1��
        for (int i = 0; i < n; i++)
        {
            cin >> name1;
            for (int j=0; j <101;j++)
            {
                if (P[j].name == name1)
                    break;

                if (P[j].name == "0")
                {
                    P[j].name = name1;
                    break;
                }
            }

            switch (i+1)
            {
            case 1:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 25;
                        P[k].rank[1] += 1;
                    }
               }
               
                break;
            }
            case 2:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 18;
                        P[k].rank[2] += 1;
                    }
                }

                break;
            }
            case 3:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 15;
                        P[k].rank[3] += 1;
                    }
                }

                break;
            }
            case 4:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score +=12;
                        P[k].rank[4] += 1;
                    }
                }

                break;
            }
            case 5:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 10;
                        P[k].rank[5] += 1;
                    }
                }

                break;
            }
            case 6:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score+= 8;
                        P[k].rank[6] += 1;
                    }
                }

                break;
            }
            case 7:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 6;
                        P[k].rank[6] += 1;
                    }
                }

                break;
            }

            case 8:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 4;
                        P[k].rank[7] += 1;
                    }
                }

                break;
            }
            case 9:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score += 2;
                        P[k].rank[0] += 1;
                    }
                }

                break;
            }
            case 10:
            {
                for (int k = 0; k < 101; k++)
                {

                    if (P[k].name == name1)
                    {
                        P[k].score +=1 ;
                        P[k].rank[10] += 1;
                    }
                }

                break;
            }



            default:
                break;
            }

            //�Ѿ��� �÷������������� �洢����Ķ�������
        }  //for����
        
        t--;
    }
    // while���� �õ�ȫ����Ϣ

    //����һ �÷����� �������
   
    sort(P, P + lon, comp1);  //���ﲻ����t t�Ѿ���Ϊ0 ��

    cout << P[0].name << endl;

    sort(P, P +lon, comp2);
    cout << P[0].name << endl;


       system("pause");
       return 0;	
}
/*

*/ 
