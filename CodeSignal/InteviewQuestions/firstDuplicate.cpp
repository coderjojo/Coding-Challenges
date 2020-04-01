int firstDuplicate(std::vector<int> a) {
  map<int, int> mp;
  map<int,int>::iterator it;
   for(int i = 0; i < a.size(); i++){
    it = mp.find(a[i]);
    if(it != mp.end()){
    return a[i];
    }
    else
    mp.emplace(a[i],1);
    }
    return -1;

  
}
