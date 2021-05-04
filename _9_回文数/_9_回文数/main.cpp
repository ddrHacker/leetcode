#include<iostream>
#include<string>
using namespace std;

//倒序
bool isPalindrome1(int x) 
{

    if (x < 0)  return 0;
    if (x == 0)    return 1;
    long ret = 0;
    int y = x;
    while (x)
    {
         ret = ret * 10 + x % 10;
         x = x / 10;
    }

    return ret == y;
}

//转成string实现
bool isPalindrome2(int x)
{
    string str = to_string(x);
    int first = 0;
    int last = str.size()-1;
    while (first < last)
    {
        if (str[last] != str[last])return false;
        else
        {
            first++;
            last--;
        }
    }
    return true;
}


int main() 
{
    int num = 1234321;
    cout << isPalindrome1(num) << endl;
    cout << isPalindrome2(num) << endl;
    return 0;
}