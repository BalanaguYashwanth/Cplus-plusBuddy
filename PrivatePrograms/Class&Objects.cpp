#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int card;
    char str[20];
    public:
        int readstu(int id,char name1[20])
        {
            card=id;
            strcpy(str,name1);
        }
        int writestu();
};
int student :: int writestu()
{
    cout>>card;
    cout>>str;

};

int main()
{
    student k;
    k.readstu(23,"yash");
    k.writestu();
}
