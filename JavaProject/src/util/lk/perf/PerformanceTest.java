package util.lk.perf;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class PerformanceTest {
    public static void main(String[] args) {
        int iterationCount = 100_000_000;
        performArrayList(iterationCount);
        performLinkList(iterationCount);

    }

    public static void performArrayList(int iterationCount){
        long start = System.currentTimeMillis();

        List<String> names = new ArrayList<String>();
        for (int i = 1; i <= iterationCount; i++) {
            names.add(i + "");
        }
        long end = System.currentTimeMillis();
        System.out.println("Total time: " + (end - start) + "ms " + " Size="+ names.size());
    }
    public static void performLinkList(int iterationCount){
        long start = System.currentTimeMillis();

        LinkedList<String> names = new LinkedList<String>();
        for (int i = 1; i <= iterationCount; i++) {
            names.add(i + "");
        }
        long end = System.currentTimeMillis();
        System.out.println("Total time: " + (end - start) + "ms " + " Size="+ names.size());
    }
}
