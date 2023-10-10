import java.io.*;

public class LessThan40Hours {
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    private static PrintStream log = System.out;

    public static void main(String[] arguments) throws IOException {
        log.println("Less than 40 hours");

        log.println();

        log.print("Employee Name: ");
        String name = reader.readLine();

        log.print("Number of hours worked: ");
        double hoursWorked = Double.parseDouble(reader.readLine());

        log.println("Invalid Hours");
    };
};
