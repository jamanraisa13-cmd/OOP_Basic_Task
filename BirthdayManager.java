import java.util.*;

public class BirthdayManager {
    // ADD FRIEND
    public void addFriend(String userEmail) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Friend Name: ");
        String fname = sc.nextLine();

        System.out.print("Phone Number: ");
        String phone = sc.nextLine();

        System.out.print("Friend Email (optional): ");
        String femail = sc.nextLine();

        System.out.print("Birthday (dd-mm-yyyy): ");
        String bday = sc.nextLine();

        String save = userEmail + "," + fname + "," + phone + "," + femail + "," + bday;

        FileHandler.saveLine("friends.txt", save);

        System.out.println("Friend added successfully!");
    }
    // REMOVE FRIEND
    public void removeFriend(String userEmail) {
        Scanner sc = new Scanner(System.in);

        ArrayList<String> list = FileHandler.readLines("friends.txt");

        ArrayList<String> myFriends = new ArrayList<>();

        System.out.println("------------- Your Friends -------------");

        // Show all friend names with index
        int index = 1;
        for (String line : list) {
            String[] p = line.split(",");

            if (p[0].equals(userEmail)) {
                System.out.println(index + ". " + p[1]);
                myFriends.add(line);
                index++;
            }
        }

        if (myFriends.size() == 0) {
            System.out.println("You have no friends added.");
            return;
        }

        System.out.print("Select number to remove: ");
        int choice = sc.nextInt();
        sc.nextLine();

        if (choice < 1 || choice > myFriends.size()) {
            System.out.println("Invalid choice.");
            return;
        }

        String removeLine = myFriends.get(choice - 1);

        // Now rewrite the file without removed one
        ArrayList<String> newList = new ArrayList<>();

        for (String line : list) {
            if (!line.equals(removeLine)) {
                newList.add(line);
            }
        }

        FileHandler.writeAll("friends.txt", newList);

        System.out.println("Friend removed!");
    }

    // VIEW FRIENDS
    public void viewFriends(String email) {
        ArrayList<String> list = FileHandler.readLines("friends.txt");

        System.out.println("--------------- Friend List ---------------");

        for (String line : list) {
            String[] p = line.split(",");

            if (p[0].equals(email)) {
                System.out.println(
                    "Name: " + p[1] +
                    " | Phone: " + p[2] +
                    " | Email: " + p[3] +
                    " | Birthday: " + p[4]
                );
            }
        }
    }

}
