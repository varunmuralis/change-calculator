package util.lk.a;

import java.util.Scanner;

public class LinkListShopping {
    public static void main (String[] args) {
        Scanner scnr = new Scanner(System.in);

        // Declare a LinkedList called shoppingList of type ListItem
        Link head = new Link("HEAD");
        Link current = head;
        String item;

        // Read User Inputs until a "-1" is detected
        while(true){
            item = scnr.nextLine();
            if(item.equals("-1")){
                break;
            }
            // Add the new ListItem to the list
            Link link = new Link(item);
            current.next = link;
            current = current.next;
        }
        current = head;
        while(current != null){
            System.out.println(current);
            current = current.next;
        }
    }
}