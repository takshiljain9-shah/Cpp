#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin,str1);

    cout << "Entere second string: ";
    getline(cin,str2);

    cout << "\n----- Basic operations -----\n";

    //length
    cout << "Length of first string: " << str1.length() << endl;

    //concatenation
    string combined = str1 + " " + str2;
    cout << "Combined String: " << combined << endl;

    //Comparison
    if (str1 == str2)
        cout << "Both strings are equal\n";
    else
        cout << "Strings are not equal\n";

    //Access characters
    cout << "First character of str1: " << str1[0] << endl;
    cout << "Last character of str1: " << str1[str1.length() - 1] << endl;

    cout << "\n -----STRING MODIFICATION-----\n";

    //Append
    str1.append(" Addedtext");
    cout << "after append: " << str1 << endl;

    //Insert
    str1.insert(0, "start-");
    cout << "After insert: " << str1 << endl;

    //Erase
    str1.erase(0,6);
    cout << "After erase: " << str1 << endl;

    //Replace
    if(str1.length() >= 3)
        str1.replace(0,3, "XYZ");
    cout << "After replace: " << str1 << endl;

    cout << "\n---- SEARCHING ----\n";

    //Find
    size_t pos = str1.find("a");
    if(pos != string::npos)
        cout << "'a' found at position: " << pos << endl;
    else
        cout << "'a' not found\n";

    cout << "\n---- SUBSTRING----\n";

    if (str1.length() >= 4)
        cout << "Substring (0,4): " << str1.substr(0,4) << endl;
    
    cout << "\n---- MANUAL OPERATIONS ----\n";

    //Reverse manually
    string rev = "";
    for (int i = str1.length() - 1; i >= 0; i--){
        rev += str1[i];
    }
    cout << "Reversed string: " << rev << endl;

    // Count Vowels
    int count = 0;
    
    for (int i = 0; i < str1.length(); i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' ||
        str1[i] == 'o' || str1[i] == 'u'||
        str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' ||
        str1[i] == 'O' || str1[i] == 'U')
        count++;
    }
    cout << "Number of vowels: " << count << endl;

    //Uppercase conversion
    for (int i = 0; i < str1.length(); i++){
        if(str1[i] >= 'a' && str1[i] <= 'z')
        str1[i] = str1[i] - 32;
    }
    cout << "Uppercase String: " << str1 << endl;

    return 0;
}
