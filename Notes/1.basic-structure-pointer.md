
# Basics of Stucture and Pointer



## What is a structure in C and how is it defined?

Structure is custom datatype in c programming that allows grouping of different datatypes in single variable.

```cpp
  struct student{
    int id;
    string name;
    int age;
    float fees;
  };
```
## What is a pointer in C and how does it work?
Pointer in C is a variable that stores the memory address of another variable. 
A variable X stored at the address 0x001. A pointer p can be assigned the address of x using the & operator.


## How do you declare and initialize a pointer to an integer in C?

```cpp
  int x = 10;
  int *ptr = &x; 
```

## How can you access the members of a structure in C?
The members of a structure can be accessed using (.) dot operator with the help of structure variable.

```cpp
  struct student{
    int id;
    string name;
    int age;
  };

  int main(){
    student stu;
    stu.id = 1;
    stu.name = "ayan";
    stu.age = 23;
  }
```
## How can you create a pointer to a structure?
```cpp
  int main(){
    student stu;
    student *ptr = &stu;
  }
```

## What is the difference between * (dereferencing) and & (address-of) operators?
*  *(dereferencing) : It is used to get the value that a pointers point to.

*  & (address-of) : It is used to get the memory address of the variable that pointers stored.

## How do you dynamically allocate memory for a structure using pointers?
To dynamically allocate memory for a structure, you use the malloc function from the stdlib.h library.

```cpp
  struct student *ptr = (struct student *)malloc(sizeof(struct student));
```

## How do you access structure members using a pointer to the structure?
We can access structure members using -> from the pointer of a structure.

* pointer -> stucture_member

```cpp
  student stu;
  student *ptr = &stu;
  ptr->id = 1;
  ptr->name = "ayan";
  ptr->age = 23;
```
