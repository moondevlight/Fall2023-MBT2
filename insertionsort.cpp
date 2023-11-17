#include <iostream>
#include <vector>
using namespace std;
class Insertion {
    vector <int> numbers;
    public:
    void input();
    int sort();
    void print();
};
void Insertion::input()
{
    int size;
    cout<<"what size vector do you want";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int number;
        cout<<"enter number";
        cin>>number;
        numbers.push_back(number);
    }
    
}
int Insertion::sort()
{
    int n=numbers.size();
    int j;
    for (int i = 1; i < n; i++)
    {
        int key=numbers[i];
        int j=i-1;
        while (j>=0 && numbers[j]>key)
        {
            numbers[j+1]=numbers[j];
            j--;
        }
        numbers[j+1]=key;
    }
    
}
void Insertion::print()
{
   for (int i = 0; i < numbers.size(); i++)
   {
    cout<<numbers[i]<<" ";
   }
   
}
int main(){
   Insertion I;
   I.input();
   I.sort();
   I.print();
   return 0;
   }