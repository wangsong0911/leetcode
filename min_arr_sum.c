#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
//using namespace std;
/*
struct node
{
    int data;
    struct node *next;
};
*/
int sum(int array[], int n)
{
    int start = 0;
    int end = n;
    int cur = 0;
    int cur_sum = array[start];
    int end_sum = cur_sum;

    for(start=0;start<end;start++){
        int cur_sum = array[start];
        for(cur=start+1;cur<end;cur++) {
            cur_sum += array[cur];
            if(end_sum>cur_sum)
                end_sum = cur_sum;
        }
    }
}
void main()
{
    int array[5] = {2,-3,-1,-9,-1};
    sum(array, 5);
    printf("hello ws\n");

}
/*
int main()
{
    struct node *head, *p, *q, *t;
    int i, n, a;
    printf("%d", sizeof(struct node));
    
    scanf("%d", &n);
    head = NULL;
    
    for(i=0; i<n; i++) {
        p =(struct node *)malloc(sizeof(struct node));
        p->data = i;
        p->next = NULL;
        if(head == NULL)
            head = p;
        else
            q->next = p;
        q = p;
    }
    
    //输出链表
    t = head;
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
    return 0;
 }
 */
/*
class Singleton {
    private:
        Singleton() {}
        static Singleton* instance;
    public:
        static Singleton *GetInstance() {
            if (instance == NULL)
            {
                instance = new Singleton();
            }
            return instance;
        }
};
Singleton* Singleton::instance;

int main()
{
    Singleton *s1 = Singleton::GetInstance();
    Singleton *s2 = Singleton::GetInstance();
    if(s1==s2)
        cout<<"true";
    system("pause");
    return 0;
}
*/