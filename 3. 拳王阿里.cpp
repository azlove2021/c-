#include<iostream>
using namespace std;
#include<string>

int main()
{

    int n;
    cin >> n;
    string* S = new string[n];

    string* E = new string[n];
    string temp[7] = { "monday","tuesday","wednesday","thursday","friday","saturday","sunday" };//string�ַ��������ʼ��
    int* L = new int[n];
    int* R = new int[n];  //��ʾ�����Ŀ��ܳ������� 

    for (int i = 0; i < n; i++)
    {
        cin >> S[i] >> E[i];
        cin >> L[i] >> R[i];
    }//�������� 
    
    int* s = new int[n];

    int* e = new int[n];  

    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < 7; j++)  //ע��������С��7
        {
            if (S[i] == temp[j])
               s[i] = j + 1;  //���������� �Ͱ�s[i]=5+1; //����

            if (E[i] == temp[j]) 
                e[i] = j + 1;  //���������� �Ͱ�e[i]=5+1; //����

         }
         
    }//�ַ�תΪ����


    //for (int i = 0; i < n; i++)
    //{
    //    cout << s[i] <<"  "<< e[i] << endl;
    //}//��� ��֤

    for (int i = 0; i < n; i++)
    {
        int count = 0; 
        int day = 0;

        for (int j = L[i]; j <= R[i]; j++)
        {
            if ( ((s[i] + j -1) % 7 ) == e[i]  || (s[i]+j-1) %7==0&&e[i]==7) //������� ��Ϊ 7%7==0  j��ʾ���Ǳ��������˼��� ����Ҫ��һ 
            {
                count++;
                day = j; //��¼�Ǳ����˼���   //����Ḳ�� ���ù���Ϊֻ��count==1�Ż�����
            }
        }  //���ǿ���

        switch ( count)
        {
        case  0:
            cout << "impossible";
            break;

        case  1:
            cout << day;
            break;
           
        default:     //�൱��else
            cout << "many";
           break;
        }
        cout << endl;

    }

       system("pause");
       return 0;	
}
/*

*/ 
