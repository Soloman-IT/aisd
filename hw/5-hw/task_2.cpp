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

	bool add(int val)
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
            Node * node = new Node;

            Node * lk = 0;
            Node * rk = 0;
            lk = head;
            rk = lk->previous;
            node->value = val;

            while(lk->next != 0)
            {   
                if (lk->value == node->value)
                {
                    return false;
                }

                if (lk->value > node->value) 
                {
                    lk->previous = node;
                    node->next = lk; 
                    node->previous = rk;
                    rk->next = node;
                    break;
                }
                lk = lk->next;
                rk = lk->previous;
            }
            if (lk->value == node->value)
                {
                    return false;
                }
            if (lk->value > node->value)
                {
                    lk->previous = node;
                    node->next = lk; 
                    node->previous = rk;
                    rk->next = node;
                }
            else
            {
                node->next = 0; 
                node->previous = lk;
                lk->next = node;
            }  
        return true;
    }
}

void  remove(int id)
    {   prlink = 0;
        int count = 0;
        Node * t;
        t = head;
        bool c = true;
        while (c)
        {    
            if (count == id)
            { 
                if (count == 0)
                { 
                  head = t->next;
                  Node * e;
                  Node * b;
                  (t->next)->previous = 0;
                  (t->next) = t->previous;
                  t->next = 0;
                  t->previous = 0;
                  c = false;
                  break;  
                }
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

      int get(int id)
      {
  
          Node * tr;
          tr = head;
          int count = 0;
          while (tr->next != 0)
  
          {    
  
              if (count == id)
              {
                  return tr->value;
              }
              tr = tr->next;
              count ++;
  
          }
          if (count == id)
              {
                  return tr->value;
              }
      }

};

int main()
{
    Linklst * lst = new Linklst;

    lst->add(10);
    lst->add(20);
    lst->add(14);
    lst->add(20);
    

    return 0;
}
