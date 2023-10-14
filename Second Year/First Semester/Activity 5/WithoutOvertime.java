import java.io.*;

public class WithoutOvertime {
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    private static PrintStream log = System.out;

    public static void main(String[] arguments) throws IOException {
        log.println("Without Overtime or equal to 40 Hours");

        log.println();

        log.print("Employee Name: ");
        String name = reader.readLine();

        log.print("Number of hours worked: ");
        double hoursWorked = Double.parseDouble(reader.readLine());

        double netIncome = hoursWorked * 98.64;

        double SSS = netIncome * 0.0927;
        double philHealth = netIncome * 0.0765;
        double pagIbig = netIncome * 0.0712;
        double tax = netIncome * 0.12;

        double totalDeduction = SSS + philHealth + pagIbig + tax;
        double netPay = netIncome - totalDeduction;

        log.println("Net Income: " + netIncome);
        log.println("SSS: " + SSS);
        log.println("PH: " + philHealth);
        log.println("PI: " + pagIbig);
        log.println("TAX: " + tax);
        log.println("Total Deduction: " + totalDeduction);

        log.println();

        log.println("Net Pay: " + netPay);
    };
};
