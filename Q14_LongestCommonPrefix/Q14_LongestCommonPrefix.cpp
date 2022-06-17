#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix (vector<string>& strs) {
    string common = "";

    for (int iO = 0; iO < strs[0].length(); iO++) {
        //string first = strs[0];

        int commonLetters = 0;

        for (int iI = 1; iI < size(strs); iI++) {
            //string second = strs[iI];
            if (strs[0][iO] == strs[iI][iO]) {
                commonLetters++;
            }
        }

        if (common.length() == iO) {
            if (commonLetters == (int)size(strs) - 1) {
                common += strs[0][iO];
            }
        }
    }

    return common;
}

int main()
{
    vector<string> s = { "flower", "flow", "flight" };

    cout << longestCommonPrefix(s);
}