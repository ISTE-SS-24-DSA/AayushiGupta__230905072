import java.util.HashSet;
import java.util.Scanner;

public class week2hashset {

    public static void main(String[] args) {
        HashSet<Integer> hashSet = new HashSet<>();
        hashSet.add(10);
        hashSet.add(20);
        hashSet.add(30);
        hashSet.add(40);

        System.out.println("Elements in the HashSet: " + hashSet);
        System.out.println("Enter key: ");
        Scanner scanner = new Scanner(System.in);
        int key = scanner.nextInt();
        if (hashSet.contains(key)) {
            System.out.println("Found!");
        } else {
            System.out.println("Not found!");
        }
    }
}
