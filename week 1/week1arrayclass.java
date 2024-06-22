import java.util.*;

public class week1arrayclass {

    public static void main(String[] args) {
        ArrayList lis = new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        System.out.println("enter numbers, press -1 to stop:");

        while (true) {
            int num = sc.nextInt();
            if (num == -1) {
                break;
            }
            lis.add(num);
        }

        Collections.sort(lis);

        System.out.print("The sorted list is: ");
        System.out.print(lis);
        System.out.println(" ");

        Collections.reverse(lis);
        System.out.print("The sorted list in reverse order is: ");
        System.out.print(lis);
        System.out.println(" ");

        System.out.print("Elements in the ArrayList:");
        Iterator<Integer> iterator = lis.iterator();
        while (iterator.hasNext()) {
            System.out.print(iterator.next()+" ");
        }
        System.out.println(" ");

        System.out.print("Elements in reverse order:");
        ListIterator<Integer> listIterator = lis.listIterator(lis.size());
        while (listIterator.hasPrevious()) {
            System.out.print(listIterator.previous()+" ");
        }

    }
}
