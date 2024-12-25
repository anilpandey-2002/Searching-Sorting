
int countSquares(int N)
{
    int i = 1, count = 0;
    while ((i * i) < N)
        i++;
    return i - 1;
}
