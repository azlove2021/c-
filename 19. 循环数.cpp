#include<iostream>
using namespace std;
#include<string>
#include<sstream>
#include<algorithm>
int main()
{
    string str;
    cin >> str;
  

    int L = str.length();


    int pd = 0;
    if (str[0] == '0')
        pd = 1;

    /*for (int i = 0; i < L; i++)
    {
        if (str[i] == '0')
        {


            pd++;
        }
        else
            break;
    }*/
     //str = str.substr(1, L); //�ӵڶ�λ��ʼ ��ĩβ��1

    long num = 0;
    for (int i = 0; i < L; i++)
    {


        num = num * 10 + (str[i] - '0'); //�ַ�ת����
        //�õ����� 02468  2468

    }
    //while ( pd>0)
    //{

    //    num *= 10;  
    //    pd--;
    //} //����0 �� �������
    
    string* S = new string[L]; //L��
    stringstream ss; //��

    long num2 = 0;
    for (int i = 1; i <= L; i++)
    {
        ss.clear();
        num2= num * i;
        ss << num2;  //
      //  num >> ss; // ������ôд �������
        ss >> S[i-1]; //����ת�ַ���  //�ǵü�һ
        ss.clear();
       /* if (pd == 1)
            S[i][L] = '0';*/
    }
    

    sort(str.begin(), str.end(), greater<char>()); //����

    int count = 0; //�Ƚ�n��
    for (int i = 0; i < L; i++)
    {
        //cout << S[i] << endl;
        sort(S[i].begin(),S[i].end(), greater<char>()); //����

        if (S[i] == str)
            count++;

    }

    if (count == L && pd == 0)
        cout << "Yes";

    else if (str == "0")
        cout << "Yes";
    else
    {
        cout << "No";
    }
   
   

    

       system("pause");
       return 0;	
}
/*

*/ 
