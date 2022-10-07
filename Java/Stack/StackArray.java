// Stack implementation through Arrays without inbuilt functions

package Java.Stack;

public class StackArray {
    public static void main(String[] args){
		StackArr sa1=new StackArr();
		sa1.displaySize();
		sa1.display();
		sa1.push(10);
		sa1.push(8);
		sa1.peek();
		sa1.push(5);
		sa1.display();
		sa1.push(7);
		sa1.displaySize();
		sa1.display();
		sa1.pop();
		sa1.peek();
		sa1.displaySize();
		sa1.display();
	}   
}

class StackArr{
	int top=-1;
	int size;
	int[] arr;

	StackArr(){
		arr = new int[10];
	}

	StackArr(int s){
		arr = new int[s];	
	}
	
	void push(int d){

		if (top==arr.length){
			System.out.print("Overflow");
		}
		else{
			top++;
			arr[top]=d;
			size++;
		}
	}
	
	void pop(){
		if (top==-1){
			System.out.println("Underflow");
		}
		else{
			top--;
			size--;
		}
	}
	
	void display(){
		if (top==-1){
			System.out.println("Empty Stack");
		}
		else{
			System.out.println("\nStack :");
			for(int i = top; i>=0 ; i--){
				System.out.print(arr[i]+" ");
			}
			System.out.println();
			System.out.println("Top\n");
		}
	}

	void displaySize(){
		System.out.println("Stack size is "+size);
	}

	void peek(){
		System.out.println("Top is "+arr[top]);
	}
}