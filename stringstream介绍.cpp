//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//int main()
//{
//    ostringstream ostr;
//    //ostr.str("abc");//��������ʱ���������ַ�������,��ô����������ʱ�򲻻�ӽ� β��ʼ����,�����޸�ԭ������,�����Ĳ������� 
//    ostr.put('d');
//    ostr.put('e');
//    ostr << "fg";
//
//    string gstr = ostr.str();
//    cout << gstr;
//    system("pause");
//}



//����һ��������������ת������ intתstring
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
//    stream << i; //��int������
//    stream >> result;  //ʵ���� stream����� 1000����result�� stream�����û�������ˣ���ֻ����һ����һ������~~~~~
//
//    stream.clear();
//    stream << i; //��int������
//    stream >> a; //��stream�г�ȡǰ������intֵ
// 
//
//    std::cout << result << std::endl; // print the string "1000"
//    std::cout <<a << std::endl; // print the string "1000"
//    cout << a + 1 << endl;  
//    //���   ͨ��stringstream ���԰��ַ����� string 1000ת��Ϊ int���͵�1000
//
//    stringstream ss;
//    ss.clear();
//    ss << oct << result;
//    int temp;      //Ҫ��ת��Ϊ8���Ʊ�����int���ͽ��� !!! string���ͽ��յĻ�����1000
//    ss >> temp;
//    cout << temp;
//}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


//���Ӷ������˻������͵�ת����Ҳ֧��char *��ת����
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
//    stream << 8888; //��stream�в���8888  
//    stream >> result; //��ȡstream�е�ֵ��result �ȻὫresult�������
//    std::cout << result << std::endl; // ��Ļ��ʾ "8888"
//}




//itoa(int value, char* string, int radix);
//��һ����������Ҫת����int;
//�ڶ���������ת�����char*;
//��������������Ҫת���Ľ���;
//sample;
//int n = 12;
//char c[20];
//itoa(n, c, 2);
//itoa(n, c, 10);
//itoa(n, c, 16);
//c��ֵ�ֱ�Ϊ�� 11000�� 12�� c;
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
////c��ֵ�ֱ�Ϊ�� 11000�� 12�� c;
//
//for (int i = 0; i < 20; i++)
//{
//	cout << c[i] << " ";
//}

}