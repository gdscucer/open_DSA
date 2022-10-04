// Stack implementation through Linkedlist without inbuilt functions.

package Java.Stack;

public class StackLL {
    public static void main(String[] args){
		StackLl sl1=new StackLl();
		sl1.displaySize();
		sl1.display();
		sl1.push(10);
		sl1.push(8);
		sl1.peek();
		sl1.push(5);
		sl1.display();
		sl1.push(7);
		sl1.displaySize();
		sl1.display();
		sl1.pop();
		sl1.peek();
		sl1.displaySize();
		sl1.display();
	}
}
class Node{
	int data;
	Node next;
	
	Node(){
		data=0;
		next=null;
	}
	
	int getData(){
		return data;
	}
	
	Node getNext(){
		return next;
	}
	
	void setData(int d){
		data=d;
	}
	
	void setNext(Node n){
		next=n;
	}
}

class StackLl{
	Node top;
	int size;
	
	void push(int d){
		Node n = new Node();
		n.setData(d);
		
		if (top==null){
			top=n;
		}
		else{
			n.setNext(top);
			top=n;
		}
		size++;
	}
	
	void pop(){
		if (top==null){
			System.out.println("Underflow");
		}
		else{
			top=top.getNext();
			size--;
		}
	}
	
	void display(){
		if (top==null){
			System.out.println("Empty Stack");
		}
		else{
			Node t = top;
			System.out.println("Stack :");
			while(t.getNext()!=null){
				System.out.print(t.getData()+" ");
				t=t.getNext();
			}
			System.out.print(t.getData());
			System.out.println("\n");
		}
	}

	void displaySize(){
		System.out.println("Stack size is "+size);
	}

	void peek(){
		System.out.println("Top is "+top.getData());
	}
}