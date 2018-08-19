string mySort(string temp){
    vector<int> str;
    for(int i = 0; i < temp.size(); i++){
        str.push_back((int)temp[i]);
    }
    sort(str.begin(), str.end());
    string ans = "";
    for(int i = 0; i < str.size(); i++){
        ans = ans + (char)str[i];
    }
    
    return ans;
}

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > sol;
    unordered_map<string, vector<int> > myMap;
    
    for(int i = 0; i < A.size(); i++){
        string temp = mySort(A[i]);
        myMap[temp].push_back(i+1);
    }
    
    auto it = myMap.begin();
    
    while(it != myMap.end()){
        sol.push_back(it->second);
        it++;
    }

    return sol;
}
