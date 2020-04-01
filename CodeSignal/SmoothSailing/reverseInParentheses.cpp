#include<bits/stdc++.h>
#include<string.h>
using namespace std;



string revS(string s){
  string s1;
    stack<char> stk;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
        while(s[i] != ')'){
            if(s[++i] == '('){

                while(s[i] != ')')
                    s1.push_back(s[i]);
            }
            stk.push(s[++i]);
        }
        while(!stk.empty()){
            if(stk.top() != ')' && stk.top() != '(')
            s1.push_back(stk.top());
            stk.pop();
        }
        }

        if(s[i] != '(' && s[i] != ')')
        s1.push_back(s[i]);
    }

    return s1; 
   
}

int main(int argc, char const *argv[])
{
    string s = "foo(bar(baz))blim";

    string ans = "foobazrabblim";
    s = revS(s);
    if(s == ans)
        cout<<1;
    else{
        cout<<0<<endl;
        cout<<s;
    }


    return 0;
}

string reverseInParentheses(string s) {
    int a,b;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')
            a = i;
        if(s[i] == ')')
        {
            b = i;
            string t = s.substr(a + 1, b - a - 1);
            reverse(t.begin(), t.end());
            return reverseInParentheses(s.substr(0, a) + t + s.substr(b + 1));
        }
    }
    return s;
}