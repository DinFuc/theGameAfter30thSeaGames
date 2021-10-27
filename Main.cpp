long long theWinnerOfLosers(std::vector<long long> basketOfBalls)
{
    for(long long i : basketOfBalls)
        if(i & 1) return 1;
    return 2;
}
