class Solution
{
private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {
        if (M[a][b] == 1)
            return true;
        else
            return false;
    }

public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        // code here
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            st.push(i);
        }

        while (st.size() > 1)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (knows(M, a, b, n))
            {
                st.push(b);
            }
            else
            {
                st.push(a);
            }
        }
        int ans = st.top();

        bool rowcheck = false;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
                c++;
        }
        if (c == n)
            rowcheck = true;

        bool colcheck = false;
        int d = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
                d++;
        }
        if (d == n - 1)
            colcheck = true;

        if (rowcheck == true && colcheck == true)
            return ans;
        else
            return -1;
    }
};