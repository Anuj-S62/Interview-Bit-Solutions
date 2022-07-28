vector<int> temp(A+1,-1);
    vector<vector<int>> dp(B+1,temp);
    for(int i = 1;i<dp[0].size();i++) dp[1][i] = i;
    for(int i = 2;i<dp.size();i++) dp[i][1] = 0;