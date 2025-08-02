package util.lk;

import java.util.LinkedList;
import java.util.Scanner;

public class LinkedListShopping {
    public static void main (String[] args) {
        Scanner scnr = new Scanner(System.in);

        // Declare a LinkedList called shoppingList of type ListItem
        LinkedList<ListItem> shoppingList = new LinkedList<>();
        String item;

        // Read User Inputs until a "-1" is detected
        while(true){
            item = scnr.nextLine();
            if(item.equals("-1")){
                break;
            }
            // Add the new ListItem to the list
            shoppingList.add(new ListItem(item));
        }


        // Print the shoppingList LinkedList using the printNodeData() method
        for (ListItem listItem : shoppingList){
            listItem.printNodeData();
        }
    }
}
