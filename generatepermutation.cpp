#include <iostream>
#include <cstring>
using namespace std;
void rearrange(string, int n, int len);
void normal(string s);
void swap(string, int a, int b);
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"the possible combinations are"<<endl;
    rearrange(str, str.length(), str.length());
    return 0;
}
void rearrange(string s, int n, int len)
{
    if (n >3)
    {
        int i;
        for (i = (len-n); i < len; i++)
        {
            char temp;
            temp = s[i];
            s[i] = s[0];
            s[0] = temp;
            rearrange(s, n - 1, len);
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
}
void swap(string s, int a, int b)
{
    char temp;
    temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    cout << s << endl;
}
