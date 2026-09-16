class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string token;
        stringstream ss(path);

        while (getline(ss, token, '/')) {
        if (token == "" || token == ".") {
            continue;
        }
        else if (token == "..") {
            if (!st.empty()) st.pop(); 
        } 
        else {
            st.push(token); 
        }
    }

    vector<string> dirs;
    while (!st.empty()) {
        dirs.push_back(st.top());
        st.pop();
    }

    reverse(dirs.begin(), dirs.end());
    string result = "/";
    for (int i = 0; i < dirs.size(); i++) {
        result += dirs[i];
        if (i != dirs.size() - 1) result += "/";
    }

    return result;


        
    }
};