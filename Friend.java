public class Friend extends User {
    String phone;
    String friendEmail;
    String birthday;

    public Friend(String name, String phone, String email, String bday) {
        this.name = name;
        this.phone = phone;
        this.friendEmail = email;
        this.birthday = bday;
    }
}
