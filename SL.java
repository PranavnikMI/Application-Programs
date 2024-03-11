
class SL
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.InsertAtPos(71,3);
        obj.DeleteAtPos(3);    

        obj.Display();

        int iRet = obj.Count();
        System.out.println("Numbers of Nodes in LL are : "+iRet); 
    }
}

class Node
{
    public int data;
    public Node next;

    public Node(int No)
    {
        this.data = No;
        this.next = null;
    }
}

class SinglyLL
{
    private Node Head;
    private int iCount;

    public SinglyLL()
    {
        this.Head = null;
        this.iCount = 0;
    }

    protected void finalize()
    {
        // Memory free
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            newn.next = this.Head;
            this.Head = newn;
        }
        this.iCount++;
    }

    public void InsertLast(int No)
    {
        Node newn = new Node(No);

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            Node temp = this.Head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        this.iCount++;
    }

    public void DeleteFirst()
    {
        if(iCount == 0)
        {
            System.out.println("LL is Empty");
            return;
        }
        else if(iCount == 1)
        {
            this.Head = null;
        }
        else
        {
            this.Head = Head.next;
        }
        this.iCount--;
    }

    public void DeleteLast()
    {
        if(iCount == 0)
        {
            System.out.println("LL is Empty");
            return;
        }
        else if(iCount == 1)
        {
            this.Head = null;
        }
        else
        {
            Node temp = this.Head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        this.iCount--;
    }

    public void InsertAtPos(int No, int iPos)
    {
        if(iPos < 1 || iPos > iCount + 1)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(No);
        }
        else
        {
            Node newn = new Node(No);
            Node temp = this.Head;

            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            this.iCount++;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > iCount)
        {
            System.out.println("Invalid Position");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCount)
        {
            DeleteLast();
        }
        else
        {
            Node temp = this.Head;

            for(int i = 1; i < iPos - 1; i++)
            {
                temp = temp.next;
            }
            
            temp.next = temp.next.next;

            this.iCount--;
        }
    }

    public void Display()
    {
        Node temp = this.Head;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" | => ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }
}