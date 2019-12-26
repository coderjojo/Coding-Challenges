//past solved problems

int centuryFromYear(int year) {
    int temp,cen=1;
    cen = year/100;
    temp=year%100;
    if (temp>0)
    cen++;
    return cen;
    
}
