//top Solution
int commonCharacterCount(std::string s1, std::string s2) {
    int count1[26] = {0};
    int count2[26] = {0};
    
    for(char c: s1) ++count1[c-'a'];
    for(char c: s2) ++count2[c-'a'];
    
    int ret = 0;
    for(int i=0; i<26; ++i)
        ret += min(count1[i],count2[i]);
    
    return ret;
}


//My

int commonCharacterCount(std::string s1, std::string s2) {
    int res  = 0;

    for(int i = 0; i < s1.length(); i++){
        for(int j = 0; j < s2.length(); j++){
            if(s1[i] == s2[j]){
                res++;
                s2[j] = ' '; 
        break;     
            }
        }
    }
    return res;

}

//with map
int commonCharacterCount(std::string s1, std::string s2) {
map<int,int> resultTable1;
map<int,int> resultTable2;
int sum = 0;

for(int i=0;i<s1.size();i++){
    resultTable1[s1.at(i)]++;
}
for(int i=0;i<s2.size();i++){
    resultTable2[s2.at(i)]++;
}

for(int i='a';i<='z';i++){
    sum += min(resultTable1[i],resultTable2[i]);
}

return sum;
