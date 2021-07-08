//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//int main()
//{
//    ostringstream ostr;
//    //ostr.str("abc");//如果构造的时候设置了字符串参数,那么增长操作的时候不会从结 尾开始增加,而是修改原有数据,超出的部分增长 
//    ostr.put('d');
//    ostr.put('e');
//    ostr << "fg";
//
//    string gstr = ostr.str();
//    cout << gstr;
//    system("pause");
//}



//例子一：基本数据类型转换例子 int转string
//#include <string>
//#include <sstream>
//#include <iostream> 
//using namespace std;
//int main()
//{
//    std::stringstream stream;
//    std::string result;
//    int a;
//    int i = 1000;
//    stream << i; //将int输入流
//    stream >> result;  //实验后得 stream里面的 1000流向result后 stream里面就没有数据了！！只能用一次向一个容器~~~~~
//
//    stream.clear();
//    stream << i; //将int输入流
//    stream >> a; //从stream中抽取前面插入的int值
// 
//
//    std::cout << result << std::endl; // print the string "1000"
//    std::cout <<a << std::endl; // print the string "1000"
//    cout << a + 1 << endl;  
//    //妙极了   通过stringstream 可以把字符串的 string 1000转化为 int类型的1000
//
//    stringstream ss;
//    ss.clear();
//    ss << oct << result;
//    int temp;      //要想转换为8进制必须用int类型接收 !!! string类型接收的话还是1000
//    ss >> temp;
//    cout << temp;
//}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//例子二：除了基本类型的转换，也支持char *的转换。
//#include <sstream>
//#include <iostream> 
//using namespace std;
//int main()
//{
//    std::stringstream stream;
//    char result[8];
//    string s = "12345678";
//    for (int i = 0; i < 8; i++)
//    {
//        result[i] = s[i];
//    } 
//    for (int i = 0; i < 8; i++)
//    {
//        cout << result[i];
//    }
//    cout << endl;
//    stream << 8888; //向stream中插入8888  
//    stream >> result; //抽取stream中的值到result 先会将result清除？？
//    std::cout << result << std::endl; // 屏幕显示 "8888"
//}




//itoa(int value, char* string, int radix);
//第一个参数：你要转化的int;
//第二个参数：转化后的char*;
//第三个参数：你要转化的进制;
//sample;
//int n = 12;
//char c[20];
//itoa(n, c, 2);
//itoa(n, c, 10);
//itoa(n, c, 16);
//c的值分别为， 11000， 12， c;
//
//#include<iostream>
//#include<Windows.h>
//
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	int n = 12;
//char c[20];
//itoa(n, c, 2);
//itoa(n, c, 10);
//itoa(n, c, 16);
////c的值分别为， 11000， 12， c;
//
//for (int i = 0; i < 20; i++)
//{
//	cout << c[i] << " ";
//}

}