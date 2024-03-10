#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20],s2[20];
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    int a=strlen(s1);
    int d=strcmp(s1,s2);
    if (d==0)
    {
       for(int i=0;i<a;i++)
       {
           cout << s1 <<" ";
       }
    }
    else
    {
       cout << "Fool!";
    }

}
