import java.io.*;

public class GreaterThan40 {
    private static PrintStream o = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] argument) throws IOException {
        o.print("Enter Employee Name: ");
        String name = num.readLine();

        o.print("Enter No. of Hour/s Worked: ");
        int NHW = Integer.parseInt(num.readLine());

        double OTH = NHW - 40;
        o.println("Overtime Hour/s is" + OTH);

        double OTF = OTH * 1.5 * 62.35;
        o.println("Overtime Fee is" + OTF);

        double NI2 = 40 * 62.35;
        o.println("Net Income is: " + NI2);

        double SSS = NI2 * 0.828;
        o.println("Social Security System is: " + SSS);

        double PH = NI2 * 0.0915;
        o.println("PhilHealth is: " + PH);

        double PI = NI2 * 0.702;
        o.println("Pag-Ibig is: " + PI);

        double TAX = NI2 * 0.12;
        o.println("TAX is: " + TAX);

        double TD2 = (SSS + PH + PI + TAX);
        o.println("Total Deduction is: " + TD2);

        double NP2 = (NI2 - TD2) + OTF;
        o.println("Net Pay is: " + NP2);
    };
};
