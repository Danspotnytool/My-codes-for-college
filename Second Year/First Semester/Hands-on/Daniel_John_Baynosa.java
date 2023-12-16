import java.io.*;

public class Daniel_John_Baynosa {
    private static PrintStream log = System.out;
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] arguments) throws IOException {
        log.println("Lecture");
        log.println();

        log.println("Quizes: ");
        log.print("\tQ1: ");
        double q1 = Double.parseDouble(reader.readLine());
        log.print("\tQ2: ");
        double q2 = Double.parseDouble(reader.readLine());
        log.print("\tQ3: ");
        double q3 = Double.parseDouble(reader.readLine());
        log.print("\tQ4: ");
        double q4 = Double.parseDouble(reader.readLine());
        log.print("\tQ5: ");
        double q5 = Double.parseDouble(reader.readLine());

        double quiz = (q1 + q2 + q3 + q4 + q5) / 5;
        quiz = quiz * 0.01;
        quiz = quiz * 0.30;

        log.println("Quiz: " + (quiz * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("\tHW: ");
        double hw_Lec = Double.parseDouble(reader.readLine());
        log.print("\tBEH: ");
        double beh_Lec = Double.parseDouble(reader.readLine());
        log.print("\tATT: ");
        double att_Lec = Double.parseDouble(reader.readLine());
        log.print("\tREC: ");
        double rec_Lec = Double.parseDouble(reader.readLine());

        double classStanding_Lec = (hw_Lec + beh_Lec + att_Lec + rec_Lec) / 4;
        classStanding_Lec = classStanding_Lec * 0.01;
        classStanding_Lec = classStanding_Lec * 0.20;

        log.println("Class Standing: " + (classStanding_Lec * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("\tPrelim Lecture Exam: ");
        double lectureExam = Double.parseDouble(reader.readLine());

        double majorExam_Lec = lectureExam;
        majorExam_Lec = majorExam_Lec * 0.01;
        majorExam_Lec = majorExam_Lec * 0.50;

        log.println("Major Exam: " + (majorExam_Lec * 100) + "%");

        log.println();

        double lectureGrade = quiz + classStanding_Lec + majorExam_Lec;

        log.println("Prelim Lecture Grade: " + (lectureGrade * 100) + "%");

        log.println();
        log.println();
        log.println();

        log.println("Laboratory");
        log.println();

        log.println("Machine Problem: ");
        log.print("\tMP1: ");
        double mp1 = Double.parseDouble(reader.readLine());
        log.print("\tMP2: ");
        double mp2 = Double.parseDouble(reader.readLine());
        log.print("\tMP3: ");
        double mp3 = Double.parseDouble(reader.readLine());
        log.print("\tMP4: ");
        double mp4 = Double.parseDouble(reader.readLine());

        double machineProblem = (mp1 + mp2 + mp3 + mp4) / 4;
        machineProblem = machineProblem * 0.01;
        machineProblem = machineProblem * 0.50;

        log.println("Machine Problem: " + (machineProblem * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("\tACT: ");
        double act_Lab = Double.parseDouble(reader.readLine());
        log.print("\tSW: ");
        double sw_Lab = Double.parseDouble(reader.readLine());
        log.print("\tCOMP: ");
        double comp_Lab = Double.parseDouble(reader.readLine());

        double classStanding_Lab = (act_Lab + sw_Lab + comp_Lab) / 3;
        classStanding_Lab = classStanding_Lab * 0.01;
        classStanding_Lab = classStanding_Lab * 0.10;

        log.println("Class Standing: " + (classStanding_Lab * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("\tPrelim Laboratory Exam: ");
        double laboratoryExam = Double.parseDouble(reader.readLine());

        double majorExam_Lab = laboratoryExam;
        majorExam_Lab = majorExam_Lab * 0.01;
        majorExam_Lab = majorExam_Lab * 0.40;

        log.println("Major Exam: " + (majorExam_Lab * 100) + "%");

        log.println();

        double laboratoryGrade = machineProblem + classStanding_Lab + majorExam_Lab;

        log.println("Prelim Laboratory Grade: " + (laboratoryGrade * 100) + "%");

        log.println();

        double prelimGrade = ((lectureGrade * 0.40) + (laboratoryGrade * 0.60)) * 100;

        log.println("Prelim Grade: " + prelimGrade + "%");

        log.println();
        log.print("Equivalent: ");
        if (prelimGrade >= 97 & prelimGrade <= 100)
            log.print("1.00");
        else if (prelimGrade >= 94 & prelimGrade < 97)
            log.print("1.25");
        else if (prelimGrade >= 91 & prelimGrade < 94)
            log.print("1.50");
        else if (prelimGrade >= 88 & prelimGrade < 91)
            log.print("1.75");
        else if (prelimGrade >= 85 & prelimGrade < 88)
            log.print("2.00");
        else if (prelimGrade >= 82 & prelimGrade < 85)
            log.print("2.25");
        else if (prelimGrade >= 79 & prelimGrade < 82)
            log.print("2.50");
        else if (prelimGrade >= 76 & prelimGrade < 79)
            log.print("2.75");
        else if (prelimGrade == 75)
            log.print("3.00");
        else if (prelimGrade < 75 & prelimGrade >= 0)
            log.print("5.00");
        else
            log.print("Invalid Grade");

        log.println();

        log.print("Remarks: ");
        if (prelimGrade >= 75 & prelimGrade <= 100)
            log.println("Passed");
        else
            log.println("Failed");
    };
};
