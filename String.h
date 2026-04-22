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
    static vector<string> SplitString(string s, string delim)
    {
        vector<string> Vstring;
        int pos = 0;

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
    vector<string> SplitString(string delim)
    {
        return SplitString(_Value, delim);
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
        Letter = tolower(Letter);
        if (Letter == 'i' || Letter == 'o' || Letter == 'e' || Letter == 'u' || Letter == 'a')
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

    static string JoinString(vector<string> &vstring, string Delim)
    {
        string join = "";

        // for (int i = 0; i < vstring.size(); i++)
        // {
        //
        //     join += vstring[i] + Delim;
        // i != vstring.size() - 1 ? join += vstring[i] + Delim : join += vstring[i];
        // }

        for (string &s : vstring)
        {
            join += s + Delim;
        }
        return join.substr(0, join.length() - Delim.length()); // we subtract the string from the beginning without taking the Delimiter we erased the delimiter

        // return TrimRight(join);
    }

    //-------------------------------------------------------------------------------------------
    static string JoinString(string Array[], short length, string Delim)
    {
        string join = "";

        for (int i = 0; i < length; i++)
        {
            // i != length - 1 ? join += Array[i] + Delim : join += Array[i];

            join += Array[i] + Delim;
        }
        return join.substr(0, join.length() - Delim.length()); // to erase the delimiter from the end of the string

        // return TrimRight(join);
    }

    //==========================================

    int Length(string s)
    {
        return s.length();
    }
    int Length()
    {
        return Length(_Value);
    }

    //=========================================================

    static string Replace(string s, string oldword, string Newword)
    {
        string n = "";
        string Delim = " ";

        vector<string> Vstring = SplitString(s, Delim);

        for (int i = 0; i < Vstring.size(); i++) // بنمشي على طول الفيكتور مش السترنج خال بالك عشان عملت مشاكل
        {
            if (Vstring[i] == oldword)
            {
                Vstring[i] = Newword;
            }

            // i != Vstring.size() - 1 ? n += Vstring[i] + " " : n += Vstring[i];
            n += Vstring[i] + " ";
        }
        // return n;
        return n.substr(0, n.size() - Delim.size());
        // return TrimRight(n);
    }
    string Replace(string old_word, string New_word)
    {
        return Replace(_Value, old_word, New_word);
    }
    static string ReplaceWord(string s1, string Word1, string Word2)
    {

        short pos = s1.find(Word1);

        while (pos != string::npos)
        {
            s1 = s1.replace(pos, Word1.length(), Word2);

            pos = s1.find(Word1); // renew the position because of the new word we replaced to قمنا بتجديد الموقع على حيب الكلمة الجديدة
        }
        return s1;
    }
    string ReplaceWord(string old_word, string New_word)
    {
        return ReplaceWord(_Value, old_word, New_word);
    }

    //======================================================================

    static string ReverseWordsInString(string s)
    {
        string Reversed = "";
        string Delim = " ";

        vector<string> Vstring = SplitString(s, Delim);

        for (int i = Vstring.size() - 1; i >= 0; i--)
        {
            Reversed += Vstring[i] + Delim;
        }

        return Reversed.substr(0, Reversed.length() - Delim.length());
        // return TrimRight(Reversed);
    }
    string ReverseWordsInString()
    {
        return ReverseWordsInString(_Value);
    }
    ////Master Solution
    string ReverseStringWords(string S1)
    {
        vector<string> Vstring = SplitString(S1, " ");
        string reversed;

        vector<string>::iterator iter = Vstring.end();
        while (iter != Vstring.begin())
        {
            --iter;
            reversed += *iter + " ";
        }
        reversed = reversed.substr(0, reversed.length() - 1);
        return reversed;
    }

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

    // string RemovePunctuation(string s1)
    //{
    //	string S2;
    //	for (char& c : s1)
    //	{
    //		if (!ispunct(c))
    //		{
    //			S2 += c;
    //		}
    //	}
    //	return S2;
    //}

    // Master solution
    static string RemovePunctuation(string s1)
    {
        string S2;

        for (short i = 0; i < s1.length(); i++)
        {
            if (!ispunct(s1[i]))
            {
                S2 += s1[i];
            }
        }
        return S2;
    }
    string RemovePunctuation()
    {
        return RemovePunctuation(_Value);
    }
};

/*
📌 Summary: Arrays, Stack vs Heap, and Memory Concepts in C++

- Any variable stored in the stack MUST have a fixed size known at compile time.
  → That’s why: int arr[5]; ✔️ works
  → But: int arr[n]; ❌ (n is known only at runtime)

- The problem is NOT the loop or arr[i]
  → The problem is creating the array itself without knowing its size in advance.

- Stack:
  → Fast, simple, limited size
  → Requires fixed sizes before execution

- Heap:
  → Larger and flexible
  → Allows dynamic allocation at runtime

- vector:
  → Object itself is small (on stack)
  → Stores actual data in heap
  → Can grow/shrink dynamically

- Basic idea:
  → Fixed size → use normal array
  → Dynamic size → use vector or dynamic allocation

- Other languages (like Python):
  → Automatically manage memory (Garbage Collection)
  → Use hidden references (like pointers, but not visible)
  → Free memory when it's no longer used

🎯 Key takeaway:
Stack يحتاج حجم ثابت قبل التنفيذ، لكن Heap مرن ويقبل التحديد وقت التشغيل.
*/