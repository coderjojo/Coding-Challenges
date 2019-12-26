bool checkPalindrome(std::string inputString) {
    int i,j=inputString.length()-1;
    bool flag=1;
    for(i=0; i<inputString.length(); i++){
        if(inputString[i]!=inputString[j]){
            flag = 0;
            break;
        }
        --j;
    }
    if(flag)
        return true;
    else
        return false;
    
}
