int adjacentElementsProduct(std::vector<int> inputArray) {
    int re,max=-10000;
    for(int i=0; i<inputArray.size()-1; i++){
        re = inputArray[i]*inputArray[i+1];
            if(re>=max)
                max = re;
    }
    return max;
}
