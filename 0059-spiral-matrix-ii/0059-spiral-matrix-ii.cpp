class Solution {
    public:
        vector<vector<int> > generateMatrix(int n) {
            vector<vector<int> > ans( n, vector<int>(n) );
        	int count = 0, i = 0;
        	while( count != n * n )
        	{
        		int j = i;
                    // four steps
        		while( j < n - i )             // 1. horizonal, left to right
        			ans[i][j++] = ++count;
        		j = i + 1;
        		while( j < n - i )             // 2. vertical, top to bottom
        			ans[j++][n-i-1] = ++count;
        		j = n - i - 2;
        		while( j > i )                  // 3. horizonal, right to left 
        			ans[n-i-1][j--] = ++count;
        		j = n - i - 1;
        		while( j > i )                  // 4. vertical, bottom to  top 
        			ans[j--][i] = ++count;
        		i++;      // next loop
        	}
        	return ans;
        }
    };