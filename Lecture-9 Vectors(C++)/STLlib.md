Standard Template Library (STL) in C++
--------------------------------------

### 📌 Overview

The **Standard Template Library (STL)** is a powerful library in **C++** that provides **ready-to-use data structures and algorithms**. It helps programmers write efficient and reusable code without implementing common data structures from scratch.

STL is based on the concept of **templates**, which means the same code can work with different data types.

Example:A vector stores integers, while vector stores floating-point numbers, but both use the same underlying implementation.

Components of STL
=================

The STL mainly consists of **three major components**:

1.  **Containers**
    
2.  **Algorithms**
    
3.  **Iterators**
    

### 1️⃣ Containers

Containers are **data structures** that store and organize data.

Examples:

*   Arrays
    
*   Vectors
    
*   Lists
    
*   Stacks
    
*   Queues
    
*   Maps
    
*   Sets
    

### 2️⃣ Algorithms

Algorithms are functions that perform operations on containers.

Examples:

*   Sorting
    
*   Searching
    
*   Reversing
    
*   Counting
    
*   Finding minimum or maximum
    

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include sort(arr.begin(), arr.end());   `

### 3️⃣ Iterators

Iterators are objects used to **traverse containers**.

They work like **pointers**.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   vector::iterator it;   `

Used to move through container elements.

STL Containers
==============

📌 What Are Containers?
-----------------------

Containers are **classes that store collections of objects or data elements**.

They automatically manage memory and provide built-in functions for operations like insertion, deletion, searching, etc.

Types of STL Containers
=======================

STL containers are mainly divided into **three categories**:

1.  **Sequence Containers**
    
2.  **Associative Containers**
    
3.  **Unordered Containers**
    

1️⃣ Sequence Containers
=======================

Sequence containers store elements **in a linear order**.

Examples:

ContainerDescriptionvectorDynamic arraylistDoubly linked listdequeDouble-ended queuearrayFixed-size arrayforward\_listSingly linked list

### Vector

A **vector** is a dynamic array that can grow or shrink automatically.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include #include using namespace std;int main(){    vector v = {1,2,3,4};    v.push_back(5);    for(int x : v){        cout << x << " ";    }}   `

Output:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   1 2 3 4 5   `

### List

A **list** is a doubly linked list that allows fast insertion and deletion.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include list l;l.push_back(10);l.push_back(20);   `

### Deque

A **deque** allows insertion and deletion from **both ends**.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include deque d;d.push_front(5);d.push_back(10);   `

2️⃣ Associative Containers
==========================

Associative containers store data **in sorted order** and use **keys for fast searching**.

Examples:

ContainerDescriptionsetStores unique elementsmapStores key-value pairsmultisetAllows duplicate elementsmultimapAllows duplicate keys

### Set

A **set** stores unique elements in sorted order.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include set s;s.insert(10);s.insert(20);s.insert(10);   `

Output:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   10 20   `

Duplicate values are automatically ignored.

### Map

A **map** stores **key-value pairs**.

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include #include using namespace std;int main(){    map m;    m[1] = "Apple";    m[2] = "Banana";    cout << m[1];}   `

Output:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   Apple   `

3️⃣ Unordered Containers
========================

Unordered containers store elements using **hash tables**, meaning elements are **not sorted** but operations are faster.

Examples:

ContainerDescriptionunordered\_setUnordered unique elementsunordered\_mapUnordered key-value pairsunordered\_multisetAllows duplicatesunordered\_multimapAllows duplicate keys

Example:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   #include unordered_set s;s.insert(5);s.insert(2);s.insert(10);   `

Elements may appear in random order.

Key Advantages of STL Containers
================================

✔ Automatic memory management✔ Efficient data storage✔ Built-in functions for common operations✔ Saves development time✔ Highly optimized implementations

Comparison of Some STL Containers
=================================

ContainerOrderedDuplicate AllowedStructurevectorYesYesDynamic ArraysetYesNoBalanced TreemapYesNo (keys)Balanced Treeunordered\_setNoNoHash Tableunordered\_mapNoNo (keys)Hash Table

Conclusion
==========

The **Standard Template Library (STL)** is one of the most powerful features of C++. It provides ready-made implementations of data structures and algorithms, making programs **shorter, faster, and more efficient**.

STL containers allow programmers to focus more on **problem-solving and logic** rather than implementing data structures from scratch.