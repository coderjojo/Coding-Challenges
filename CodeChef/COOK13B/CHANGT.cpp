#include <bits/stdc++.h>
using namespace std;

int main()
{
		//std::ios::sync_with_stdio(false);
	int Tc;
	cin>>Tc;
		//cin.ignore(); //must be there when using getline(cin, s)
	while(Tc--)
		{
			int n;
			cin>>n;

			int arr[n];
			int freq[101] = {0};

			for(int i = 0; i < n; i++){
				cin>>arr[i];
				freq[arr[i]]++;
			}

			sort(freq, freq+101);
			cout<<n-freq[100]<<endl;
		}

	return 0;
}
