#include <iostream> //This is needed for c out and c in
#include <string>
#include <array>
#include <vector>
using namespace std;

int reconstructMatrix(array <array<int, 4>, 4> matrix)
{
    int num;
    cout << "input number: "  << endl;
   cin >> num;
    for (int i =0; i < 4; i++) //rows
    {
        for (int j = 0; j < 4; j++) //cols
        {

            if(matrix[i][j] == 0){
                matrix[i][j] = num;
                //cout << "inputted num: "<< matrix[i][j] << endl;
            }
            cout << matrix[i][j] << " " << endl;
        }
       
    }
    return 0;
}
int main()
{
    array<array<int, 4>, 4> coin_bag = {{
        {{1, 2, 3, 4}},
        {{5, 6, 7, 0}},
        {{9, 0, 11, 12}},
        {{13, 14, 0, 16}}
    }};
    reconstructMatrix(coin_bag);
    /*for (int i =0; i < 4; i++) //rows
    {
        for (int j = 0; j < 4; j++) //cols
        {

            cout << coin_bag[i][j];
        }
       
    } */
    return 0;
}