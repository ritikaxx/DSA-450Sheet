class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> umap; 
        
        int firstmax = INT_MIN; 
        int secondmax = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            umap[arr[i]]++;
        }
        
        
        for(auto it : umap)
        {
            if(it.second > firstmax)
            {
                firstmax = it.second;
            }
        }
        
        string str = "";
        for(auto it : umap)
        {
            if( it.second != firstmax && it.second >secondmax)
            {
                str = it.first;
                secondmax = it.second;
            }
        }
        
        return str;
    }
};