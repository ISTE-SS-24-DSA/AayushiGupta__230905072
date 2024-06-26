import java.util.HashMap;
import java.util.Map;

public class week2hashmap {
    public static void main(String[] args) {
        HashMap<Integer, Integer> hmp = new HashMap<>();
        int[] array = {1, 2, 3, 3, 3, 3, 4, 4, 4, 4, 7, 7};

        for (int it : array) {
            if (hmp.containsKey(it)) {
                hmp.put(it, hmp.get(it) + 1);
            } else {
                hmp.put(it, 1);
            }
        }

        for (Map.Entry<Integer, Integer> entry : hmp.entrySet()) {
            System.out.println("Element: " + entry.getKey() + ", Frequency: " + entry.getValue());
        }
    }
}
