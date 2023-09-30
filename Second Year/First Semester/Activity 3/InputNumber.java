import java.io.*;

public class InputNumber {
    private static BufferedReader num = new BufferedReader(new InputStreamReader((System.in)));

    public static void main(String[] args) throws IOException {
        System.out.print("Enter a Number: ");
        int Number = Integer.parseInt(num.readLine());
        System.out.println("The Inputted Number is: " + Number);
    };
};