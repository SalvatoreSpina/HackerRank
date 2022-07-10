/*
There is a collection of input strings and a collection of query strings.
For each query string, determine how many times it occurs in the list of input strings.
Return an array of the results.
*/

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    map<string, int> maps;
    vector<int> vec;
    int count = 0;
    for (string str : queries) {
        count = 0;
        for (string s : strings) {
            if (str == s)
                count++;
        }
        vec.push_back(count);    
    }
    return vec;
}