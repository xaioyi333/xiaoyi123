//YangHuisanjiao 输入行数，输出三角
#include<iostream>
using namespace std;
#define N 35
//a[0][0]没有输出，所以无影响 
int main()
{
    int a[N][N];
    int n, i, j;
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= i;j++)//使用i来约束j的数值
        {
            if (i == j || j == 1)//每行行首或行尾均为1
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//i,j要从1开始 

         

            cout << a[i][j];
               cout << " ";
        }
        cout << endl;
    }

    return 0;
}
