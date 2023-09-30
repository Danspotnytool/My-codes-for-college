import java.util.Scanner;

class Currency {
    private String name = "";

    public Currency(String name) {
        setName(name);
    };

    void setName(String str) {
        name = str;
    };

    void introduce() {
        System.out.println("Hi! I am " + name);
    };
}

public class Money {
    static String reverseString(String str) {
        String reversed = "";
        for (int i = str.length(); i > 0; i--) {
            reversed += str.charAt(i - 1);
        }
        return reversed;
    }

    public static void main(String[] args) {

        // Currency peso = new Currency("Peso");
        // peso.introduce();

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int rawMoney = scanner.nextInt();

        String stringMoney = "" + rawMoney;

        String reversed = reverseString(stringMoney);
        String reversedWithComma = "";
        for (int i = 0; i < stringMoney.length(); i++) {
            if (((i % 3) == 0) && i != 0) {
                reversedWithComma += ",";
            }
            reversedWithComma += reversed.charAt(i);
        }

        String finalMoney = reverseString(reversedWithComma);
        System.out.println(finalMoney);

        scanner.close();
    };
};