
class DC
{
    public static void main(String Arg[])
    {
        DoublyCL obj = new DoublyCL();

        Node Head = obj.First;

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.InsertAtPos(105,4);
        obj.DeleteAtPos(4);
        
        obj.Display();

        int iRet = obj.iCount;
        System.out.println("Number of Nodes in LL are : "+iRet);
    } 
}

class Node
{
    public int data;
    public Node prev;
    public Node next;

    public Node(int No)
    {
        this.data = No;
        this.prev = null;
        this.next = null;
    }
}

class DoublyCL
{
    public Node First;
    public Node Last;
    public int iCount;

    public DoublyCL()
    {
        this.First = null;
        this.Last = null;
        this.iCount = 0;
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            First.prev = newn;
            newn.next = First;
            First = newn;
            First.prev = Last;
            Last.next = First;
        }
        this.iCount++;
    }

    public void InsertLast(int No)
    {
        Node newn = new Node(No);

        if(First == null && Last == null)
        {
            First = newn;
            Last = newn;
        }
        else
        {
            Last.next = newn;
            newn.prev = Last;
            Last = newn;
            Last.next = First;
            First.prev = Last;
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
            First = null;
            Last = null;
        }
        else
        {
            First = First.next;
            First.prev = Last;
            Last.next = First;
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
            First = null;
            Last = null;
        }
        else
        {
            Last = Last.prev;
            Last.next = First;
            First.prev = Last;
        }
        this.iCount--;
    }

    public void InsertAtPos(int No, int iPos)
    {
        if(iPos < 1 && iPos > iCount + 1)
        {
            System.out.println("invalid Position");
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
            Node temp = this.First;

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
        if(iPos < 1 && iPos > iCount)
        {
            System.out.println("invalid Position");
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
            Node temp = this.First;

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
        Node temp = this.First;

        do
        {
            System.out.print("| "+temp.data+" | <=> ");
            temp = temp.next;
        }while(temp != First);

        System.out.println();
    }
}