import java.util.HashMap;
import java.util.Map;

public class week2hashmap2 {

    public static void main(String[] args) {
        String[] keys = {"csdb", "dsh", "askj", "adfs"};
        int[] arr = {4, 5, 8, 9};
        String S = "askj";

        // Create a HashMap to store key-value pairs
        Map<String, Integer> map = new HashMap<>();

        // Populate the map with keys and their corresponding values
        for (int i = 0; i < keys.length; i++) {
            map.put(keys[i], arr[i]);
        }

        // Check if key S exists in the map
        if (map.containsKey(S)) {
            // Print the value associated with key S
            System.out.println("Value associated with key " + S + " is: " + map.get(S));
        } else {
            // Key S not found in the map
            System.out.println("Key " + S + " not found in the map.");
        }
    }
}


