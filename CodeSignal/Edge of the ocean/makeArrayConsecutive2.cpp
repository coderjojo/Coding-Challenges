int makeArrayConsecutive2(std::vector<int> statues) {
    int diff=0;
    int n=statues.size();
    sort(statues.begin(), statues.end()); 
    diff = ((statues.back()- statues.front()) - (n-1));
    return diff;
}