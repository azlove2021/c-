#include<iostream>
using namespace std;
#include<string>
#include<sstream>
/*string��find()����ֵ����ĸ��ĸ���е�λ�ã��±��¼�������û���ҵ���
��ô�᷵��һ���ر�ı��npos��������ֵ���Կ�����һ��int�͵�����

size_type find(const string & str, size_type pos = 0) const	���ַ�����posλ�ÿ�ʼ���������ַ���str��
����ҵ����򷵻ظ����ַ����״γ���ʱ�����ַ������������򣬷���string::npos
   */
 int main()
{
    int m, n;
    cin >> m >> n;  //nΪ0 
    string str, sub; //�Ӵ�
    stringstream  s1;
    s1.clear();
    s1 << n;
    s1 >> sub;


    stringstream ss;

    for (int i =1; i <=m; i++)
    {
        //0���溬��0����
        ss.clear();
        ss << i; //i����ss
        ss >> str;
        char ch = n;
        if (n != 0)
        {
            if (str.find(sub) != str.npos || i % n == 0)   //nΪ����Ҳ���ԣ���
            {
                cout << i << " ";

            }
        }
        else
        {
            if (str.find(sub) != str.npos )   //nΪ����Ҳ���ԣ���
            {
                cout << i << " ";

            }
        }


    }


       system("pause");
       return 0;	
}

///*
//
//*/ 
//#include<iostream>
//using namespace std;
//#include<string>
//#include<sstream>
//int main()
//{
//    int m, n;
//    cin >> m >> n;  //nΪ0 
//    string str = "123456";
//    stringstream ss;
//    string sub;
//
//    ss.clear();
//    ss << n;
//    ss >> sub;
//    char ch = '7';
//    if (str.find(ch)!=str.npos )  
//        cout << "yes";
//    else
//    {
//        cout << "no";
//    }
//      
//    system("pause");
//    return 0;
//}
/*

*/
