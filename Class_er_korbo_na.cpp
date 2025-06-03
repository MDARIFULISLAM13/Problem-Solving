/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2025
 * time : 17:44:56
 * Topic Name : Class_er_korbo_na
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' && (s[i - 1] == 'P' && s[i - 2] == 'P'))
            s[i] = 'P';
    }

    for(auto i : s){
        if(i=='A')
            ++cnt;
    }
    cout << cnt;
    return 0;
}