import java.util.*;

public class AccountSystem {
    Scanner sc = new Scanner(System.in);
    // Create Account (name, email, password)
    public User createAccount() {

        System.out.println("------------- Create Account -------------");
        System.out.print("Enter Full Name: ");
        String name = sc.nextLine();
        System.out.print("Enter Email: ");
        String email = sc.nextLine();
        System.out.print("Enter Password: ");
        String pass = sc.nextLine();
        String save = name + "," + email + "," + pass;
        FileHandler.saveLine("users.txt", save);

        System.out.println("Account created!");
        System.out.println("Logged in automatically!");

        return new User(name, email, pass);
    }
    // Login
    public User login() {

        System.out.println("--------------- Login ---------------");

        System.out.print("Email: ");
        String email = sc.nextLine();

        System.out.print("Password: ");
        String pass = sc.nextLine();

        ArrayList<String> list = FileHandler.readLines("users.txt");

        for (String line : list) {
            String[] p = line.split(",");

            if (p[1].equals(email) && p[2].equals(pass)) {
                System.out.println("Login successful!");
                return new User(p[0], p[1], p[2]);
            }
        }

        System.out.println("Wrong email or password.");
        return null;
    }

    // User Menu
    public void userMenu(User user) {
        BirthdayManager bm = new BirthdayManager();

        while (true) {

            System.out.println("\n=====================================");
            System.out.println(" Welcome, " + user.name);
            System.out.println("=====================================");
            System.out.println("1. Add Friend");
            System.out.println("2. Remove Friend");
            System.out.println("3. View Friends");
            System.out.println("4. Upcoming Birthdays");
            System.out.println("5. Logout");
            System.out.print("Choose: ");

            int ch = sc.nextInt();
            sc.nextLine();

            if (ch == 1) bm.addFriend(user.email);
            else if (ch == 2) bm.removeFriend(user.email);
            else if (ch == 3) bm.viewFriends(user.email);
            else if (ch == 4) bm.upcomingBirthdays(user.email);
            else {
                System.out.println("Logged out!");
                break;
            }
        }
    }
}
