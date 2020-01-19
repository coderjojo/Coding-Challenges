/*
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. 
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for(int t=0;t<T;t++) {
			int S = sc.nextInt();
			int w1 = sc.nextInt();
			int w2 = sc.nextInt();
			int w3 = sc.nextInt();

			if(w1+w2+w3<=S)
				System.out.println(1);

			else if(w1+w2>S) {
				if(w2+w3<=S)
					System.out.println(2);
				else
					System.out.println(3);
			}

			else
				System.out.println(2);
		}
	}
} */


	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int s,w1,w2,w3;

			cin>>s>>w1>>w2>>w3;

			if(w1+w2+w3<=s)
            cout<<1<<endl;
        	else if(w1+w2<=s||w2+w3<=s)
            cout<<2<<endl;
        	else 
            cout<<3<<endl;

		}
		return 0;
	}
