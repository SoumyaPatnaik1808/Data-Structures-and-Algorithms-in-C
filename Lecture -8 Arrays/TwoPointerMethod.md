Two Pointer Method (Algorithm Technique)
========================================

Overview
--------

The **Two Pointer Method** is an algorithmic technique where **two pointers (variables that store indices)** are used to traverse a data structure, usually an **array or string**.

Instead of using nested loops, two pointers move through the structure **simultaneously**, which often reduces the time complexity from **O(n²) to O(n)**.

This method is widely used in problems involving:

*   Searching
    
*   Reversing arrays
    
*   Pair finding
    
*   Removing duplicates
    
*   Sliding window problems
    

Basic Idea
==========

Two variables (pointers) are used to track positions in the array.

Typically:

*   One pointer starts from the **beginning**
    
*   Another pointer starts from the **end**
    

These pointers **move toward each other** or **move in the same direction depending on the problem**.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   Array: 1 2 3 4 5start → points to 1end   → points to 5   `

After swapping:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   5 2 3 4 1   `

Pointers move inward:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   start++end--   `

Types of Two Pointer Approaches
===============================

1\. Opposite Direction Pointers
-------------------------------

Two pointers start from **both ends of the array** and move toward each other.

### Example Use Cases

*   Reversing an array
    
*   Checking palindrome
    
*   Finding pairs in a sorted array
    

### Example (Reverse Array)

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   Initial array:1 2 3 4 5Step 1start = 0end = 4swap(1,5)5 2 3 4 1Step 2start = 1end = 3swap(2,4)5 4 3 2 1   `

Stop when start >= end.

2\. Same Direction Pointers
---------------------------

Both pointers start from the **beginning** but move at **different speeds or conditions**.

### Example Use Cases

*   Removing duplicates
    
*   Partitioning arrays
    
*   Sliding window problems
    

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   Array: 1 1 2 2 3 4   `

One pointer tracks **unique elements**, the other scans the array.

General Algorithm (Opposite Direction)
======================================

1.  Initialize two pointers
    

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   start = 0end = n - 1   `

1.  Repeat while start < end
    
2.  Perform required operation (swap/compare/etc.)
    
3.  Move pointers
    

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   start++end--   `

1.  Stop when pointers meet or cross.
    


Example in C (Reverse Array)
============================

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   void reverse(int arr[], int n){    int start = 0;    int end = n - 1;    while(start < end){        int temp = arr[start];        arr[start] = arr[end];        arr[end] = temp;        start++;        end--;    }}   `

Advantages
==========

✔ Reduces time complexity
✔ Avoids nested loops
✔ Efficient for sorted arrays
✔ Uses constant extra space

Common Problems Solved Using Two Pointers
=========================================

1.  Reverse an array
    
2.  Check if a string is a palindrome
    
3.  Two Sum in sorted array
    
4.  Remove duplicates from sorted array
    
5.  Container with most water
    
6.  Trapping rain water
    

Conclusion
==========

The **Two Pointer Method** is a powerful optimization technique used in algorithm design. By using two indices to traverse a data structure efficiently, it helps solve problems faster and with less memory compared to traditional approaches.