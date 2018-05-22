#include <iostream>
#include <fstream>
#include <vector>
#include <strings.h>
#include <string>
#include <algorithm>

using namespace std;

bool compareNoCase( const string& s1, const string& s2 ) {
    return strcasecmp( s1.c_str(), s2.c_str() ) <= 0;
}

int main()
{
    std::vector<string> list;

    // Reading
    std::ifstream ifs("E:\\programing\\names.txt");
    std::string content((std::istreambuf_iterator<char>(ifs) ),(std::istreambuf_iterator<char>()));
    content.erase(std::remove(content.begin(), content.end(), '"'), content.end());
    content.erase(std::remove(content.begin(), content.end(), ' '), content.end());

    // Splitting
    std::string read = "";
    for(int64_t i = 0; i < content.size(); i++) {
        if(content.at(i) == ',') {
            list.push_back(read);
            read = "";
        } else {
            read.push_back(content.at(i));
        }
    }
    list.push_back(read);


    // Sorting
    sort(list.begin(), list.end(), compareNoCase);

    // Counting
    int j = 0;
    int64_t sum = 0;
    for(std::string i: list) {
        j++;
        int score = 0;
        for(int k = 0; k < i.length(); k++) {
            score += toupper(i.at(k)) - 64;
        }
        cout << j << " : " << i << " : " << (j * score) << endl;
        sum = sum + (j * score);
    }

    // Writing result
    std::cout << std::endl << "The sum is " << sum << std::endl;
    getwchar();
    return 0;
}
