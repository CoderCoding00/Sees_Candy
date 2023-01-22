// THE SEES CANDY PROBLEM

// We want to pack up a box of custom chocolate bars.
// We have some small chocolates (1 gram each) and some large chocolates (5 grams each).
// Each box will have a goal.

// Print the number of small bars to use,
// assuming we always use big bars before small bars.
// Print -1 if it can't be done.

// • for input of small = 4, large = 1, goal = 9 → 4
// • for input of small = 4, large = 1, goal = 10 → -1
// • for input of small = 4, large = 1, goal = 7 → 2

#include <iostream>
using namespace std;
#include <string>

int candy(int a, int b, int c)
{
    int large = c / 5;
    int small = c % 5;
    if (small <= a && large <= b)
    {
        return small;
    }
    return -1;
}

int main()
{
    cout << "tester candy 4, 1, 9 : " << candy(4, 1, 9) << endl;
    cout << "tester candy 4, 1, 10: " << candy(4, 1, 10) << endl;
    cout << "tester candy 4, 1, 7: " << candy(4, 1, 7) << endl;
    return 0;
}