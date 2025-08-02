package misc;

import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner scanner =  new Scanner(System.in);
        System.out.print("Tell me a word: ");
        String word = scanner.next();
        int length = word.length()-1;
        int count = word.length()/2;
        boolean isPalindrome = true;
        for (int i = 0; i < count; i++){
            if (word.charAt(i) != word.charAt(length-i)){
                System.out.println("The word is not palindrome");
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome){
            System.out.println("The word is palindrome");
        }
    }
}
