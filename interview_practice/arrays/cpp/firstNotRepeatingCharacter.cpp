char firstNotRepeatingCharacter(std::string s) {
    int arr[256]={0};
    for(int j = 0; j < s.size(); j++) {
        arr[s[j]]++;
    }
    for(int j = 0; j < s.size(); j++) {
        if(arr[s[j]]==1) {
            return s[j];
        }
    }
    return '_';
}
