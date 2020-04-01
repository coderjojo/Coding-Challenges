//top solution
bool isLucky(int n) {
    int digits = (int)log10(n) + 1;
    int sum1 = 0, sum2 = 0;
    
    
    for (int x = 0; n > 0; n /= 10, x++) {
        if (x < digits / 2)
            sum1 += n % 10;
        else
            sum2 += n % 10;
    }
    
    return sum1 == sum2;
}

//my sol
bool isLucky(int n) {
  vector<int> v; 
  while(n>0){
      v.push_back(n%10);
      n = n/10;
  }
  int f_half=0, s_half=0, half = v.size()/2;


  for (int i = 0; i < half; i++)
  f_half += v[i];

  for(int i = half; i < v.size(); i++)
  s_half += v[i];

   //cout<<f_half<<s_half; 
  return(f_half == s_half);

   
}


