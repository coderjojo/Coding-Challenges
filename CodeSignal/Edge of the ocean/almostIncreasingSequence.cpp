
bool almostIncreasingSequence(std::vector<int> a) {
    int c = 0, s;
    for(int i = 1; i < a.size(); i++){
        if(a[i-1] >= a[i]){
            s = i;
            ++c;
        }
    }
    
    if(c>1) return 0;
    if(c == 0) return 1;
    
    if(a[s-1] < a[s+1]) return 1;
    if(a[s-2] < a[s]) return 1;
    if(s == a.size()-1 || s == 1) return 1;
    
    return 0;
}

