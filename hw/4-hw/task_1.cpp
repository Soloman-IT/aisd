#include "iostream"

struct Node
{
	int value;
	Node * next = 0;
	Node * previous = 0;
};

struct Linklst
{	Node * prlink = 0;
	Node * head = 0;
	Node * link = 0;

	void add(int val)
    {   
        if (head == 0)
        {    
            Node * node = new Node;
            head = node;
            (*node).value = val;
            (*node).next = 0;
            (*node).previous = prlink;
            prlink = node;
        }
        else
        {   
            Node * lk;
            lk = head;
            Node * node = new Node;
            while (lk->next != 0)
            {
              lk = lk->next;
            }
            lk->next = node;
            (*node).value = val;
            (*node).next = 0;
            (*node).previous = prlink;
            prlink = node;
        }
    }

    InsertAt(int value, int id)
    {
    	Node * node = new Node;
    	node->value = value;
    	int count = 0;
    	Node * t;
    	t = head;
    	bool c = true;
    	while (c)
    	{	
    		if (count == id)
    		{
    			Node * e;
    			Node * b;
    			node->previous = (t->previous);
    			(t->previous)->next = node;
    			node->next = t;
				t->previous = node;
    			c = false;
    			break;
    		}
    		t = t->next;
    		count ++;
    	}
    }
    RemoveAt(int id)
    {
    	int count = 0;
    	Node * t;
    	t = head;
    	bool c = true;
    	while (c)
    	{	
    		if (count == id)
    		{
    			Node * e;
    			Node * b;
    			(t->previous)->next = (t->next);
    			(t->next) = t->previous;
    			t->next = 0;
				t->previous = 0;
    			c = false;
    			break;
    		}
    		t = t->next;
    		count ++;
    	}
    }

    int size()
    {	int count = 1;
    	Node * ptr;
    	ptr = head;
    	while (ptr->next != 0)
    	{
    		ptr = ptr->next;
    		count ++;
    	}
    	return count;
    }
    int get(int id)
    {

    	Node * tr;
    	tr = head;
    	int count = 1;
    	while (tr->next != 0)

    	{	

    		if (count == id)
    		{
    			return tr->value;
    		}
    		tr = tr->next;
    		count ++;

    	}
    
    }

	void delet()
	{
		Node * ptr = head;
		int x = ptr->value;
		head = ptr->next;
		delete ptr;
	}
};

int main()
{
    Linklst * lst = new Linklst;

    lst->add(10);
    lst->add(20);
    lst->InsertAt(30,1);
    lst->RemoveAt(1);
    std::cout << lst->size() << std::endl;
    std::cout << lst->get(1);

    return 0;
}
