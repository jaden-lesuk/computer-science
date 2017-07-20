#include <iostream>
using namespace std;

int main()
{
    int height, base, hyp, area, perimeter;
    
    height = 7;
    base  =10;
    hyp = 12;
    
    area = 0.5 * base * height;
    perimeter = height + base + hyp;
    
    cout<<area<<endl;
    cout<<perimeter;
    
    system("pause");
    return 0;
}