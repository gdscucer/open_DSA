public class Linked_List_148_Add_Two_Number_Represented_By_Linked_List {
    static class Node {
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = null;
        }
    }

//    N = 2
//    valueN[] = {4,5}
//    M = 3
//    valueM[] = {3,4,5}

    //       5    4
    //   +   5    4   3
    //       0    9   3
    static Node addTwoLists(Node first, Node second) {
        first = reverse(first);
        second = reverse(second);

        Node dummy = new Node(-1);
        Node temp = dummy;

        Node temp1 = first;
        Node temp2 = second;
        int carry = 0;
        while (temp1 != null || temp2 != null) {
            carry += temp1 == null ? 0 : temp1.data;
            carry += temp2 == null ? 0 : temp2.data;

            temp.next = new Node(carry % 10);
            temp = temp.next;
            carry = carry / 10;

            temp1 = temp1 == null ? temp1 : temp1.next;
            temp2 = temp2 == null ? temp2 : temp2.next;
        }
        while (carry != 0) {
            temp.next = new Node(carry % 10);
            temp = temp.next;
            carry = carry / 10;
        }
        return reverse(dummy.next);
    }

    static Node reverse(Node head) {
        Node curr = head;
        Node prev = null;
        while (curr != null) {
            Node next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }



}
