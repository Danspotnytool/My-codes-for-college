import java.io.*;

public class InputLetter {
    public static void main(String[] args) throws IOException {
        System.out.print("Enter a Letter: ");
        char letter = (char) System.in.read();
        System.out.println("The Inputted Letter is: " + letter);
    };
};