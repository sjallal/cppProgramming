/*
Digit Pairs
Problem Description
Given N three-digit numbers, your task is to find bit score of all N numbers and then print the number of pairs possible based on these calculated bit score.

1. Rule for calculating bit score from three digit number:

From the 3-digit number,

· extract largest digit and multiply by 11 then

· extract smallest digit multiply by 7 then

· add both the result for getting bit pairs.

Note: - Bit score should be of 2-digits, if above results in a 3-digit bit score, simply ignore most significant digit.

Consider following examples:

Say, number is 286

Largest digit is 8 and smallest digit is 2

So, 8*11+2*7 =102 so ignore most significant bit , So bit score = 02.

Say, Number is 123

Largest digit is 3 and smallest digit is 1

So, 3*11+7*1=40, so bit score is 40.

2. Rules for making pairs from above calculated bit scores

Condition for making pairs are

· Both bit scores should be in either odd position or even position to be eligible to form a pair.

· Pairs can be only made if most significant digit are same and at most two pair can be made for a given significant digit.

Constraints
N<=500

Input Format
First line contains an integer N, denoting the count of numbers.

Second line contains N 3-digit integers delimited by space

Output
One integer value denoting the number of bit pairs.

Timeout
1

Explanation
Example 1

Input

8 234 567 321 345 123 110 767 111

Output

3

Explanation

After getting the most and least significant digits of the numbers and applying the formula given in Rule 1 we get the bit scores of the numbers as:

58 12 40 76 40 11 19 18

No. of pair possible are 3:

40 appears twice at odd-indices 3 and 5 respectively. Hence, this is one pair.

12, 11, 18 are at even-indices. Hence, two pairs are possible from these three-bit scores.

Hence total pairs possible is 3
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // string s;
    int scores[100] = {0};
    int scores2[100] = {0};
    for (int i = 0; i < n; i++)
    {
        int s, r;
        cin >> s;
        int max = -1;
        int min = 10;
        while (s)
        {
            r = s % 10;
            if (r > max)
                max = r;
            if (r < min)
                min = r;
            s /= 10;
        }
        int res = (max * 11) + (min * 7);
        res = res % 100;
        // cout << "res: " << res << endl;
        if (i % 2 == 0)
        {
            // cout << "res: " << res << endl;
            scores[res]++;
        }
        else
        {
            // cout << "res: " << res << endl;
            scores2[res]++;
        }
        // cout << res << " ";
    }
    int k = 0, res = 0, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        k = i * 10;
        sum = 0;
        int res1 = 0;
        int res2 = 0;
        for (int j = 0; j < 10; j++, k++)
        {
            sum += scores[k];
            if (sum >= 3)
            {
                res1 += 2;
                break;
            }
        }
        if (sum == 2)
            res1 += 1;
        // ================
        k = i * 10;
        sum = 0;
        for (int j = 0; j < 10; j++, k++)
        {
            sum += scores2[k];
            if (sum >= 3)
            {
                res2 += 2;
                break;
            }
        }
        if (sum == 2)
            res2 += 1;
        // ====================
        if (res1 == 0 && res2 == 0)
        {
            res += 0;
            continue;
        }
        if (res1 == 1 && res2 == 1)
        {
            res += 0;
            continue;
        }
        if (res1 > res2)
            res += res1;
        else
            res += res2;
    }
    cout << res;
    return 0;
}