/*
 * @Author: your name
 * @Date: 2022-03-30 12:18:11
 * @LastEditTime: 2022-03-30 12:24:43
 * @LastEditors: Please set LastEditors
 * @Description: ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: \cpp\1166\1166.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int list[3];
    int temp = 0;
    cin >> list[0] >> list[1] >> list[2];
    if (list[1] <= list[0])
    {
        temp = list[0];
        list[0] = list[1];
        list[1] = temp;
    }
    if (list[2] <= list[1])
    {
        temp = list[1];
        list[1] = list[2];
        list[2] = temp;
    }
    cout << list[0] << " " << list[1] << " " << list[2] << endl;
    return 0;
}
