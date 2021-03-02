#include "iostream"

struct Node
{
    int item;
    Node * next;
};

 
struct Stack
{
    Node * pHead;
    int count = 0;
    int mas[2];
    void Push(int item)
    {	

    	count ++;
    	if (count == 1) 
    	{
	    	Node * node = new Node;
	        node->item = item;
	        Node  *p = &(node->next);
	        node->next = nullptr;
	        pHead = node;
	       	
    	}
    	else
    	{
        	Node * node = new Node;
        	node->item = item;
        	node->next = *p;
        	pHead = node;
        }
    }

    void PrintAll()
    {	
    	int i = 0;
    	while(i < count)
    	{
	    	Node * kek = pHead;
	    	std::cout << kek->item << std::endl;
	    	pHead = kek->next;
	    	i++;
    	}	
    }

    int Pop()
    {
        if (!pHead)
            throw 1;

        Node * temp = pHead;
        int x = temp->item;
        pHead = temp->next;
        delete temp;
        return x;
    }

   
};

 
int main()
{
    Stack * stack = new Stack;

    stack->Push(10);
    stack->Push(20);

    stack->PrintAll();

    std::cout << stack->Pop() << std::endl;
    std::cout << stack->Pop() << std::endl;

    delete stack;
    return 0;
}

