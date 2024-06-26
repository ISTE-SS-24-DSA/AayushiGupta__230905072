import java.util.HashMap;
import java.util.Map;

public class week2hashmap2 {

    public static void main(String[] args) {
        String[] keys = {"csdb", "dsh", "askj", "adfs"};
        int[] arr = {4, 5, 8, 9};
        String S = "askj";

        Map<String, Integer> map = new HashMap<>();

        for (int i = 0; i < keys.length; i++) {
            map.put(keys[i], arr[i]);
        }

        if (map.containsKey(S)) {

            System.out.println("Value associated with key " + S + " is: " + map.get(S));
        } else {

            System.out.println("Key " + S + " not found in the map.");
        }
    }
}


