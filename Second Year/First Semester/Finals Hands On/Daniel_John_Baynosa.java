import java.io.*;

public class Daniel_John_Baynosa {
    private static PrintStream log = System.out;
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] argument) throws IOException {
        log.print("Employee Name: ");
        String name = reader.readLine();

        log.print("Number of hours worked: ");
        double hoursWorked = Double.parseDouble(reader.readLine());

        double regularWorkHours = 40.00;

        double netIncome = regularWorkHours * 92.38;

        double SSS = netIncome * 0.0828;
        double philHealth = netIncome * 0.0915;
        double pagIbig = netIncome * 0.0702;
        double tax = netIncome * 0.12;

        double totalDeduction = SSS + philHealth + pagIbig + tax;

        if (hoursWorked < regularWorkHours) {
            log.println("Invalid Hours");
        } else if (hoursWorked == regularWorkHours) {
            double netPay = netIncome - totalDeduction;

            log.println("Net Income: " + netIncome);
            log.println("SSS: " + SSS);
            log.println("PhilHealth: " + philHealth);
            log.println("Pag-Ibig: " + pagIbig);
            log.println("Tax: " + tax);
            log.println("Total Deduction: " + totalDeduction);
            log.println();
            log.println("Net Pay: " + netPay);
        } else if (hoursWorked > regularWorkHours) {
            double overtimeHours = hoursWorked - regularWorkHours;
            double overtimePay = (overtimeHours * 92.38) * 1.5;
            double netPay = netIncome + overtimePay - totalDeduction;

            log.println("Net Income: " + netIncome);
            log.println("Overtime hour/s: " + overtimeHours);
            log.println("Overtime Fee/s: " + overtimePay);

            log.println("Total Deduction: " + totalDeduction);

            log.println();
            log.println("Net Pay: " + netPay);
        };
    };
};
