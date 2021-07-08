#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
 class  people

{
public:

    char id[19];                  /* 身份证号码 */
    //string id;
    int social;                     /* 社保缴纳月数 */
   // 住房面积为0，社保缴纳必须超过2年  大于24
    int area;                       /* 现有住房面积 */

   char date[11];              /* 申报日期 */
   // string data;
  // int  wz = 0;
};
 class  people2

 {
 public:

     string id;                 /* 身份证号码 */
     int wz;

     int house = 0;
     int first_wz;
     int same = 0;
 };
  

people* getMess(int& n);

bool comp_area(people p1, people p2)
{
    return p1.area < p2.area;  //  面积 升序 小的在前面
} //对于改善性需求，现有自有住房面积小者优先

bool comp_monthAndTime(people p1, people p2)
{
   // return p1.social > p2.social;

    if (p1.social == p2.social)
    {
        string a = p1.date;
        string b = p2.date;
        string year1, year2, month1, month2, day1, day2;
        year1 = a.substr(6, 4);
        year2 = b.substr(6, 4);
        month1 = a.substr(3, 2);
        month2 = b.substr(3, 2);
        day1 = a.substr(0, 2);
        day2 = b.substr(0, 2);

        if (year1 == year2)
        {
            if (month1 == month2)
            {
                return day1 < day2; //升序
            }
            return month1 < month2;
        }
        else
        {
            return year1 < year2;
        }

         //   时间升序

    }
    else
    return p1.social > p2.social;  //  月份 降序  月份大的在前面
}

bool comp_areaAndTime(people p1, people p2)
{
    // return p1.social > p2.social;

    if (p1.area==p2.area)
    {
        string a = p1.date;
        string b = p2.date;

        string year1, year2, month1, month2, day1, day2;
        year1 = a.substr(6, 4);
        year2 = b.substr(6, 4);
        month1 = a.substr(3, 2);
        month2 = b.substr(3, 2);
        day1 = a.substr(0, 2);
        day2 = b.substr(0, 2);

        if (year1 == year2)
        {
            if (month1 == month2)
            {
                return day1 < day2; //升序
            }
            return month1 < month2;
        }
        else
        {
            return year1 < year2;
        }

        //   时间升序

    }
    else
        return p1.area<p2.area;  //  月份 降序  月份大的在前面
}
//bool comp_time(people p1, people p2)
//{
//    if (p1.social == p2.social)
//    {
//        string a = p1.date;
//        string b = p2.date;
//        return a < b;
//   }
//    return p1.date < p2.date;  //   时间升序
//}
int main()

