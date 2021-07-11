#include <iostream>
using namespace std;
NODE* CreateNode(Data data);
struct Data {
    int n;
};

struct NODE {
    Data data;
    NODE *pNext;
};

struct LIST {
    NODE *pHead;
    NODE *pTail;
};
//creat node 
NODE* CreateNode(Data data) {
    if(node == NULL) {
        return NULL;
    }   
    node-> data = data;// gan data cho node 
    node->pNext = NULL; /// pnext tro toi null
} 

int main() {
    LIST lst;
    NODE *node = new NODE;
    system("pause");
    return 0;
}