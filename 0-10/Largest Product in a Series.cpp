#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> devider(std::stringstream str)
{
    std::vector<std::string> vec;
    std::string temp;

    while(std::getline(str, temp, '0'))
    {
        if (!temp.empty())
        {
            vec.push_back(temp);
        }
    }

    return vec;

}

void eliminate(std::vector<std::string> &vec, std::vector<long long> &ans)
{
    for (size_t i = 0; i < vec.size(); ++i)
    {
        if (vec[i].size() < 13)
        {
            vec.erase(vec.begin()+i);
            i--;
        }
        else if (vec[i].size() == 13)
        {
            long long mult = 1;
            for (size_t j = 0; j < 13; ++j)
            {
                mult *= (vec[i][j]- '0');
            }
            ans.push_back(mult);

            vec.erase(vec.begin() + i);
            --i;
        }
    }
}


std::vector<std::string> getThirteenDigitCombinations(const std::vector<std::string>& vec) {
    std::vector<std::string> ans;

    for (const std::string& str : vec) {

        if (str.length() >= 13) {
            for (size_t i = 0; i <= str.length() - 13; ++i) {
                ans.push_back(str.substr(i, 13));
            }
        }
    }

    return ans;
}