{

    people* person;          /* 指向所有报名人的基本资料首地址，通过调用函数getMess获取 */

    int n;                            /* n为报名人数，通过调用函数getMess获取 */

    person = getMess(n);
    //得到人员信息！！
    people2* Person2 = new people2[n];

    int m, T;
    cin >> m >> T;
    

   for (int i = 0; i < n; i++)
   {
       cout << person[i].id << " " << person[i].social
      << " " << person[i].area << " " 
       << person[i].date << endl;
   }

   /*110101196003076655 30 0 12-05-2015
350102200609163286 30 0 12-05-2015
430102201102181455 40 100 06-13-2015
13050220180507688X 25 85 10-08-2019
110101196003074510 80 85 10-08-2019
110101196003074525 80 85 10-08-2019
350102200609167500 50 0 01-01-2015
430102201102184250 120 25 03-13-1998
130502201805070787 60 25 05-25-2013
110101196003071176 70 40 09-15-2017
350102200609166049 44 0 02-03-2000
250310323545313434 12 0 12-06-1111
250342323545313434 5 0 02-06-1111
------------------------   
110101196003076655 30 0 12-05-2015
350102200609163286 30 0 12-05-2015
350102200609167500 50 0 01-01-2015
350102200609166049 44 0 02-03-2000
250310323545313434 12 0 12-06-1111
250342323545313434 5 0 02-06-1111

430102201102184250 120 25 03-13-1998
130502201805070787 60 25 05-25-2013
110101196003071176 70 40 09-15-2017
13050220180507688X 25 85 10-08-2019
110101196003074510 80 85 10-08-2019
110101196003074525 80 85 10-08-2019
430102201102181455 40 100 06-13-2015
对于改善性需求，现有自有住房面积小者优先  与月份无关！！
// 由于房源有限，为公平起见，开发商在不违背上述原则下
特意指定同等条件下申报时间同时作为排队的条件，时间越早优先级越高。
----------------------------------
350102200609167500 50 0 01-01-2015
350102200609166049 44 0 02-03-2000
110101196003076655 30 0 12-05-2015
350102200609163286 30 0 12-05-2015
250310323545313434 12 0 12-06-1111
250342323545313434 5 0 02-06-1111

430102201102184250 120 25 03-13-1998
130502201805070787 60 25 05-25-2013
110101196003071176 70 40 09-15-2017
13050220180507688X 25 85 10-08-2019
110101196003074510 80 85 10-08-2019
110101196003074525 80 85 10-08-2019
430102201102181455 40 100 06-13-2015
*/

   cout << "----------------------------------\n";

   sort(person, person + n, comp_area);
   for (int i = 0; i < n; i++)
   {
       cout << person[i].id << " " << person[i].social
           << " " << person[i].area << " "
           << person[i].date << endl;
   }
   int pos = 0;
   for (int i = 0; i < n; i++)
   {
       if (person[i].area == 0)
           pos = i;
       else
       {
           break; //遇到第一个非0就退出
       }
   }
   //分开了 
   sort(person, person + pos+1, comp_monthAndTime); //比较月份  后面的不比较月份 

   cout << "----------------------------------\n";
   for (int i = 0; i < n; i++)
   {
       cout << person[i].id << " " << person[i].social
           << " " << person[i].area << " "
           << person[i].date << endl;
   }

  // sort(person, person + pos + 1, comp_time); //比较月份 后面的不比较月份 

   // ...

   Person2[0].wz = 1;
   for (int i = 1; i < n; i++)
   {
       Person2[i].id = person[i].id;


        string d1 = person[i-1].date;

        string d2 = person[i].date;

        int mon1 = person[i-1].social;
        int mon2= person[i].social;
        
        int area1 = person[i - 1].area;
        int area2 = person[i].area;
        /*  //奇怪！！  直接比较就是不对！！
1  
2
3
3
4
5
6
7
8
9
9
9
10*/
       if (i < pos
           && d1==d2
           &&  mon1==mon2 ) 

       {
           Person2[i].wz = Person2[i - 1].wz; //同名的位置一样
       }
       else if (i < pos )

       {
           Person2[i].wz = Person2[i-1].wz +1;    //1开始  
         
       }  //二者只 执行一个

       if (i >= pos && d1==d2
           &&area1==area2 )

       {
           Person2[i].wz = Person2[i - 1].wz; //同名的位置一样

       }
       else if (i >= pos)
       {
           Person2[i].wz = Person2[i-1].wz + 1;
       }
   }  //得到人员排名 


   for (int i = 0; i < n; i++)
   {
       cout << Person2[i].wz << endl;
   }
   
   int house = m;  
   int Index = 1;
                
   /* 身份证号码 */
   //int wz;

   //int house;
   //int first_wz;
   //int same = 0; 
   Person2[0].first_wz = 1;

   for (int i = 0; i < n; i++)
   {
       
       if (i < pos && person[i].social>24)
       {

          
           Person2[i].house = house; //记录还剩多少房子 
           house--;
       }
       if (i >= pos && person[i].social>24)
       {

         
           Person2[i].house = house; //记录还剩多少房子 
           house--;
       }

       

   }

   for (int i = 0; i < n; i++)
   {
         cout << Person2[i].house << endl;

   }
   for (int i = 0; i < m; i++)
   {

       string num;
       cin >> num;
       for (int i = 0; i < n; i++)
       {
           if (Person2[i].id == num)
           {
               //找到人 
               if ( Person2[i].house < 1 && Person2[i].same == 0)
               {  //没有重复排名 
                   cout << "Sorry" << endl;
                   break;

               }

               if (Person2[i].house<1 && Person2[i].same>Person2[i].house)
               {
                   //
               }
           }
       }

   }

   /*
       if (Person2[i].wz != Person2[i - 1].wz)
       {
           Person2[i].first_wz = Person2[i].wz;

       }
       else
           Person2[i].first_wz = Person2[i - 1].first_wz;

   }*/


    return 0;

}

people* getMess(int& n)            /* 将文件数据读入内存 */

{

    FILE* fp;

    fp = fopen("house.bin", "rb");

    fseek(fp, -1 * (long)sizeof(int), 2);

    fread(&n, sizeof(int), 1, fp);

    rewind(fp);
    /*rewind是C 程序中的库函数。  就是文件内位置指针移动到开始位置

功 能: 将文件内部的位置指针重新指向一个流（数据流/文件）的开头。
注意：不是文件指针而是文件内部的位置指针，随着对文件的读写文件的位置指针
（指向当前读写字节）向后移动。而文件指针是指向整个文件，如果不重新赋值文件指针不会改变。
*/
      //位置指针移到初始位置
    people* tmp = new people[n];

    fread(tmp, sizeof(people), n, fp);//巧妙 每次读取结构体大小数据 读取n个人的
      //刚好对应位置存入了结构体？？
    fclose(fp);

    return tmp;

}