# 📌Linear Search Algorithm 
==============================================

📌 Overview
-----------

**Linear Search** is the simplest searching algorithm.

It searches for an element by checking **each element one by one**, starting from the beginning of the array until:

*   The element is found, or
    
*   The array ends
    

It is also called **Sequential Search**.

## 🧠 When Is Linear Search Used?
==============================

Use Linear Search when:

*   The array is **unsorted**
    
*   The dataset is small
    
*   Simplicity is more important than performance
    
*   You cannot use faster methods like binary search
    

If your data is unsorted and you don’t want preprocessing (sorting), this is your default option.

# 📂 How Linear Search Works (Step-by-Step)
=========================================

Suppose we have:

Array : [4,2,7,1,9], target = 7

### Step 1:

Compare 4 with 7 → Not equal

### Step 2:

Compare 2 with 7 → Not equal

### Step 3:

Compare 7 with 7 → Match found ✅

Stop searching.

If the target is not found:

Plain textANTLR4BashCC#CSSCoffeeScriptCMakeDartDjangoDockerEJSErlangGitGoGraphQLGroovyHTMLJavaJavaScriptJSONJSXKotlinLaTeXLessLuaMakefileMarkdownMATLABMarkupObjective-CPerlPHPPowerShell.propertiesProtocol BuffersPythonRRubySass (Sass)Sass (Scss)SchemeSQLShellSwiftSVGTSXTypeScriptWebAssemblyYAMLXML`   Target: 5   `

It will check all elements and return "not found".

🧾 Algorithm (Step-by-Step Logic)
=================================

1.  Start from index 0.
    
2.  Compare current element with target.
    
3.  If equal → return index.
    
4.  Otherwise → move to next element.
    
5.  If end of array reached → return -1.