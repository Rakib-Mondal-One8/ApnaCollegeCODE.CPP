#include<bits\stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '*' || c == '/')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfixEvaluation(string s)
{
    stack<int> st;
    string res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            res+=s[i];
        }
        else if(s[i]=='(')
        {
            st.push('(');
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && prec(s[i])<prec(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }

    return res;


}

int main ()
{
   cout<<infixToPostfixEvaluation("(a-b/c)*(a/k-l)");
}
//(a-b/c)*(a/k-l);