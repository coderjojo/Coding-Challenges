vector<int> DisappearanceOfIntegers (vector<int> a, int Q, vector<int> M,vector<long long int> t,int n){
    vector<int>ans;
    long long int k = a.size()*4,z;
    int temp;
    for(int i=0;i<Q;i++){
        int res=0;
        z = t[i]%k;
        if(z<n){
            temp = M[i]+z-1;
            if(temp>=0 && temp < n){
                res = a[temp];
            }else{
                res = -1;
            }
        }else if(z<2*n){
            if(M[i]<=z-n){
                if(M[i]-1>=0 && M[i]-1<n){
                    res = a[M[i]-1];
                }else{
                    res = -1;
                }
            }else{
                res = -1;
            }
        }else if(z<3*n){
            z = z-2*n;
            temp = M[i]+z-1;
            if(temp>=0 && temp < n){
                res = a[temp];
            }else{
                res = -1;
            }
        }else{
            z = z-2*n;
            if(M[i]<=z-n){
                if(M[i]-1>=0 && M[i]-1<n){
                    res = a[M[i]-1];
                }else{
                    res = -1;
                }
            }else{
                res = -1;
            }
        }
        ans.push_back(res);
    }
    return ans;
}