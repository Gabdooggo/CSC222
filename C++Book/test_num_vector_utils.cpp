//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream> //This is needed for c out and c in
#include <string>
#include <vector>
//#include "num_vector_utils.h"
using namespace std;

string render_num_vector(const vector<int>& nums) {
    string s = "";
    for (size_t i = 0; i < nums.size(); ++i) {
        s += to_string(nums[i]);
        if (i < nums.size() - 1) {
            s += ", "; // Add a comma and space between numbers
        }
    }
    return s;
}

string only_evens(const vector<int>& nums) {
    string s = "";
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] % 2 == 0) {
            s += to_string(nums[i]);
            if (i < nums.size() - 1) {
                s += ", "; // Add a comma and space between numbers
        }
    }
    }
    return s;
}

string nums_between(const vector<int>& nums, const vector<int>& lows, const vector<int>& highs) {
    string s = "";
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] % 2 == 0) {
            s += to_string(nums[i]);
            if (i < nums.size() - 1) {
                s += ", "; // Add a comma and space between numbers
        }
    }
    }
    return s;
}

int main() {
/*vector<int> nums = {1, 3, 7};
string numstr = render_num_vector(nums);
cout << "Rendered string: " << numstr << endl;
*/
vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
vector<int> nums2 = nums_between(nums, 10, 20);
string expected = "11 13 10 19 20 14";
return 0;
}

/*TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}
*/
