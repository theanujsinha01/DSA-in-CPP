#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerToLeft(vector<int>& heights) {
    int n = heights.size();
    vector<int> result;  // To store the results
    stack<pair<int, int>> s;  // Stack to store elements

    // Traverse from Left to Right
    for (int i = 0; i < n; i++) {
        // Pop elements from stack until we find a smaller element or stack is empty
        while (!s.empty() && s.top().first >= heights[i]) {
            s.pop(); 
        }
        
        if (s.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(s.top().second);
        }
    
        
        // Push the current element to the stack
        s.push({heights[i],i});
    }

    return result;
}
vector<int> nearestSmallerToRight(vector<int>& heights) {
    int n = heights.size();
    vector<int> result(n);  // To store the results
    stack<pair<int,int>> s;  // Stack to store elements

    // Traverse from Right to Left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from stack until we find a smaller element or stack is empty
        while (!s.empty() && s.top().first >= heights[i]) {
            s.pop(); 
        }
        
        // If stack is empty, no smaller element, otherwise it's the stack's top
        if (s.empty()) {
            result[i] = -1;
        } else {
            result[i] = s.top().second;
        }
        
        // Push the current element to the stack
        s.push({heights[i], i});
    }
 

    return result;
}

int maxHistogramArea(vector<int>& heights) {
    int n = heights.size();

    vector<int>left = nearestSmallerToLeft(heights);
    vector<int>right = nearestSmallerToRight(heights);

    vector<int>width(n);
    for(int i=0; i<n; i++){
        width[i] = (right[i] - left[i])-1;
    }

    vector<int>area(n);
    for(int i=0; i<n; i++){
        area[i] = heights[i]*width[i];
    }

    int max_area = INT_MIN;
    for(int  i=0; i<n; i++){
        max_area = max(max_area, area[i]);
    }

    return max_area;
   
}

int main() {
    vector<int> histogram = {6, 2, 5, 4, 5, 1, 6};
    int Max_area = maxHistogramArea(histogram);
    cout << "Maximum Area in Histogram: " << Max_area << endl;
    return 0;
}
