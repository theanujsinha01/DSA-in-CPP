#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(strs.empty()){
            return "";
        }
            string commonPrefix = strs[0];
            for(int i=0;i<n;i++){
                int j=0;
                while(j<commonPrefix.size() && j<strs[i].size()){
                    if(commonPrefix[j] != strs[i][j]){
                        break;
                    }
                    else{
                    j++;
                }
            }
            commonPrefix = commonPrefix.substr(0,j);
            if(commonPrefix.empty()){
                return "";
            }
        }
        return commonPrefix;

    }
int main() {
    vector<string> strs;
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;

    cout << "Enter the strings: " << endl;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strs.push_back(s);
    }

    string result = longestCommonPrefix(strs);

    if (result.empty()) {
        cout << "There is no common prefix." << endl;
    } else {
        cout << "Longest common prefix: " << result << endl;
    }

    return 0;
}