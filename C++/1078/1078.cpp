/*
 * @Author: your name
 * @Date: 2022-04-19 14:11:59
 * @LastEditTime: 2022-04-19 14:31:06
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \cpp\1078\1078.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int N;
    int sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (N % 2 == 0)
            sum = sum + a[i][i] + a[i][N - 1 - i];
        else if (i == N - 1 - i)
        {
            sum = sum + a[i][i];
        }
        else
            sum = sum + a[i][i] + a[i][N - 1 - i];
    }
    cout << sum << endl;
}