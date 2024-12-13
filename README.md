# readFile
Problem Description:
Write a program that reads the text file specified by the user and displays: the number of lines read, the number of characters read, the number of letters read, and the number of each individual letter read.

Display the following prompt to ask the user for the name of the input file. Advance the cursor to the next line at the end of the prompt and read the file name entered on the following line.
```
Enter the name of the input file.
```
Should you be unable to open the file, display the following message where filename.txt is the name of the file. Display a newline after the error message.
```
Error, unable to open "filename.txt".
```
Should the input file be empty, do not display the report. Instead display the following message where filename.txt is the name of the file. Display a newline after the error message.
```
"filename.txt" was empty.
```
Use an array to store the counts of each letter encountered A-Z. Please note, you are not being asked to store every letter read simultaneously, but twenty-six counters. Make your array contain twenty-six integers.

Hint:

Subtract uppercase A from uppercase letters to find the subscript of the counter variable that will store the count of the letter. Subtract lowercase a from lowercase letters to find the subscript of the counter variable that will store the count of the letter.
```
'A' - 'A' = 0 and 'a' - 'a' = 0

'B' - 'A' = 1 and 'b' - 'a' = 1

'C' - 'A' = 2 and 'c' - 'a' = 2 …

'Y' - 'A' = 24 and 'y' - 'a' = 24

'Z' - 'A' = 25 and 'z' - 'a' = 25
```
The Details:
Make your report closely match the sample report shown below. Notice there is a blank line between the number of letters read and the listing of the individual letters and their counts.

Sample Report:
```
Lines read = 3
Characters read = 116
Letters read = 91

The individual letter totals were:
A's = 0
B's = 0
C's = 11
D's = 5
E's = 9
F's = 0
G's = 0
H's = 6
I's = 4
J's = 0
K's = 9
L's = 2
M's = 2
N's = 4
O's = 12
P's = 1
Q's = 0
R's = 5
S's = 3
T's = 7
U's = 4
V's = 0
W's = 3
X's = 0
Y's = 4
Z's = 0
