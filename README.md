# Reverse the reverser

## Usage 
```bash
reverse_reverse [option] <msg>

Options:
  -o            converts orginal to reverse
  -r            converts reverse to orginal
````

## Example
Encrypt message:
```bash
reverse_reverser -o "Hello World!!"
```
output: **!t=EKH0sHEE>!**

Decrypt message:
```bash
reverse_reverser -r "!t=EKH0sHEE>!"
```
Output: **Hello World!!**


