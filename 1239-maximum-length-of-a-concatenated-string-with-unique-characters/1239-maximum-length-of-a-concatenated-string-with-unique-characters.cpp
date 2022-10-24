class Solution {
private:
    
bool compare(vector<int> &selected, string &currString)
{    
    vector<int> selfCheck(26, 0); 
    
    for (int i = 0; i < currString.size(); i++)
    {
        if (selfCheck[currString[i] - 'a'] == 1)
            return false ;
        selfCheck[currString[i] - 'a'] = 1 ;
    }
    for (int i = 0; i < currString.size(); i++)
    {
        if (selected[currString[i] - 'a'] == 1)
            return false ;
    }
    return true ;
}


int help(int i, vector<string> &arr, vector<int> &selected, int len)
{
    if (i == arr.size() )
    {
        return len ;
    }

    string currString = arr[i] ;
    if (compare(selected, currString) == false)
    {
        // skip the currString
        return help(i + 1, arr, selected, len) ;
    }
    else
    {
        for (int j = 0; j < currString.size(); j++)
        {
            selected[currString[j] - 'a'] = 1 ;
        }
        len += currString.size() ;
        int op1 = help(i + 1, arr, selected, len) ; 

        // Backtrack and unmark all the characters of currString as NOT TAKEN in selected[] vector
        
        for (int j = 0; j < currString.size(); j++)
        {
            selected[currString[j] - 'a'] = 0 ;
        }
        len -= currString.size() ;
        int op2 = help(i + 1, arr, selected, len) ;
        return max(op1, op2) ;
    }
}

public:
    int maxLength(vector<string>& arr) {
    vector<int> selected(26, 0) ;
    return help(0, arr, selected, 0);
        
}
};

/*
    Time Complexity:  O(K * 2^N)
    Space Complexity: O(N)
*/