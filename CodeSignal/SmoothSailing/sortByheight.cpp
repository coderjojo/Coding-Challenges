//top solution
std::vector<int> t, sortByHeight(std::vector<int> a) {
    for (x:a) if (x>-1) t.push_back(x);
    sort(begin(t), end(t));
    auto p = begin(t);
    for (x:a) if (x>-1) x = *(p++);
    return a;
}

//my
std::vector<int> sortByHeight(std::vector<int> a) {
    for(int i = 0; i < a.size()-1; i++){
        if(a[i] == -1)
        continue; 
        int min = i;

            for(int j = i+1; j < a.size(); j++){
                if(a[j] == -1)
                    continue;

                if(a[min] > a[j])
                min = j;
            }
                    int temp = a[i];
                    a[i] = a[min];
                    a[min] = temp;
            
        }

    return a;
