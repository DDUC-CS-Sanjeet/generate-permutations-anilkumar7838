#include <iostream>
#include <cstring>
using namespace std;
void rerange(string, int n, int len);
void normal(string s);
void swap(string, int a, int b);
string make(int n)
{
    int i = 0;
    string str="";
    char temp = 'a';
    for (i = 0; i < n; i++)
    {
        str+=temp;
        temp++;
    }
    cout << str << endl;
    return str;
}
int count = 0;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    string str;
    str = make(n);
    cout<<"the possible combinations are"<<endl;
    rerange(str, str.length(), str.length());
    cout << "\nthe total number of combinations are:" << count << endl;
    return 0;
}
void rerange(string s, int n, int len)
{
    if (n > 3)
    {
        int i;
        for (i = (len - n); i < len; i++)
        {
            char temp;
            temp = s[i];
            s[i] = s[0];
            s[0] = temp;
            rerange(s, n - 1, len);
        }
    }
    else
    {
        char temp;
        int i;
        for (i = (len - 3); i < len; i++)
        {

            temp = s[len - 3];
            s[len - 3] = s[i];
            s[i] = temp;
            normal(s);
            swap(s, len - 2, len - 1);
        }
    }
}
void normal(string s)
{
    cout << s << endl;
    count++;
}
void swap(string s, int a, int b)
{
    char temp;
    temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    cout << s << endl;
    count++;
}
