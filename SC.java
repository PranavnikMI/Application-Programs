
class SC
{
    public static void main(String Arg[])
    {
        SinglyCL obj = new SinglyCL();

        Node Head = obj.First;

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
        System.out.println("Number of Nodes in LL is : "+iRet);
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

class SinglyCL
{
    public Node First;
    public Node Last;
    public int iCount;

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);

        if(First == null && Last == null)
        {
            this.First = newn;
            this.Last = newn;
        }
        else
        {
            newn.next = this.First;
            this.First = newn;
            Last.next = this.First;
        }
        this.iCount++;
    }

    public void InsertLast(int No)
    {
        Node newn = new Node(No);

        if(First == null && Last == null)
        {
            this.First = newn;
            this.Last = newn;
        }
        else
        {
            Last.next = newn;
            newn.next = this.First;
            this.Last = newn;
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
            this.First = null;
            this.Last = null;
        }
        else
        {
            this.First = First.next;
            Last.next = this.First;
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
            this.First = null;
            this.Last = null;
        }
        else
        {
            Node temp = this.First;

            while(temp.next.next != First)
            {
                temp = temp.next;
            }
            temp.next = this.First;
            Last.next = null;
            this.Last = temp;
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
            Node temp = this.First;

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
            Node temp = this.First;

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
        Node temp = this.First;

        if(temp == null)
        {
            System.out.println("LL is empty");
            return;
        }

        do
        {
            System.out.print("| "+temp.data+" | => ");
            temp = temp.next;
        }
        while(temp != this.First);
        System.out.println();
    }
}