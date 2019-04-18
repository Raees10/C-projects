# C- Project
Group Names
RAEES WALI MUHAMMAD 2k17/csee/80
Sohail Ali Jamali   2k17/csee/118
ABdul Majeed        2k17/csee/3
Noor ALi Channa     2k17/csee/78



Description...
THIS PROJECT IS FOR CALCULATING for ADD,SUB,MULT and DIVI 
data of student 


this program is design to culculate the simple numbers (-),(+),(*),(/).

this programe is calculating two number it also give decimal num
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package javaapplication14;

import java.util.Scanner;

/**
 *
 * @author JAMALI
 */
public class JavaApplication14 {
    private static int num1;
    private static int num2;
    private static String operation;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

    System.out.println("please enter the first number");
    num1 = input.nextInt();

    System.out.println("please enter the second number");
    num2 = input.nextInt();

    Scanner op = new Scanner(System.in);

    System.out.println("Please enter operation");
    operation = op.next();

    if (operation.equals("+"))
    {
        System.out.println("your answer is" + (num1 + num2));
    }
   else if  (operation.equals("-"))
    {
        System.out.println("your answer is" + (num1 - num2));
    }

  else if (operation.equals("/"))
    {
        System.out.println("your answer is" + (num1 / num2));
    }
   else if (operation.equals("*"))
    {
        System.out.println("your answer is" + (num1 * num2));
    }
   else 
    {
       System.out.println("Wrong selection");
    }


}
    }


my information raees jaani  cheak it broo .... 
<html>
<head>
<title>HTML</title>
</head>
<body>

<h1>My ROll number is 2k17/csee/118</h1>
<p>My Name is  sohail ALI .</p>
<a href="https://www.google.com/"> GOOGLE.COM </a>
<b> bold writing name sohail </b>

</body>
</html>
