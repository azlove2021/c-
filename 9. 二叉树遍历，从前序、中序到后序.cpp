//35.��������������ǰ�����򵽺���
#include <iostream>
using namespace std;

//void getHou(string qian, string zhong)
//{
//    if (qian.length() < 1) //����
//    {
//        return;
//    }
//    string data = qian.substr(0, 1);               //ǰ������Ŀ�ͷһ���Ǹ����
//    string::size_type findData = zhong.find(data); //������������ҵ�������λ��
//    int posi = findData;                           //λ��
//    //���������������->������->�����
//    getHou(qian.substr(1, posi), zhong.substr(0, posi));   //����������
//    getHou(qian.substr(posi + 1), zhong.substr(posi + 1)); //����������
//    cout << data;                                          //�����
//}

//��Ҫ���õݹ������ �ͺ��������ķ��� //���������������->������->�����  �ͱ����ǲ�� ע�����˳��
//  str.subset��start��length) ��ʼλ�� �ͳ��� length  length���˻�ȱʡ ����������ĩβ������������������

void Predict_PostOrder(string qian,string zhong)
{
    if (qian.length() == 1|| qian.length() == 0)  //�������Է��ֻ������ֿ��� lengthΪ0������
    {
        cout << qian;
        return;
    }
    string str = qian.substr(0,1); //��ȡ���ڵ㣡��
    //Ȼ���� ������������ҵ� ���ڵ� �ָ�
    int pos = zhong.find(str); //0��ʼ����
    int l = qian.length();
    //�ؼ����� �ݹ�ָ� 
    //�ܶ�ʱ����붼���жԳ��ԣ�����������������  subset(С���� ���ʱ���Ƕ�ȡ��һ���ַ�!!

       if(pos!=0)
           Predict_PostOrder(qian.substr(1, pos ), zhong.substr(0, pos)); //���ұ�?? //������������ 
                //ֻ����ʼλ�ò�ͬ �ַ���һ������
      if(pos!=l)
          Predict_PostOrder(qian.substr(pos+1, l), zhong.substr(pos+1, l)); //�����ұߣ���
    
          //��Ȼ �ַ��������� ��û��Ӱ�� ֻ��������ĩβ����
    cout << zhong[pos];

      //˼���е���鲢���� ����  �Ȱ���ߵĻ��ֵ���ͷ���� �������ߵ����� Ȼ��һ��һ����ǰ�淵��ʱ ����ұ� ��ĸ
      //������� �м�ĸ��ڵ㣡��
    //������ô����  �պ��ܹ��������ң���������������������
    
    

}
    
int main()
{ //����Ӧ����Ҫ�����ݽ��һ�������������������������������������  ����һ�����������

    int n;
    string qian, zhong;
    while (1)
    {
        cin >> n;
        if (n == 0) break;

        cin >> qian >> zhong; //����ǰ��������������
       Predict_PostOrder(qian, zhong);  //�õ���������Ľ��
        cout << endl;  
    }
    return 0;
}

 //��������������û������ ��dev c++ ���������ݻ���� dcba-��  d c b a
// //�������Է��ֻ������ֿ��� lengthΪ0������  str=="" ʱ dev�����" " �ո񣡣�����������




/*
8
12457836
42758136
47852631
4
abcd
abcd
dcba
4
abcd
dcba
dcba
0

8
12457836
42758136
47852631
4
abcd
abcd
dcba
4
abcd
dcba
dcba
0

*/ 
