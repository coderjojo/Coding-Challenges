#include<iostream>
using namespace std;

int intVal (string s1, int s){
		int n = 0;
		for(int i = 0; i < s; i++)
			//n = 2*n + (s1[i] - '0');
			if(s1[i] == '1')
				n++;
		return n;
}


int main(){
	int tc;
	cin>>tc;

	while(tc--){
		string s, s1;
		int c = 0, temp, ct=0, f = 0;
		cin>>s>>s1;

		while(s.length() != s1.length()){
			if(s.length() > s1.length())
				s1 = '0' + s1;
			else
				s = '0' + s;
		}

		s = '0' + s;
		s1 = '0' + s1;

		//int a = intVal(s);
		 
		int sz = s.length();;
		

		/*
		11111011000
		110111001101

		3
		*/

		//Maybe its issue about carry propagation 
		//tally answer with normal bruteforce solution
		for(int i = sz-1; i >= 0;){
			if(s[i] == s1[i] && s1[i] == '1'){
				f = 1;
				++c;
				i--;
				while(s[i] != s1[i] && i>=0){
					++c;
					i--;
				}
				ct = max(ct, c);
				c = 0;
			}
			if(f)f = 0;
			else i--;
		}
		++ct;

		if(intVal(s1, s1.length()))
		cout<<ct<<endl;
		else
		cout<<0<<endl;

	}
}