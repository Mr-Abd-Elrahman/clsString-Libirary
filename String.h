#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class clsString
{
private:
    string _Value;
    char _Letter;

public:
    clsString()
    {
    }

    clsString(string value)
    {
        _Value = value;
    }

    // Set And Get Properties

    void SetValue(string value)
    {
        _Value = value;
    }
    string GetValue()
    {
        return _Value;
    }

    static short CountWords(string s)
    {
        int Counter = 0;
        int pos = 0;
        string delim = " ";
        string Sword = "";

        while ((pos = s.find(delim)) != std::string::npos)
        {
            Sword = s.substr(0, pos);

            if (!Sword.empty())
            {
                Counter++;
            }
            s.erase(0, pos + delim.length());
        }
        if (!s.empty())
        {
            Counter++;
        }
        return Counter;
    }

    short CountWords()
    {
        return CountWords(_Value);
    }

    //****************************************
    static vector<string> SplitString(string s)
    {
        vector<string> Vstring;
        int pos = 0;
        string delim = " ";
        string Sword = "";

        while ((pos = s.find(delim)) != std::string::npos)
        {
            Sword = s.substr(0, pos);

            if (!Sword.empty())
            {
                Vstring.push_back(Sword);
            }
            s.erase(0, pos + delim.length());
        }
        if (!s.empty())
        {
            Vstring.push_back(s);
        }
        return Vstring;
    }
    vector<string> SplitString()
    {
        return SplitString(_Value);
    }

    //===================================
    static int CountCapitalLetters(string s)
    {
        int counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                counter++;
            }
        }
        return counter;
    }

    int CountCapitalLetters()
    {
        return CountCapitalLetters(_Value);
    }

    //===================================
    static int CountSmallLetters(string s)
    {
        int counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
            {
                counter++;
            }
        }
        return counter;
    }

    int CountSmallLetters()
    {
        return CountSmallLetters(_Value);
    }

    //======================================
    static bool IsVowel(char Letter)
    {
        if (Letter == 'i' || Letter == 'I' || Letter == 'o' || Letter == 'O' ||
            Letter == 'e' || Letter == 'E' || Letter == 'u' || Letter == 'U' ||
            Letter == 'a' || Letter == 'A')
        {
            return true;
        }
        return false;
    }

    bool IsVowel()
    {
        return IsVowel(_Letter);
    }
    //====================================
    //===================================
    static int CountVowels(string s)
    {
        int counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (IsVowel(s[i]))
            {
                counter++;
            }
        }
        return counter;
    }

    int CountVowels()
    {
        return CountVowels(_Value);
    }

    static int CountSpecificLetters(string s, char l)
    {
        int counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == l)
            {
                counter++;
            }
        }
        return counter;
    }

    int CountSpecificLetters(char l)
    {
        return CountSpecificLetters(_Value, l);
    }

    //====================================

    static string InverAllLettersCases(string s)
    {
        string resutl = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]))
            {
                resutl += tolower(s[i]);
            }
            else if (islower(s[i]))
            {
                resutl += toupper(s[i]);
            }
        }
        return resutl;
    }

    string InverAllLettersCases()
    {
        return InverAllLettersCases(_Value);
    }

    //====================================

    static string LowerAllString(string s)
    {

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        return s;
    }

    string LowerAllString()
    {
        return LowerAllString(_Value);
    }
    //====================================

    static string UpperAllString(string s)
    {

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        return s;
    }

    string UpperAllString()
    {
        return UpperAllString(_Value);
    }

    //=====================================

    static char InvertLetterCase(char Letter)
    {
        if (isupper(Letter))
        {
            return tolower(Letter);
        }

        return toupper(Letter);
    }

    char InvertLetterCase()
    {
        return InvertLetterCase(_Letter);
    }
    //==============================

    static string JoinString(vector<string> vstring)
    {
        string join = "";

        for (int i = 0; i < vstring.size(); i++)
        {
            i != vstring.size() - 1 ? join += vstring[i] + " " : join += vstring[i];
        }
        return join;
    }

    // static string JoinString(string Array[100])
    // {
    //     string join = "";

    //     for (int i = 0; i < 100; i++)
    //     {
    //         join += Array[i] + " ";
    //     }
    //     return join;
    // }

    // string JoinString(vector<string>vstring, string Delim)
    //{
    //	string s1 = "";
    //
    //	for (string& s : vstring)
    //	{
    //		s1 = s1 + s + Delim;
    //	}
    //	return s1.substr(0, s1.length() - Delim.length());
    //}

    // Array
    //  string JoinString(string Arr[], short length, string Delim)
    //{
    //	string s1 = "";
    //	for (short i = 0; i < length; i++)
    //	{
    //		s1 += Arr[i] + Delim;
    //	}
    //	return s1.substr(0, s1.length() - Delim.length());
    //  }
    //==========================================

    int Length(string s)
    {
        return s.length();
    }
    int Length()
    {
        return Length(_Value);
    }
    //====================================

    // string ReplaceWord(string s, string oldword, string NewWord)
    // {

    //     for (int i = 0; i < s.length(); i++)
    //     {

    //         if (s[i] == oldword[i])
    //         {
    //             s[i] = NewWord[i];
    //         }
    //         s += s[i];
    //     }
    //     return s;
    // }
    // string ReplaceWord(string oldword, string NewWord)
    // {
    //     return ReplaceWord(_Value, oldword, NewWord);
    // }

    static string Replace(string s, string oldword, string Newword)
    {
        string n = "";

        vector<string> Vstring = SplitString(s);

        for (int i = 0; i < s.length(); i++)
        {
            if (Vstring[i] == oldword)
            {
                Vstring[i] = Newword;
            }

            n += Vstring[i];
        }
        return n;
    }
    string Replace(string old_word, string New_word)
    {
        return Replace(_Value, old_word, New_word);
    }

    // static string ReverseWordsInString(string s)
    // {
    //     string Reversed = "";

    //     vector<string> Vstring = SplitString(s);

    //     for (int i = Vstring.size() - 1; i >= 0; i--)
    //     {
    //         Reversed += Vstring[i] + " ";
    //     }
    //     return Reversed;
    // }
    // string ReverseWordsInString()
    // {
    //     return ReverseWordsInString(_Value);
    // }

    //==================================================================

    static string TrimLeft(string s1)
    {
        // Take the string from left to right
        for (short i = 0; i < s1.length(); i++)
        {

            if (s1[i] != ' ')
            {
                return s1.substr(i, s1.length() - i);
            }
        }
        return "";
    }
    string TrimLeft()
    {
        return TrimLeft(_Value);
    }
    //-----------------------------------------------------

    // Take the string from right to left
    static string TrimRight(string s1)
    {
        for (short i = s1.length() - 1; i >= 0; i--)
        {

            if (s1[i] != ' ')
            {
                return s1.substr(0, i + 1);
            }
        }
        return "";
    }
    //-------------------------------------------------------------------
    string TrimRight()
    {
        return TrimRight(_Value);
    }

    static string Trim(string s1)
    {

        return TrimLeft(TrimRight(s1));
    }

    string Trim()
    {
        return Trim(_Value);
    }

    //=============================================================

    static string UpperFirstLetterOfString(string s)
    {
        bool FirstLetter = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && FirstLetter)
            {
                s[i] = toupper(s[i]);
            }
            FirstLetter = s[i] == ' ' ? true : false;
        }
        return s;
    }
    string UpperFirstLetterOfString()
    {
        return UpperFirstLetterOfString(_Value);
    }
    //=====================================

    static string LowerFirstLetterOfString(string s)
    {
        bool FirstLetter = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && FirstLetter)
            {
                s[i] = tolower(s[i]);
            }
            FirstLetter = s[i] == ' ' ? true : false;
        }
        return s;
    }
    string LowerFirstLetterOfString()
    {
        return LowerFirstLetterOfString(_Value);
    }
    //===================================================

    static void PrintFirstLetterOfString(string s)
    {
        bool IsFirstLetter = false;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && IsFirstLetter)
            {
                cout << s[i] << " ";
            }
            IsFirstLetter = s[i] == ' ' ? true : false;
        }
    }
    void PrintFirstLetterOfString()
    {
        PrintFirstLetterOfString(_Value);
    }

    //===================================================
};
