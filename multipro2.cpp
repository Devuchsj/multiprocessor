#include<iostream>
#include<string.h>

using namespace std;

class message
{
    private:
    char arr[];
    public:
    message(char brr[])
    {
        strcpy(arr,brr);
    }
    void print()
    {
        cout<<"my name"<endl;
    }
    void print(char brr[])
    {
        cout<<arr<<" "<<brr;
    }
};
int main()
{
    message obj("devu");
    obj.print();
    obj.print("patel");
    return 0;
}
