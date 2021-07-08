#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
int main()
{


    double  x1, x2, x3;
    double   y1, y2, y3;
    /*海伦公式    
formula
公式描述：公式中a，b，c分别为三角形三边长，p为半周长，S为三角形的面积*/


    while (1)
    {


        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if (x1 ==0&&x2==0&&x3==0&& y1 ==0&& y2==0&&y3==0)
        {

            return 0;
        }

        double arr[3][2];
        arr[0][0] = x2 - x1;
        arr[0][1] = y2 - y1;

        arr[1][0] = x3 - x1;
        arr[1][1] = y3 - y1;

        double S = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
        S /= 2;
        S = abs(S); //绝对值
        printf("%0.6lf\n", S);
        // cout << S << endl;
    }
   
       system("pause");
       return 0;	
}
/*

*/ 
