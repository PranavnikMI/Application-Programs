
class DL
{
    public static void main(String Arr[])
    {
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.InsertAtPos(105,4);
        obj.DeleteAtPos(4);

        obj.Display();

        int iRet = obj.iCount;
        System.out.println("Number of nodes in LL are : "+iRet);
    }
}

class Node
{
    public int data;
    public Node next;
    public Node prev;

    public Node(int No)
    {
        this.data = No;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    public Node Head;
    public int iCount;

    public DoublyLL()
    {
        this.Head = null;
        this.iCount = 0;
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);

        if(Head == null)
        {
            this.Head = newn;
        }
        else
        {
            Head.prev = newn;
            newn.next = this.Head;
            this.Head = newn;
        }
        this.iCount++;
    }

    public void InsertLast(int No)
    {
        Node newn = new Node(No);

        if(Head == null)
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
            newn.prev = temp;
        }
        this.iCount++;
    }

    public void DeleteFirst()
    {
        if(iCount == 0)
        {
            System.out.println("LL is empty");
            return;
        }
        else if(iCount == 1)
        {
            this.Head = null;
        }
        else
        {
            this.Head = Head.next;
            Head.prev = null;
        }
        this.iCount--;
    }

    public void DeleteLast()
    {
        if(iCount == 0)
        {
            System.out.println("LL is empty");
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

            temp.next.prev = newn;
            newn.next = temp.next;
            temp.next = newn;
            newn.prev = temp;

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
            temp.next.prev = temp;

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
        System.out.println("NULL");
    }
}