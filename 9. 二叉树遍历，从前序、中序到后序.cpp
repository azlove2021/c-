//35.二叉树遍历，从前序、中序到后序
#include <iostream>
using namespace std;

//void getHou(string qian, string zhong)
//{
//    if (qian.length() < 1) //限制
//    {
//        return;
//    }
//    string data = qian.substr(0, 1);               //前序遍历的开头一定是根结点
//    string::size_type findData = zhong.find(data); //在中序遍历中找到根结点的位置
//    int posi = findData;                           //位置
//    //后序遍历：左子树->右子树->根结点
//    getHou(qian.substr(1, posi), zhong.substr(0, posi));   //遍历左子树
//    getHou(qian.substr(posi + 1), zhong.substr(posi + 1)); //遍历右子树
//    cout << data;                                          //根结点
//}

//主要利用递归的性质 和后续遍历的方法 //后序遍历：左子树->右子树->根结点  和遍历是差不多 注意代码顺序
//  str.subset（start，length) 起始位置 和长度 length  length超了或缺省 都会延续到末尾！！！！！！！！！

void Predict_PostOrder(string qian,string zhong)
{
    if (qian.length() == 1|| qian.length() == 0)  //经过调试发现还有这种可能 length为0！！！
    {
        cout << qian;
        return;
    }
    string str = qian.substr(0,1); //获取根节点！！
    //然后在 中序遍历里面找到 根节点 分割
    int pos = zhong.find(str); //0开始？？
    int l = qian.length();
    //关键代码 递归分割 
    //很多时候代码都具有对称性！！！！！！！！！  subset(小，大） 相等时就是读取那一个字符!!

       if(pos!=0)
           Predict_PostOrder(qian.substr(1, pos ), zhong.substr(0, pos)); //左开右闭?? //划分了左区间 
                //只是起始位置不同 字符数一样！！
      if(pos!=l)
          Predict_PostOrder(qian.substr(pos+1, l), zhong.substr(pos+1, l)); //划分右边？？
    
          //虽然 字符数超过了 但没有影响 只会延续到末尾！！
    cout << zhong[pos];

      //思想有点像归并划分 左右  先把左边的划分到尽头！！ 就输出左边的数字 然后一步一步往前面返回时 输出右边 字母
      //最后才输出 中间的根节点！！
    //就是那么的巧  刚好能够划分左右！！！！！！！！！！！
    
    

}
    
int main()
{ //这题应该是要求数据结果一次性输出！！！！！！！！！！！！！！！  不用一次性输出！！

    int n;
    string qian, zhong;
    while (1)
    {
        cin >> n;
        if (n == 0) break;

        cin >> qian >> zhong; //输入前序遍历、中序遍历
       Predict_PostOrder(qian, zhong);  //得到后序遍历的结果
        cout << endl;  
    }
    return 0;
}

 //代码在这里运行没有问题 在dev c++ 第三个数据会错误 dcba-》  d c b a
// //经过调试发现还有这种可能 length为0！！！  str=="" 时 dev输出是" " 空格！！！！！！！




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
