Reverse Array in C
==================

Problem Statement
-----------------

Write a C program to reverse the elements of an array.The program should take an array of integers and rearrange its elements so that the first element becomes the last, the second becomes the second-last, and so on.

Example:

Input Array:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   1 2 3 4 5   `

Output Array:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5 4 3 2 1   `

The reversal should be done efficiently without using an additional array.

Approach
========

The program uses the **Two Pointer Technique** to reverse the array.

Two variables are used:

*   **start** → points to the first element of the array
    
*   **end** → points to the last element of the array
    

The algorithm swaps elements at these positions and then moves the pointers toward the center of the array.

This process continues until the pointers meet or cross each other.

Logic Flow
==========

1.  Initialize an array with elements.
    
2.  Calculate the size of the array using the sizeof() operator.
    
3.  Call the reverse() function and pass the array and its size.
    
4.  Inside the reverse() function:
    
    *   Set start = 0
        
    *   Set end = n - 1
        
5.  Swap elements at the start and end positions.
    
6.  Increment start and decrement end.
    
7.  Repeat the swapping process until the entire array is reversed.
    
8.  Return to the main() function.
    
9.  Print the reversed array.
    

Algorithm
=========

1.  Start
    
2.  Declare an array
    
3.  Find the size of the array
    
4.  Set start = 0 and end = n - 1
    
5.  While start <= end
    
    *   Swap arr\[start\] and arr\[end\]
        
    *   Increment start
        
    *   Decrement end
        
6.  Print the reversed array
    
7.  End
    

Code Explanation
================

Main Function
-------------

The main() function performs the following tasks:

*   Declares and initializes the array.
    
*   Calculates the number of elements using sizeof.
    
*   Calls the reverse() function to reverse the array.
    
*   Prints the reversed array.
    

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   int arr[] = {1,2,3,4,5};  int n = sizeof(arr)/sizeof(arr[0]);  reverse(arr, n);   `

Reverse Function
----------------

The reverse() function swaps elements from both ends of the array.

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   void reverse(int arr[], int n){      int start = 0;      int end = n-1;      while(start <= end){          int temp = arr[start];          arr[start] = arr[end];          arr[end] = temp;          start++;          end--;      }  }   `

### Steps performed:

1.  Store the first element in a temporary variable.
    
2.  Replace the first element with the last element.
    
3.  Assign the temporary value to the last element.
    
4.  Move the pointers toward the center.
    

Output
======

Example Output:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   The reversed array is:  5 4 3 2 1   `

Key Concepts Used
=================

*   Arrays in C
    
*   Functions
    
*   Two Pointer Technique
    
*   Swapping elements
    
*   sizeof() operator
    
*   Time and Space Complexity
    

Conclusion
==========

This program demonstrates how to reverse an array efficiently using the Two Pointer Technique.The approach avoids using extra memory and performs the reversal directly within the original array, making it both simple and efficient.