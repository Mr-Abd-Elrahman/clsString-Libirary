
#include "String.h"

class Solution
{
private:
public:
    string ReverseString(std::string S)
    {
        clsString s1;
        string Reversed = "";
        string Delim = " ";
        vector<string> Vstring = s1.Split(S, Delim);
        vector<string>::iterator iter = Vstring.end(); // we started the pointer form the end

        while (iter != Vstring.begin())
        {
            --iter;
            Reversed += *iter + Delim;
        }

        // for (int i = Vstring.size(); i >= 0; i--)
        // {
        //     Reversed += Vstring[i] + Delim;
        // }
        return Reversed.substr(0, Reversed.size() - Delim.length());
    }
};

int main()
{

    // Solution Sol1;

    // string S = "Hello From Egypt";

    // std::cout << Sol1.ReverseString(S) << " Hi" << std::endl;

    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int>::iterator ptrNums;
    ptrNums = nums.begin();
    int result = 0;
    while (ptrNums != nums.end()) /*note: end() doesn't refere to the last element of the
                                    vector it referes to a place after the last element*/
    {
        result += *ptrNums;
        ptrNums++; /*note:in this example we made the adding first
                    then we incremented the iteratro to not leave the first element of the array---> 1 */
    }
    cout << result << endl;

    cin.get();
}
