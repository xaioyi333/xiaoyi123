//YangHuisanjiao �����������������
#include<iostream>
using namespace std;
#define N 35
//a[0][0]û�������������Ӱ�� 
int main()
{
    int a[N][N];
    int n, i, j;
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= i;j++)//ʹ��i��Լ��j����ֵ
        {
            if (i == j || j == 1)//ÿ�����׻���β��Ϊ1
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];//i,jҪ��1��ʼ 

         

            cout << a[i][j];
               cout << " ";
        }
        cout << endl;
    }

    return 0;
}
