// C++ Program to find the distinct
// elements in a range
#include <bits/stdc++.h>
using namespace std;

// Function to perform queries in a range
long long query(int start, int end, int left, int right,
                int node, long long seg[])
{
    // No overlap
    if (end < left || start > right)
    {
        return 0;
    }

    // Totally Overlap
    else if (start >= left && end <= right)
    {
        return seg[node];
    }

    // Partial Overlap
    else
    {
        int mid = (start + end) / 2;

        // Finding the Answer
        // for the left Child
        long long leftChild = query(start, mid, left,
                                    right, 2 * node, seg);

        // Finding the Answer
        // for the right Child
        long long rightChild = query(mid + 1, end, left,
                                     right, 2 * node + 1, seg);

        // Combining the BitMasks
        return (leftChild | rightChild);
    }
}

// Function to perform update operation
// in the Segment seg
void update(int left, int right, int index, int Value,
            int node, int ar[], long long seg[])
{
    if (left == right)
    {
        ar[index] = Value;

        // Forming the BitMask
        seg[node] = (1LL << Value);
        return;
    }

    int mid = (left + right) / 2;
    if (index > mid)
    {

        // Updating the left Child
        update(mid + 1, right, index, Value, 2 * node + 1, ar, seg);
    }
    else
    {

        // Updating the right Child
        update(left, mid, index, Value, 2 * node, ar, seg);
    }

    // Updating the BitMask
    seg[node] = (seg[2 * node] | seg[2 * node + 1]);
}

// Building the Segment Tree
void build(int left, int right, int node, int ar[],
           long long seg[])
{
    if (left == right)
    {

        // Building the Initial BitMask
        seg[node] = (1LL << ar[left]);

        return;
    }

    int mid = (left + right) / 2;

    // Building the left seg tree
    build(left, mid, 2 * node, ar, seg);

    // Building the right seg tree
    build(mid + 1, right, 2 * node + 1, ar, seg);

    // Forming the BitMask
    seg[node] = (seg[2 * node] | seg[2 * node + 1]);
}

// Utility Function to answer the queries
void getDistinctCount(vector<vector<int>> &queries,
                      int ar[], long long seg[], int n)
{

    for (int i = 0; i < queries.size(); i++)
    {

        int op = queries[i][0];

        if (op == 2)
        {

            int l = queries[i][1], r = queries[i][2];

            long long tempMask = query(0, n - 1, l - 1,
                                       r - 1, 1, seg);

            int countOfBits = 0;

            // Counting the set bits which denote the
            // distinct elements
            for (int i = 63; i >= 0; i--)
            {

                if (tempMask & (1LL << i))
                {

                    countOfBits++;
                }
            }

            cout << countOfBits << '\n';
        }
        else
        {

            int index = queries[i][1];
            int val = queries[i][2];

            // Updating the value
            update(0, n - 1, index - 1, val, 1, ar, seg);
        }
    }
}

// Driver Code
int main()
{
    int n = 5;
    int ar[] = {1, 2, 3, 4, 5};

    long long seg[4 * n] = {0};
    build(0, n - 1, 1, ar, seg);

    int q = 2;
    vector<vector<int>> queries = {
        {1, 1, 2},
        {1, 2, 5}};

    getDistinctCount(queries, ar, seg, n);

    return 0;
}