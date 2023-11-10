#include <bits/stdc++.h>
using namespace std;
//Get bit at position i here i =2 and number = 5
int getBit(int n, int pos)
{
    return (n&(1<<pos))!=0;
}
//Set bit at position i 
int setBit(int n, int pos)
{
    return (n | (1<<pos));
}
//Clear bit - make 0 at position i 
int clearBit(int n, int pos)
{
    return (n&(~(1<<pos)));
}
//Update bit 
int updateBit(int n, int pos, int value)
{
    int mask = ~(1<<pos);
    n = n &mask;
    return n | value<<pos;
}
int main()
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
}