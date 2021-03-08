//
//  main.cpp
//  PerfectString
//
//  Created by Duy Trần on 3/8/21.
//

#include<iostream>
#include<string>

using namespace std;
string eraser_space(string s)
{
    while (s[0] == ' ') {
        s.erase(0,1);
    }
    while (s[s.size()-1] == ' '){
        s.erase(s.size()-1, 1);
    }
    while (s.find("  ") != -1) {
        s.erase(s.find("  "), 1);
    }
    
    return s;
}
int main()
{
    int T;
    cin >> T;
    string s;
    getline(cin, s);
    for (int i = 0; i < T; i++) {
        getline(cin, s);
        cout << eraser_space(s) << endl;

    }
    return 0;
}
