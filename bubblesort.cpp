#include <iostream>
#include <vector>

using namespace std;
class bubble 
{
    vector <int> numbers;
    public:
    void input();
    void print();
    int sort();
};
void bubble::input()
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
void bubble::print()
{
   for (int i = 0; i < numbers.size(); i++)
   {
    cout<<numbers[i]<<" ";
   }
   
}
int bubble::sort()
{
    int n=numbers.size();
    for(int i=0;i<n-1;i++)
       for(int j=0;j<n-i-1;j++)
          if (numbers[j]>numbers[j+1])
          {
            swap(numbers[j],numbers[j+1]);
          }
          
}
int main()
{
    bubble b;
    b.input();
    b.sort();
    b.print();
}
