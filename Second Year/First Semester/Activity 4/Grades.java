import java.io.*;

public class Grades {
    public static BufferedReader numReader = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] arguments) throws IOException {
        float lectureGrade, laboratoryGrade, prelimGrade;

        {
            // Lecture Grade
            System.out.println("Lecture Grade");
            System.out.println();

            final float quiz_Lecture = 45;
            final float classStanding_Lecture = 20;
            final float prelimLectureExam_Lecture = 35;

            // Quizzes
            System.out.println("Quizzes is 45%");
            float quiz1, quiz2, quiz3, quiz4, quizTotal;

            System.out.print("Quiz 1: ");
            quiz1 = Float.parseFloat(numReader.readLine());
            System.out.print("Quiz 2: ");
            quiz2 = Float.parseFloat(numReader.readLine());
            System.out.print("Quiz 3: ");
            quiz3 = Float.parseFloat(numReader.readLine());
            System.out.print("Quiz 4: ");
            quiz4 = Float.parseFloat(numReader.readLine());

            quizTotal = (quiz1 + quiz2 + quiz3 + quiz4) / 4; // Getting The Average of quizzes
            quizTotal = quizTotal * (float) 0.01; // Converting the Average to Decimal Average
            quizTotal = quizTotal * quiz_Lecture; // Getting the Final Grade
            System.out.println("Total Quiz is: " + quizTotal);

            System.out.println();

            // Class Standing
            System.out.println("Class Standing is 20%");
            float attendance, assignment, recitation, seatWork, classStandingTotal;

            System.out.print("Attendance: ");
            attendance = Float.parseFloat(numReader.readLine());
            System.out.print("Assignment: ");
            assignment = Float.parseFloat(numReader.readLine());
            System.out.print("Recitation: ");
            recitation = Float.parseFloat(numReader.readLine());
            System.out.print("Seat Work: ");
            seatWork = Float.parseFloat(numReader.readLine());

            classStandingTotal = (attendance + assignment + recitation + seatWork) / 4; // Getting The Average of
                                                                                        // quizzes
            classStandingTotal = classStandingTotal * (float) 0.01; // Converting the Average to Decimal Average
            classStandingTotal = classStandingTotal * classStanding_Lecture;
            System.out.println("Total Class Standing is: " + classStandingTotal);

            System.out.println();

            // Prelim lecture Exam
            System.out.println("Prelim lecture Exam is 35%");
            float prelimLectureExam, prelimLecturePerformanceTask, prelimLectureExamTotal;

            System.out.print("Prelim lecture Exam: ");
            prelimLectureExam = Float.parseFloat(numReader.readLine());
            System.out.print("Prelim lecture Performance Task: ");
            prelimLecturePerformanceTask = Float.parseFloat(numReader.readLine());

            prelimLectureExamTotal = (prelimLectureExam + prelimLecturePerformanceTask) / 2; // Getting The Average of
                                                                                             // quizzes
            prelimLectureExamTotal = prelimLectureExamTotal * (float) 0.01; // Converting the Average to Decimal Average
            prelimLectureExamTotal = prelimLectureExamTotal * prelimLectureExam_Lecture;
            System.out.println("Total Prelim lecture Exam is: " + prelimLectureExamTotal);

            System.out.println();

            lectureGrade = quizTotal + classStandingTotal + prelimLectureExamTotal;
            System.out.println("Lecture Grade: " + lectureGrade);
        }

        System.out.println();

        {
            // Laboratory Grade
            System.out.println("Laboratory Grade");
            System.out.println();

            final float performanceTask_Laboratory = 40;
            final float classStanding_Laboratory = 20;
            final float prelimLaboratoryExam_Laboratory = 40;

            // Quizzes
            System.out.println("Performance Task is 40%");
            float performanceTask1, performanceTask2, performanceTask3, performanceTaskTotal;

            System.out.print("Performance Task 1: ");
            performanceTask1 = Float.parseFloat(numReader.readLine());
            System.out.print("Performance Task 2: ");
            performanceTask2 = Float.parseFloat(numReader.readLine());
            System.out.print("Performance Task 3: ");
            performanceTask3 = Float.parseFloat(numReader.readLine());

            performanceTaskTotal = (performanceTask1 + performanceTask2 + performanceTask3) / 3; // Getting The Average
                                                                                                 // // of quizzes
            performanceTaskTotal = performanceTaskTotal * (float) 0.01; // Converting the Average to Decimal Average
            performanceTaskTotal = performanceTaskTotal * performanceTask_Laboratory; // Getting the Final Grade
            System.out.println("Total Quiz is: " + performanceTaskTotal);

            System.out.println();

            // Class Standing
            System.out.println("Class Standing is 20%");
            float attendance, recitation, seatWork, classStandingTotal;

            System.out.print("Attendance: ");
            attendance = Float.parseFloat(numReader.readLine());
            System.out.print("Recitation: ");
            recitation = Float.parseFloat(numReader.readLine());
            System.out.print("Seat Work: ");
            seatWork = Float.parseFloat(numReader.readLine());

            classStandingTotal = (attendance + recitation + seatWork) / 3; // Getting The Average of
                                                                           // quizzes
            classStandingTotal = classStandingTotal * (float) 0.01; // Converting the Average to Decimal Average
            classStandingTotal = classStandingTotal * classStanding_Laboratory;
            System.out.println("Total Class Standing is: " + classStandingTotal);

            System.out.println();

            // Prelim laboratory Exam
            System.out.println("Prelim laboratory Exam is 35%");
            float prelimLaboratoryExam, prelimLaboratoryPerformanceTask, prelimLaboratoryExamTotal;

            System.out.print("Prelim laboratory Exam: ");
            prelimLaboratoryExam = Float.parseFloat(numReader.readLine());
            System.out.print("Prelim laboratory Performance Task: ");
            prelimLaboratoryPerformanceTask = Float.parseFloat(numReader.readLine());

            prelimLaboratoryExamTotal = (prelimLaboratoryExam + prelimLaboratoryPerformanceTask) / 2; // Getting The
                                                                                                      // Average of
                                                                                                      // quizzes
            prelimLaboratoryExamTotal = prelimLaboratoryExamTotal * (float) 0.01; // Converting the Average to Decimal
                                                                                  // Average
            prelimLaboratoryExamTotal = prelimLaboratoryExamTotal * prelimLaboratoryExam_Laboratory;
            System.out.println("Total Prelim laboratory Exam is: " + prelimLaboratoryExamTotal);

            System.out.println();

            laboratoryGrade = performanceTaskTotal + classStandingTotal + prelimLaboratoryExamTotal;
            System.out.println("Laboratory Grade: " + laboratoryGrade);
        }

        System.out.println();

        prelimGrade = (lectureGrade * (float) 0.6) + (laboratoryGrade * (float) 0.4);
        System.out.println("Prelim Grade: " + prelimGrade);
    }
}
