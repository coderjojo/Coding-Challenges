#include<bits/stdc++.h>
using namespace std;

string & removeDuplicate(string& str)
{
  int length = str.length();
  for( int i = 0; i < length; i++)
  {
    char currChar = str[i]; 
    for( int j = i+1; j < length; j++)
    {
      if(currChar == str[j])
        str.erase (std::remove(str.begin()+j, str.end(), str[j]), str.end());
    }
  }
  return str;
}

int main()
{
  int tc;
  cin>>tc;
  while(tc--){
    string str;
    cin>>str;
    str = removeDuplicate(str);
    cout<<str<<endl;
  }
}