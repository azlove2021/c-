#include<iostream>
using namespace std;
#include<string>
#include<sstream>
/*string中find()返回值是字母在母串中的位置（下标记录），如果没有找到，
那么会返回一个特别的标记npos。（返回值可以看成是一个int型的数）

size_type find(const string & str, size_type pos = 0) const	从字符串的pos位置开始，查找子字符串str。
如果找到，则返回该子字符串首次出现时其首字符的索引；否则，返回string::npos
   */
 int main()
{
    int m, n;
    cin >> m >> n;  //n为0 
    string str, sub; //子串
    stringstream  s1;
    s1.clear();
    s1 << n;
    s1 >> sub;


    stringstream ss;

    for (int i =1; i <=m; i++)
    {
        //0里面含有0！！
        ss.clear();
        ss << i; //i流向ss
        ss >> str;
        char ch = n;
        if (n != 0)
        {
            if (str.find(sub) != str.npos || i % n == 0)   //n为数字也可以？？
            {
                cout << i << " ";

            }
        }
        else
        {
            if (str.find(sub) != str.npos )   //n为数字也可以？？
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
//    cin >> m >> n;  //n为0 
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
