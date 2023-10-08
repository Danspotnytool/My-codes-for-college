import java.io.*;

public class DanielJohnBaynosa {
    public static BufferedReader numReader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        double lectureGrade, laboratoryGrade, prelimGrade;
        double lectureGradePercentage = (double) 0.60;
        double laboratoryGradePercentage = (double) 0.40;

        double quizPercentage_Lecture = (double) 0.45;
        double classStandingPercentage_Lecture = (double) 0.20;
        double lectureExam_Lecture = (double) 0.35;

        System.out.println("Lecture Grade");

        System.out.println();

        // Quiz Lecture
        System.out.println("Quiz is " + (double) (quizPercentage_Lecture * 100) + "%");
        double quiz1, quiz2, quiz3, quiz4;
        double quizTotal;

        System.out.print("Quiz 1: ");
        quiz1 = Integer.parseInt(numReader.readLine());
        System.out.print("Quiz 2: ");
        quiz2 = Integer.parseInt(numReader.readLine());
        System.out.print("Quiz 3: ");
        quiz3 = Integer.parseInt(numReader.readLine());
        System.out.print("Quiz 4: ");
        quiz4 = Integer.parseInt(numReader.readLine());

        quizTotal = (quiz1 + quiz2 + quiz3 + quiz4) / 4;
        quizTotal = (double) (quizTotal * (double) 0.01);
        quizTotal = ((double) quizTotal * quizPercentage_Lecture) * 100;
        System.out.println("Total Quiz is: " + quizTotal);

        System.out.println();

        // Class Standing Lecture
        System.out.println("Class Standing is " + (double) (classStandingPercentage_Lecture * 100) + "%");
        double attendance, assignment, recitation, seatWork;
        double classStandingTotal;

        System.out.print("Attendance: ");
        attendance = Integer.parseInt(numReader.readLine());
        System.out.print("Assignment: ");
        assignment = Integer.parseInt(numReader.readLine());
        System.out.print("Recitation: ");
        recitation = Integer.parseInt(numReader.readLine());
        System.out.print("Seat Work: ");
        seatWork = Integer.parseInt(numReader.readLine());

        classStandingTotal = (attendance + assignment + recitation + seatWork) / 4;
        classStandingTotal = (double) (classStandingTotal * (double) 0.01);
        classStandingTotal = ((double) classStandingTotal * classStandingPercentage_Lecture) * 100;
        System.out.println("Total Class Standing is: " + classStandingTotal);

        System.out.println();

        // Prelim Lecture
        System.out.println("Prelim Lecture Exam is " + (double) (lectureExam_Lecture * 100) + "%");
        double prelimLectureExam, prelimLecturePerformanceTask;
        double prelimLectureExamTotal;

        System.out.print("Prelim Lecture Exam: ");
        prelimLectureExam = Integer.parseInt(numReader.readLine());
        System.out.print("Prelim Lecture Performance Task: ");
        prelimLecturePerformanceTask = Integer.parseInt(numReader.readLine());

        prelimLectureExamTotal = (prelimLectureExam + prelimLecturePerformanceTask) / 2;
        prelimLectureExamTotal = (double) (prelimLectureExamTotal * (double) 0.01);
        prelimLectureExamTotal = ((double) prelimLectureExamTotal * lectureExam_Lecture) * 100;
        System.out.println("Total Prelim Lecture Exam is: " + prelimLectureExamTotal);

        System.out.println();

        lectureGrade = quizTotal + classStandingTotal + prelimLectureExamTotal;
        System.out.println("Lecture Grade = Total Quiz + Total Class Standing + Total Exam");
        System.out.println("Lecture Grade: " + lectureGrade);

        System.out.println();

        double performanceTask_Laboratory = (double) 0.40;
        double classStandingPercentage_Laboratory = (double) 0.20;
        double lectureExam_Laboratory = (double) 0.40;

        System.out.println("Laboratory Grade");

