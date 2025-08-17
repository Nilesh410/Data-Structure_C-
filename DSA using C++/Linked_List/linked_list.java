class Node
{
    public int data;
    public Node next;
    public Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}
class LL_Creation 
{
    public Node head;
    public LL_Creation()
    {
        head=null;
    }
    public void insert_at_first(int value)
    {
        if(head==null)
        {
            Node temp=new Node(value);
            head=temp;
        }
        else
        {
            Node temp=new Node(value);
            temp.next=head;
            head=temp;
        }
    }
    public void display()
    {
        if(head==null)
        {
            System.out.println("Linked list empty");
        }
        else{
           Node temp=head;
           while(temp!=null)
           {
              if(temp.next!=null)
              {
                System.out.print(temp.data+"->");
                temp=temp.next;
              }
              else
              {
                System.out.print(temp.data);
                temp=temp.next;
              }
              
           } 
        }
    }
}
public class linked_list
{
    public static void main(String args[])
    {
        LL_Creation obj=new LL_Creation();
        obj.insert_at_first(10);
        obj.insert_at_first(20);
        obj.insert_at_first(30);
        obj.display();
    }
}