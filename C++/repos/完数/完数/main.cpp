#include<stdio.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, s, n;  /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
    cout << "请输入数值的范围";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        s = 0;  /*保证每次循环时s的初值为0*/
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)  /*判断j是否为i的因子*/
                s = s + j;
        }
        if (s == i)  /*判断因子这和是否和原数相等*/
            cout << "it's a perfect number:" << i << endl;
    }
    return 0;
}