        System.out.println();

        // Performance Task Laboratory
        System.out.println("Performance Task is " + (double) (performanceTask_Laboratory * 100) + "%");
        double performanceTask1, performanceTask2, performanceTask3;
        double performanceTaskTotal;

        System.out.print("Performance Task 1: ");
        performanceTask1 = Integer.parseInt(numReader.readLine());
        System.out.print("Performance Task 2: ");
        performanceTask2 = Integer.parseInt(numReader.readLine());
        System.out.print("Performance Task 3: ");
        performanceTask3 = Integer.parseInt(numReader.readLine());

        performanceTaskTotal = (performanceTask1 + performanceTask2 + performanceTask3) / 3;
        performanceTaskTotal = (double) (performanceTaskTotal * (double) 0.01);
        performanceTaskTotal = ((double) performanceTaskTotal * performanceTask_Laboratory) * 100;
        System.out.println("Total Performance Task is: " + performanceTaskTotal);

        System.out.println();

        // Class Standing Laboratory
        System.out.println("Class Standing is " + (double) (classStandingPercentage_Laboratory * 100) + "%");
        double attendance_Laboratory, assignment_Laboratory, seatWork_Laboratory;
        double classStandingTotal_Laboratory;

        System.out.print("Attendance: ");
        attendance_Laboratory = Integer.parseInt(numReader.readLine());
        System.out.print("Assignment: ");
        assignment_Laboratory = Integer.parseInt(numReader.readLine());
        System.out.print("Seat Work: ");
        seatWork_Laboratory = Integer.parseInt(numReader.readLine());

        classStandingTotal_Laboratory = (attendance_Laboratory + assignment_Laboratory
                + seatWork_Laboratory) / 3;
        classStandingTotal_Laboratory = (double) (classStandingTotal_Laboratory * (double) 0.01);
        classStandingTotal_Laboratory = ((double) classStandingTotal_Laboratory * classStandingPercentage_Laboratory)
                * 100;
        System.out.println("Total Class Standing is: " + classStandingTotal_Laboratory);

        System.out.println();

        // Class Standing Lecture
        System.out.println("Prelim Lecture Exam is " + (double) (lectureExam_Laboratory * 100) + "%");
        double prelimLaboratoryExam, prelimLaboratoryPerformanceTask;
        double prelimLaboratoryExamTotal;

        System.out.print("Prelim Laboratory Exam: ");
        prelimLaboratoryExam = Integer.parseInt(numReader.readLine());
        System.out.print("Prelim Laboratory Performance Task: ");
        prelimLaboratoryPerformanceTask = Integer.parseInt(numReader.readLine());

        prelimLaboratoryExamTotal = (prelimLaboratoryExam + prelimLaboratoryPerformanceTask) / 2;
        prelimLaboratoryExamTotal = (double) (prelimLaboratoryExamTotal * (double) 0.01);
        prelimLaboratoryExamTotal = ((double) prelimLaboratoryExamTotal * lectureExam_Laboratory) * 100;
        System.out.println("Total Prelim Laboratory Exam is: " + prelimLaboratoryExamTotal);

        System.out.println();

        laboratoryGrade = performanceTaskTotal + classStandingTotal_Laboratory + prelimLaboratoryExamTotal;
        System.out.println("Laboratory Grade = Total Machine Problem + Total Class Standing + Total Exam");
        System.out.println("Laboratory Grade: " + laboratoryGrade);

        System.out.println();

        prelimGrade = (lectureGrade * lectureGradePercentage) + (laboratoryGrade * laboratoryGradePercentage);
        System.out.println(
                "Prelim Grade = Lecture is " + (double) (lectureGrade * lectureGradePercentage)
                        + "% + Laboratory Grade "
                        + (double) (laboratoryGrade * laboratoryGradePercentage) + "%");
        System.out.println("Prelim Grade: " + prelimGrade);

    }
}
