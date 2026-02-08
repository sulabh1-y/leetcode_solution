class MyLinkedList {
private:
    struct node
    {
        int val;
        node * next;
        node(int x) : val(x), next(NULL) {}
    };
    node *head;
    node *tail;
    int size;
public:
    MyLinkedList() {
        head= NULL;
        tail=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index<0 || index>=size)
        {
            return -1;
        }
        node * temp= head;
        for (int i=0;i<index;i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        node *p=new node(val);
        p->next=head;
        head=p;
        if(size==0)
        {
            tail=p;
        }
        size++;
    }
    
    void addAtTail(int val) {
        node *p=new node(val);
        if(size==0)
        {
            head=tail=p;
        }
        else
        {
            tail->next=p;
            tail=p;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        if(index==size)
        {
            addAtTail(val);
            return;
        }
        node *temp=head;
        for(int i=0;i<index-1;i++)
        {
            temp=temp->next;
        }
        node *p=new node(val);
        p->next=temp->next;
        temp->next=p;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        if(index==0)
        {
            node *d =head;
            head=head->next;
            delete d;
            if(size==1)
            {
                tail=NULL;
            }
        }
        else
        {
            node * temp=head;
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            }
            node *d=temp->next;
            temp->next=d->next;
            if(d==tail)
            {
                tail=temp;
            }
            delete d;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */