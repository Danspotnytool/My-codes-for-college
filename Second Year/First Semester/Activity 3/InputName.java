import java.io.*;

public class InputName {
    private static PrintStream o = System.out;
    private static BufferedReader name = new BufferedReader(new InputStreamReader((System.in)));

    public static void main(String[] args) throws IOException {
        o.print("Enter a Name: ");
        String Name = name.readLine();
        o.println("The Inputted Name is: " + Name);
    };
};