#include <iostream>
#include <set> 

using namespace std;
set<long long> s;
long long next(long long n, long long end)
{
    long long n1 = (n * 10) + 4;
    long long n2 = (n * 10) + 7;
    s.insert(n1);
    s.insert(n2);
    if (n1 > end)
    {
        return 0;
    }
    next(n1, end);
    if (n2 > end)
    {
        return 0;
    }
    next(n2, end);
}
int main()
{

    long long start, end, count = 0, sum = 0;
    cin >> start >> end;
    count = start;
    next(0, end);
    set<long long>::iterator str;
    
    for (str = s.begin(); str != s.end(); ++str) {
        if(count <= *str)
        {
        if (*str <= end)
        {
            sum += (abs(start - *str) + 1) * (*str);
            start = *str + 1;
        }
        else if( *str - end > 0)
        {
            sum += (end - start + 1) * (*str);
            break;
        }
        else
        {
            break;
        }
        }
       
    }
   
    std::cout << sum << endl;
    return 0;
}