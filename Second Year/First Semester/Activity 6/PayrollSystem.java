import java.io.*;

public class PayrollSystem {
    private static PrintStream o = System.out;
    private static BufferedReader num = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] argument) throws IOException {
        o.print("Enter Employee Name: ");
        String name = num.readLine();

        o.print("Enter No. of Hour/s Worked: ");
        int NHW = Integer.parseInt(num.readLine());

        double NI = NHW * 62.35;
        o.println("Net Income is: " + NI);

        double SSS = NI * 0.828;
        o.println("Social Security System is: " + SSS);

        double PH = NI * 0.0915;
        o.println("PhilHealth is: " + PH);

        double PI = NI * 0.702;
        o.println("Pag-Ibig is: " + PI);

        double TAX = NI * 0.12;
        o.println("TAX is: " + TAX);

        double TD = SSS + PH + PI + TAX;
        o.println("Total Deduction is: " + TD);

        double NP = NI - TD;
        o.println("Net Pay is: " + NP);
    };
};
