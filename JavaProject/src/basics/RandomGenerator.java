package basics;
import java.util.Random;
import java.util.Scanner;

public class RandomGenerator {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        int bottomBound = scanner.nextInt();
        int topBound = scanner.nextInt();
        int newRandom = random.nextInt(topBound - bottomBound) + bottomBound;
        System.out.println("The new random number is: " + newRandom);

    }
}
