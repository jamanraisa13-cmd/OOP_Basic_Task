import java.io.*;
import java.util.*;

public class FileHandler {

    // Save one line inside a file
    public static void saveLine(String fileName, String data) {
        try {
            FileWriter fw = new FileWriter(fileName, true);
            fw.write(data + "\n");
            fw.close();
        } catch (Exception e) {
            System.out.println("Error writing to file.");
        }
    }

    // Read all lines from file
    public static ArrayList<String> readLines(String fileName) {
        ArrayList<String> list = new ArrayList<>();

        try {
            File f = new File(fileName);
            if (!f.exists()) return list;

            Scanner sc = new Scanner(f);

            while (sc.hasNextLine()) {
                list.add(sc.nextLine());
            }
            sc.close();

        } catch (Exception e) {
            System.out.println("Error reading file.");
        }

        return list;
    }

    // Overwrite file completely
    public static void writeAll(String fileName, ArrayList<String> data) {
        try {
            FileWriter fw = new FileWriter(fileName);
            for (String line : data) fw.write(line + "\n");
            fw.close();

        } catch (Exception e) {
            System.out.println("Error overwriting file.");
        }
    }
}
