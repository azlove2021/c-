#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
 class  people

{
public:

    char id[19];                  /* ���֤���� */
    //string id;
    int social;                     /* �籣�������� */
   // ס�����Ϊ0���籣���ɱ��볬��2��  ����24
    int area;                       /* ����ס����� */

   char date[11];              /* �걨���� */
   // string data;
  // int  wz = 0;
};
 class  people2

 {
 public:

     string id;                 /* ���֤���� */
     int wz;

     int house = 0;
     int first_wz;
     int same = 0;
 };
  

people* getMess(int& n);

bool comp_area(people p1, people p2)
{
    return p1.area < p2.area;  //  ��� ���� С����ǰ��
} //���ڸ�����������������ס�����С������

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
                return day1 < day2; //����
            }
            return month1 < month2;
        }
        else
        {
            return year1 < year2;
        }

         //   ʱ������

    }
    else
    return p1.social > p2.social;  //  �·� ����  �·ݴ����ǰ��
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
                return day1 < day2; //����
            }
            return month1 < month2;
        }
        else
        {
            return year1 < year2;
        }

        //   ʱ������

    }
    else
        return p1.area<p2.area;  //  �·� ����  �·ݴ����ǰ��
}
//bool comp_time(people p1, people p2)
//{
//    if (p1.social == p2.social)
//    {
//        string a = p1.date;
//        string b = p2.date;
//        return a < b;
//   }
//    return p1.date < p2.date;  //   ʱ������
//}
int main()

{

    people* person;          /* ָ�����б����˵Ļ��������׵�ַ��ͨ�����ú���getMess��ȡ */

    int n;                            /* nΪ����������ͨ�����ú���getMess��ȡ */

    person = getMess(n);
    //�õ���Ա��Ϣ����
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
���ڸ�����������������ס�����С������  ���·��޹أ���
// ���ڷ�Դ���ޣ�Ϊ��ƽ������������ڲ�Υ������ԭ����
����ָ��ͬ���������걨ʱ��ͬʱ��Ϊ�Ŷӵ�������ʱ��Խ�����ȼ�Խ�ߡ�
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
           break; //������һ����0���˳�
       }
   }
   //�ֿ��� 
   sort(person, person + pos+1, comp_monthAndTime); //�Ƚ��·�  ����Ĳ��Ƚ��·� 

   cout << "----------------------------------\n";
   for (int i = 0; i < n; i++)
   {
       cout << person[i].id << " " << person[i].social
           << " " << person[i].area << " "
           << person[i].date << endl;
   }

  // sort(person, person + pos + 1, comp_time); //�Ƚ��·� ����Ĳ��Ƚ��·� 

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
        /*  //��֣���  ֱ�ӱȽϾ��ǲ��ԣ���
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
           Person2[i].wz = Person2[i - 1].wz; //ͬ����λ��һ��
       }
       else if (i < pos )

       {
           Person2[i].wz = Person2[i-1].wz +1;    //1��ʼ  
         
       }  //����ֻ ִ��һ��

       if (i >= pos && d1==d2
           &&area1==area2 )

       {
           Person2[i].wz = Person2[i - 1].wz; //ͬ����λ��һ��

       }
       else if (i >= pos)
       {
           Person2[i].wz = Person2[i-1].wz + 1;
       }
   }  //�õ���Ա���� 


   for (int i = 0; i < n; i++)
   {
       cout << Person2[i].wz << endl;
   }
   
   int house = m;  
   int Index = 1;
                
   /* ���֤���� */
   //int wz;

   //int house;
   //int first_wz;
   //int same = 0; 
   Person2[0].first_wz = 1;

   for (int i = 0; i < n; i++)
   {
       
       if (i < pos && person[i].social>24)
       {

          
           Person2[i].house = house; //��¼��ʣ���ٷ��� 
           house--;
       }
       if (i >= pos && person[i].social>24)
       {

         
           Person2[i].house = house; //��¼��ʣ���ٷ��� 
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
               //�ҵ��� 
               if ( Person2[i].house < 1 && Person2[i].same == 0)
               {  //û���ظ����� 
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

people* getMess(int& n)            /* ���ļ����ݶ����ڴ� */

{

    FILE* fp;

    fp = fopen("house.bin", "rb");

    fseek(fp, -1 * (long)sizeof(int), 2);

    fread(&n, sizeof(int), 1, fp);

    rewind(fp);
    /*rewind��C �����еĿ⺯����  �����ļ���λ��ָ���ƶ�����ʼλ��

�� ��: ���ļ��ڲ���λ��ָ������ָ��һ������������/�ļ����Ŀ�ͷ��
ע�⣺�����ļ�ָ������ļ��ڲ���λ��ָ�룬���Ŷ��ļ��Ķ�д�ļ���λ��ָ��
��ָ��ǰ��д�ֽڣ�����ƶ������ļ�ָ����ָ�������ļ�����������¸�ֵ�ļ�ָ�벻��ı䡣
*/
      //λ��ָ���Ƶ���ʼλ��
    people* tmp = new people[n];

    fread(tmp, sizeof(people), n, fp);//���� ÿ�ζ�ȡ�ṹ���С���� ��ȡn���˵�
      //�պö�Ӧλ�ô����˽ṹ�壿��
    fclose(fp);

    return tmp;

}