import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        AccountSystem accSys = new AccountSystem();

        while (true) {
            System.out.println("=====================================");
            System.out.println("        Birthday Reminder App        ");
            System.out.println("=====================================");
            System.out.println("1. Create Account");
            System.out.println("2. Login");
            System.out.println("3. Exit");
            System.out.print("Choose: ");

            int ch = sc.nextInt();
            sc.nextLine();
            if (ch == 1) {
                User user = accSys.createAccount();  // auto login
                accSys.userMenu(user);

            } else if (ch == 2) {
                User user = accSys.login();
                if (user != null) {
                    accSys.userMenu(user);
                }
            } else {
                System.out.println("Thanks for using the app!");
                break;
            }
        }
    }
}
