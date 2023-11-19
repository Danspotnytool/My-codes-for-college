import java.io.*;

public class DanielJohnBaynosa {
    private static PrintStream log = System.out;
    private static BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] argument) throws IOException {
        // Prelim

        log.println("PRELIM");
        log.println();

        log.println("Lecture");
        log.println();

        log.println("Quizzes: ");
        log.print("Q1: ");
        double prelim_q1 = Double.parseDouble(reader.readLine());
        log.print("Q2: ");
        double prelim_q2 = Double.parseDouble(reader.readLine());
        log.print("Q3: ");
        double prelim_q3 = Double.parseDouble(reader.readLine());
        log.print("Q4: ");
        double prelim_q4 = Double.parseDouble(reader.readLine());
        log.print("Q5: ");
        double prelim_q5 = Double.parseDouble(reader.readLine());

        double prelim_quiz = (prelim_q1 + prelim_q2 + prelim_q3 + prelim_q4 + prelim_q5) / 5;
        prelim_quiz = prelim_quiz * 0.01;
        prelim_quiz = prelim_quiz * 0.35;

        log.println("Quiz: " + (prelim_quiz * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double prelim_ASS_Lec = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double prelim_BEH_Lec = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double prelim_ATT_Lec = Double.parseDouble(reader.readLine());
        log.print("REC: ");
        double prelim_REC_Lec = Double.parseDouble(reader.readLine());

        double prelim_classStanding_Lec = (prelim_ASS_Lec + prelim_BEH_Lec + prelim_ATT_Lec + prelim_REC_Lec) / 4;
        prelim_classStanding_Lec = prelim_classStanding_Lec * 0.01;
        prelim_classStanding_Lec = prelim_classStanding_Lec * 0.25;

        log.println("Class Standing: " + (prelim_classStanding_Lec * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Prelim Lecture Exam: ");
        double prelim_lectureExam = Double.parseDouble(reader.readLine());

        double prelim_majorExam_Lec = prelim_lectureExam;
        prelim_majorExam_Lec = prelim_majorExam_Lec * 0.01;
        prelim_majorExam_Lec = prelim_majorExam_Lec * 0.40;

        log.println("Major Exam: " + (prelim_majorExam_Lec * 100) + "%");

        log.println();

        double prelim_lectureGrade = prelim_quiz + prelim_classStanding_Lec + prelim_majorExam_Lec;

        log.println("Prelim Lecture Grade: " + (prelim_lectureGrade * 100) + "%");

        log.println();
        log.println();

        log.println("Laboratory");
        log.println();

        log.println("Machine Problem: ");
        log.print("MP1: ");
        double prelim_mp1 = Double.parseDouble(reader.readLine());
        log.print("MP2: ");
        double prelim_mp2 = Double.parseDouble(reader.readLine());
        log.print("MP3: ");
        double prelim_mp3 = Double.parseDouble(reader.readLine());

        double prelim_machineProblem = (prelim_mp1 + prelim_mp2 + prelim_mp3) / 3;
        prelim_machineProblem = prelim_machineProblem * 0.01;
        prelim_machineProblem = prelim_machineProblem * 0.45;

        log.println("Machine Problem: " + (prelim_machineProblem * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double prelim_ASS_Lab = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double prelim_BEH_Lab = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double prelim_ATT_Lab = Double.parseDouble(reader.readLine());

        double prelim_classStanding_Lab = (prelim_ASS_Lab + prelim_BEH_Lab + prelim_ATT_Lab) / 3;
        prelim_classStanding_Lab = prelim_classStanding_Lab * 0.01;
        prelim_classStanding_Lab = prelim_classStanding_Lab * 0.20;

        log.println("Class Standing: " + (prelim_classStanding_Lab * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Prelim Lecture Exam: ");
        double prelimLaboratoryExam = Double.parseDouble(reader.readLine());

        double prelimMajorExam_Lab = prelimLaboratoryExam;
        prelimMajorExam_Lab = prelimMajorExam_Lab * 0.01;
        prelimMajorExam_Lab = prelimMajorExam_Lab * 0.35;

        log.println("Major Exam: " + (prelimMajorExam_Lab * 100) + "%");

        log.println();

        double prelim_laboratoryGrade = prelim_machineProblem + prelim_classStanding_Lab + prelimMajorExam_Lab;

        log.println("Prelim Laboratory Grade: " + (prelim_laboratoryGrade * 100) + "%");

        log.println();
        log.println();

        double prelim_grade = (prelim_lectureGrade * 0.6) + (prelim_laboratoryGrade * 0.4);

        log.println("Prelim Grade: " + (prelim_grade * 100) + "%");

        log.println();
        log.println();
        log.println();

        // Midterm

        log.println("MIDTERM");
        log.println();

        log.println("Lecture");
        log.println();

        log.println("Quizzes: ");
        log.print("Q1: ");
        double midterm_q1 = Double.parseDouble(reader.readLine());
        log.print("Q2: ");
        double midterm_q2 = Double.parseDouble(reader.readLine());
        log.print("Q3: ");
        double midterm_q3 = Double.parseDouble(reader.readLine());
        log.print("Q4: ");
        double midterm_q4 = Double.parseDouble(reader.readLine());
        log.print("Q5: ");
        double midterm_q5 = Double.parseDouble(reader.readLine());

        double midterm_quiz = (midterm_q1 + midterm_q2 + midterm_q3 + midterm_q4 + midterm_q5) / 5;
        midterm_quiz = midterm_quiz * 0.01;
        midterm_quiz = midterm_quiz * 0.35;

        log.println("Quiz: " + (midterm_quiz * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double midterm_ASS_Lec = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double midterm_BEH_Lec = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double midterm_ATT_Lec = Double.parseDouble(reader.readLine());
        log.print("REC: ");
        double midterm_REC_Lec = Double.parseDouble(reader.readLine());

        double midterm_classStanding_Lec = (midterm_ASS_Lec + midterm_BEH_Lec + midterm_ATT_Lec + midterm_REC_Lec)
                / 4;
        midterm_classStanding_Lec = midterm_classStanding_Lec * 0.01;
        midterm_classStanding_Lec = midterm_classStanding_Lec * 0.25;

        log.println("Class Standing: " + (midterm_classStanding_Lec * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Midterm Lecture Exam: ");
        double midterm_lectureExam = Double.parseDouble(reader.readLine());

        double midterm_majorExam_Lec = midterm_lectureExam;
        midterm_majorExam_Lec = midterm_majorExam_Lec * 0.01;
        midterm_majorExam_Lec = midterm_majorExam_Lec * 0.40;

        log.println("Major Exam: " + (midterm_majorExam_Lec * 100) + "%");

        log.println();

        double midterm_lectureGrade = midterm_quiz + midterm_classStanding_Lec + midterm_majorExam_Lec;

        log.println("Midterm Lecture Grade: " + (midterm_lectureGrade * 100) + "%");

        log.println();
        log.println();

        log.println("Laboratory");
        log.println();

        log.println("Machine Problem: ");
        log.print("MP1: ");
        double midterm_mp1 = Double.parseDouble(reader.readLine());
        log.print("MP2: ");
        double midterm_mp2 = Double.parseDouble(reader.readLine());
        log.print("MP3: ");
        double midterm_mp3 = Double.parseDouble(reader.readLine());

        double midterm_machineProblem = (midterm_mp1 + midterm_mp2 + midterm_mp3) / 3;
        midterm_machineProblem = midterm_machineProblem * 0.01;
        midterm_machineProblem = midterm_machineProblem * 0.45;

        log.println("Machine Problem: " + (midterm_machineProblem * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double midterm_ASS_Lab = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double midterm_BEH_Lab = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double midterm_ATT_Lab = Double.parseDouble(reader.readLine());

        double midterm_classStanding_Lab = (midterm_ASS_Lab + midterm_BEH_Lab + midterm_ATT_Lab) / 3;
        midterm_classStanding_Lab = midterm_classStanding_Lab * 0.01;
        midterm_classStanding_Lab = midterm_classStanding_Lab * 0.20;

        log.println("Class Standing: " + (midterm_classStanding_Lab * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Midterm Lecture Exam: ");
        double midtermLaboratoryExam = Double.parseDouble(reader.readLine());

        double midtermMajorExam_Lab = midtermLaboratoryExam;
        midtermMajorExam_Lab = midtermMajorExam_Lab * 0.01;
        midtermMajorExam_Lab = midtermMajorExam_Lab * 0.35;

        log.println("Major Exam: " + (midtermMajorExam_Lab * 100) + "%");

        log.println();

        double midterm_laboratoryGrade = midterm_machineProblem + midterm_classStanding_Lab + midtermMajorExam_Lab;

        log.println("Midterm Laboratory Grade: " + (midterm_laboratoryGrade * 100) + "%");

        log.println();
        log.println();

        double midterm_grade = (midterm_lectureGrade * 0.6) + (midterm_laboratoryGrade * 0.4);

        log.println("Midterm Grade: " + (midterm_grade * 100) + "%");

        log.println();
        log.println();
        log.println();

        // Final

        log.println("Final");
        log.println();

        log.println("Lecture");
        log.println();

        log.println("Quizzes: ");
        log.print("Q1: ");
        double final_q1 = Double.parseDouble(reader.readLine());
        log.print("Q2: ");
        double final_q2 = Double.parseDouble(reader.readLine());
        log.print("Q3: ");
        double final_q3 = Double.parseDouble(reader.readLine());
        log.print("Q4: ");
        double final_q4 = Double.parseDouble(reader.readLine());
        log.print("Q5: ");
        double final_q5 = Double.parseDouble(reader.readLine());

        double final_quiz = (final_q1 + final_q2 + final_q3 + final_q4 + final_q5) / 5;
        final_quiz = final_quiz * 0.01;
        final_quiz = final_quiz * 0.35;

        log.println("Quiz: " + (final_quiz * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double final_ASS_Lec = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double final_BEH_Lec = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double final_ATT_Lec = Double.parseDouble(reader.readLine());
        log.print("REC: ");
        double final_REC_Lec = Double.parseDouble(reader.readLine());

        double final_classStanding_Lec = (final_ASS_Lec + final_BEH_Lec + final_ATT_Lec + final_REC_Lec)
                / 4;
        final_classStanding_Lec = final_classStanding_Lec * 0.01;
        final_classStanding_Lec = final_classStanding_Lec * 0.25;

        log.println("Class Standing: " + (final_classStanding_Lec * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Final Lecture Exam: ");
        double final_lectureExam = Double.parseDouble(reader.readLine());

        double final_majorExam_Lec = final_lectureExam;
        final_majorExam_Lec = final_majorExam_Lec * 0.01;
        final_majorExam_Lec = final_majorExam_Lec * 0.40;

        log.println("Major Exam: " + (final_majorExam_Lec * 100) + "%");

        log.println();

        double final_lectureGrade = final_quiz + final_classStanding_Lec + final_majorExam_Lec;

        log.println("Final Lecture Grade: " + (final_lectureGrade * 100) + "%");

        log.println();
        log.println();

        log.println("Laboratory");
        log.println();

        log.println("Machine Problem: ");
        log.print("MP1: ");
        double final_mp1 = Double.parseDouble(reader.readLine());
        log.print("MP2: ");
        double final_mp2 = Double.parseDouble(reader.readLine());
        log.print("MP3: ");
        double final_mp3 = Double.parseDouble(reader.readLine());

        double final_machineProblem = (final_mp1 + final_mp2 + final_mp3) / 3;
        final_machineProblem = final_machineProblem * 0.01;
        final_machineProblem = final_machineProblem * 0.45;

        log.println("Machine Problem: " + (final_machineProblem * 100) + "%");

        log.println();

        log.println("Class Standing: ");
        log.print("ASS: ");
        double final_ASS_Lab = Double.parseDouble(reader.readLine());
        log.print("BEH: ");
        double final_BEH_Lab = Double.parseDouble(reader.readLine());
        log.print("ATT: ");
        double final_ATT_Lab = Double.parseDouble(reader.readLine());

        double final_classStanding_Lab = (final_ASS_Lab + final_BEH_Lab + final_ATT_Lab) / 3;
        final_classStanding_Lab = final_classStanding_Lab * 0.01;
        final_classStanding_Lab = final_classStanding_Lab * 0.20;

        log.println("Class Standing: " + (final_classStanding_Lab * 100) + "%");

        log.println();

        log.println("Major Exam: ");
        log.print("Final Lecture Exam: ");
        double finalLaboratoryExam = Double.parseDouble(reader.readLine());

        double finalMajorExam_Lab = finalLaboratoryExam;
        finalMajorExam_Lab = finalMajorExam_Lab * 0.01;
        finalMajorExam_Lab = finalMajorExam_Lab * 0.35;

        log.println("Major Exam: " + (finalMajorExam_Lab * 100) + "%");

        log.println();

        double final_laboratoryGrade = final_machineProblem + final_classStanding_Lab + finalMajorExam_Lab;

        log.println("Final Laboratory Grade: " + (final_laboratoryGrade * 100) + "%");

        log.println();
        log.println();

        double final_grade = (final_lectureGrade * 0.6) + (final_laboratoryGrade * 0.4);

        log.println("Final Grade: " + (final_grade * 100) + "%");

        log.println();
        log.println();
        log.println();

        double totalFinalGrade = ((prelim_grade * 0.3) + (midterm_grade * 0.3) + (final_grade * 0.4)) * 100;

        log.println("Total Final Grade: " + totalFinalGrade + "%");

        log.println();
        log.println();
        log.println();

        log.print("Equivalent: ");
        if (totalFinalGrade >= 97 & totalFinalGrade <= 100)
            log.print("1.00");
        else if (totalFinalGrade >= 94 & totalFinalGrade < 97)
            log.print("1.25");
        else if (totalFinalGrade >= 91 & totalFinalGrade < 94)
            log.print("1.50");
        else if (totalFinalGrade >= 88 & totalFinalGrade < 91)
            log.print("1.75");
        else if (totalFinalGrade >= 85 & totalFinalGrade < 88)
            log.print("2.00");
        else if (totalFinalGrade >= 82 & totalFinalGrade < 85)
            log.print("2.25");
        else if (totalFinalGrade >= 79 & totalFinalGrade < 82)
            log.print("2.50");
        else if (totalFinalGrade >= 76 & totalFinalGrade < 79)
            log.print("2.75");
        else if (totalFinalGrade == 75)
            log.print("3.00");
        else if (totalFinalGrade < 75 & totalFinalGrade >= 0)
            log.print("5.00");
        else
            log.print("Invalid Grade");

        log.println();

        log.print("Remarks: ");
        if (totalFinalGrade >= 75)
            log.println("Passed");
        else
            log.println("Failed");
    };
};
