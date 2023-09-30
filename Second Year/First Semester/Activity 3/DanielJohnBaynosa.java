import java.io.*;

public class DanielJohnBaynosa {
    private static BufferedReader numScanner = new BufferedReader(new InputStreamReader(System.in));

    private static PrintStream log = System.out;

    public static void main(String[] args) throws IOException {
        log.print("Enter First Number: ");
        int num1 = Integer.parseInt(numScanner.readLine());
        log.print("Enter Second Number: ");
        int num2 = Integer.parseInt(numScanner.readLine());

        float sum = num1 + num2;
        float diff = num1 - num2;
        float prod = num1 * num2;
        float quot = num1 / num2;

        log.println("");

        log.println("The sum is: " + sum);
        log.println("The diff is: " + diff);
        log.println("The prod is: " + prod);
        log.println("The quot is: " + quot);
    };
};