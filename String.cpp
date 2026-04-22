#include "String.h"

int main()
{

    vector<string> vstirng = {"Ahmed", "Mohammed", "Sayed", "Ali"};
    string Arr[4] = {"Ahmed", "Mohammed", "Sayed", "Ali"};

    clsString String1("Egypt from Hello");
    // cout << String1.CountCapitalLetters() << endl;
    // cout << String1.CountSmallLetters() << endl;
    // cout << String1.CountVowels() << endl;
    // cout << String1.InverAllLettersCases() << endl;
    // cout << String1.CountSpecificLetters('a') << endl;
    // cout << String1.InvertLetterCase('m') << endl;
    // cout << String1.IsVowel('s') << endl;
    // cout << String1.JoinString(Arr, 4, " ") << "Hi" << endl;
    // cout << String1.JoinString(Arr) << endl;
    // cout << String1.Length() << endl;
    // cout << String1.Replace("Sabry", "Ismail") << "Hi" << endl;
    // cout << String1.ReverseWordsInString() << "Hi" << endl;
    // cout << "Hi I am " << String1.TrimRight() << endl;
    // cout << String1.TrimLeft() << endl;
    // cout << String1.UpperAllString() << endl;
    // cout << String1.LowerAllString() << endl;
    // cout << String1.LowerFirstLetterOfString() << endl;
    // cout << String2.UpperFirstLetterOfString() << endl;
    // cout << String1.Trim() << endl;
    // String1.PrintFirstLetterOfString();

    clsString s2("Yassin Mohammed Adel");

    cout << s2.CountCapitalLetters() << endl;
    cout << s2.CountSmallLetters() << endl;

    cin.get();
}