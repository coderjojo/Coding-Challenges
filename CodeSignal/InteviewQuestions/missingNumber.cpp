int missingNumber(std::vector<int> arr) {
    int sum=0,rsum=0, n = arr.size();
    rsum = (n*(n+1))/2;

    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }

    return abs(rsum-sum);
}
