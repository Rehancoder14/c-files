#include <iostream>
#include <vector>
#include <list>
using namespace std;

void display(list <int> &lst){
    list <int> :: iterator it;
    for (it = lst.begin(); it !=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
int main() {

    list <int> list1;
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(8);
    list1.pop_front();
    printf("list1 ");
    display(list1);
    printf("\n");
    list <int> list2(4);
   
    list <int> ::iterator iter;
    iter= list2.begin();
    *iter = 46;
    *iter++;
    *iter = 96;
    *iter++;
    *iter = 86;
    *iter++;
    list2.remove(86);
    printf("list2 ");
    display(list2);

    list1.merge(list2);
    printf("\nAfter merging \n");
    display(list1);

    return 0 ;
}