import java.io.*;

public class WithOvertime {
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    private static PrintStream log = System.out;

    public static void main(String[] arguments) throws IOException {
        log.println("With Overtime or greater than 40 Hours");

        log.println();

        log.print("Employee Name: ");
        String name = reader.readLine();

        log.print("Number of hours worked: ");
        double hoursWorked = Double.parseDouble(reader.readLine());

        double netIncome = hoursWorked * 98.64;
        double overTimeHours = hoursWorked - 40;
        double overTimeFees = overTimeHours * 98.64;
        netIncome += overTimeFees;

        double SSS = netIncome * 0.0927;
        double philHealth = netIncome * 0.0765;
        double pagIbig = netIncome * 0.0712;
        double tax = netIncome * 0.12;

        double totalDeduction = SSS + philHealth + pagIbig + tax;
        double netPay = netIncome - totalDeduction;

        log.println("Net Income: " + netIncome);
        log.println("Overtime Hour/s: " + overTimeHours);
        log.println("Overtime Fee/s: " + overTimeFees);

        log.println();

        log.println("Total Deduction: " + totalDeduction);

        log.println();

        log.println("Net Pay: " + netPay);
    };
};
