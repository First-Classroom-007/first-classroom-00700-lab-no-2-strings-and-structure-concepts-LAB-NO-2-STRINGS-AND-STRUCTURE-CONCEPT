```markdown
# Strings & Structures Lab (C Language)

## Objective
Implement the following functions in `src/`:

- `int my_strlen(const char *s);`
- `void my_strcpy(char *dest, const char *src);`
- `int my_strcmp(const char *s1, const char *s2);`
- `void init_student(struct Student *s, const char *name, int roll, float marks);`
- `void print_student(const struct Student *s);`

## Folder Structure
Only the `src/` folder is editable.

## Input/Output Format
- **Input**:
  1. Two lines: strings `s1` and `s2`.
  2. One line: `name roll marks` for a student.
- **Output**:
  1. Length of `s1` (integer)
  2. Result of `my_strcmp(s1, s2)` (integer)
  3. Copied string (contents of `s1`)
  4. Printed student details: `name roll marks`

### Example
```
Input:
hello
world
Alice 10 85.5

Output:
5
-15
hello
Alice 10 85.50
```

## How to Test Locally
```bash
# Compile:
$ gcc -I. src/*.c tests/main.c -o run_tests

# Run with a sample test:
$ ./run_tests < cases/input1.txt > my_output.txt


## Autograding Setup
1. Enable **Autograding** in GitHub Classroom.
2. Upload your I/O pairs (`inputX.txt` / `outputX.txt`).
3. CI will invoke `tests/run_tests.sh` to validate submissions.
```
