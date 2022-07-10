/*
A pangram is a string that contains every letter of the alphabet.
Given a sentence determine whether it is a pangram in the English alphabet.
Ignore case. Return either pangram or not pangram as appropriate.
*/

string pangrams(string s) {
    set<char> alpha;
    string str;
    for (char c : s) {
        if (isalpha(c))
            alpha.insert(tolower(c));
    }
    str = alpha.size() == 26 ? "pangram" : "not pangram";
    return str;
}
