#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define All(x) x.begin(), x.end()

int main(void){
    string s;
    cin >> s;
    vector<string> md;
    while(s != "#"){
        md.push_back(s);
        cin >> s;
    }
    reverse(All(md));
}