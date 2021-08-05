int getMinimumCost(int k, vector<int> c)
{
    std::sort(c.begin(), c.end(), greater<int>());
    int result = 0;
    
    for (size_t i = 0; i < c.size(); ++i)
    {
        result += c[i] * (floor(i / k) + 1);
    }
    
    return result;
}
