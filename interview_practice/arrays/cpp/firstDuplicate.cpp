int firstDuplicate(std::vector<int> a) {
    std::vector<int> tmp(a.size()+1, 0);
    for(int i = 0; i < a.size(); i++) {
        if(tmp[a[i]] != 0) {
            return a[i];
        }
        tmp[a[i]] = -1;
    }
    return -1;
}
