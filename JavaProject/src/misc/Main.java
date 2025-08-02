package misc;

import java.util.Scanner;

public class Main {
    /**
     * 1. How many pizzas in the factory
     * 2. What is the radius
     * 3. Total Area of all the pizza:
     *
     * @param args
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("How many Pizzas in the factory: ");
        int pizzas = sc.nextInt();
        System.out.print("What is the radius: ");
        double radius = sc.nextDouble();
        long t1 = System.currentTimeMillis();
        double totalArea = 0;
        for (int i = 0; i < pizzas; i++) {
            double area = 3.14 * Math.pow(radius, 2);
            totalArea += area;
        }
        long t2 = System.currentTimeMillis();
        System.out.println("Time Taken " + (t2 - t1));
        System.out.println("Total area is " + totalArea);
    }
}
