#include<stdio.h>
#include<string.h>
#include<math.h>
//void main()
//{
   /* char name[40];
    puts(" Hello may name is Saif"); 
    puts("And what is your name : ");
    gets(name);
    printf("Hello mr. %s. How are you",name);
    */
      
//Sum of number,digit count, reverse.
   
 /*  int r,s=0,n,ch,c=0;
   printf("Enter any number :");
   scanf("%d",&n);
   printf("Press a Key:\n1 for sum of digits.\n2 for digit count.\n3 for reverse.\n");
   scanf("%d",&ch);
   if(ch==1)
   { 
     while(n!=0)
     {
       r=n%10;
       s=s+r;
       n=n/10;
     } 
    printf("sum of all digits is: %d",s);
   }
   else if(ch==2)
   {
      while (n!=0)
      {
         c++;
         n=n/10;
      }
      printf("Total digits in given no. is %d",c);
   }
   else if(ch==3)
   {
      while (n!=0)
      {
         r=n%10;
         s=10*s+r;
         n=n/10;
      }
      printf("Reverse of given number is %d",s);
   }
   else{
      printf("Input Error!");
   }
   */

  //Week name by Switch Statement.
  /*
  int ch;
  printf("Enter a number between 1 to 7 to print a name of day\n");
  scanf("%d",&ch);
  switch (ch)
  {
   case 1:
   printf("Monday");
   break;
   case 2:
   printf("Tuesday");
   break;
   case 3:
   printf("Wednusday");
   break;
   case 4:
   printf("Thrusday");
   break;
   case 5:
   printf("Friday");
   break;
   case 6:
   printf("Saturday");
   break;
   case 7:
   printf("Sunday");
   break;       
  default:
  printf("Wrong choice");
   break;
  }
  */

 //Calculater by switch statement.
/*
 int a,b,c,ch;
 printf("Enter two number Which you want to +,-,*,/ \n");
 scanf("%d%d",&a,&b);
 printf("press a number\n1 for +\n2 for -\n3 for *\n4 for /\n");
 scanf("%d",&ch);
 switch (ch)
 {
   case 1:
   c=a+b;
   printf("Result is = %d",c);
   break;
   case 2:
   c=a-b;
   printf("Result is = %d",c);
   break;
   case 3:
   c=a*b;
   printf("Result is = %d",c);
   break;
   case 4:
   c=a/b;
   printf("Result is = %d",c);
   break;
    
 default:
 printf("Wrong Input!");
   break;
 }
 */
//structure....
//}
/*
struct student
{
  
   int age;
   int rn;
};
void main()
{
   struct student s1={20,3};
   struct student s2={19,4};
   printf("Saif Age=%d,Roll.No=%d\n",s1.age,s1.rn);
   printf("Ali Age=%d,Roll.No=%d",s2.age,s2.rn);
}

struct student
{
   int sr;
   int rn;
   float cgpa;

};
void main()
{
   struct student st;
   printf("Enter your serial no, Roll no, Cgp");
   scanf("%d%d%f",&st.sr,&st.rn,&st.cgpa);
   printf("Student Information : \nSerial No.= %d\nRoll No.= %d\nCGPA = %.1f",st.sr,st.rn,st.cgpa);

}
*/
// soarting of array
/*
void main()
{
   int a[]={5,4,7,4,9,7,6};
   int i,j,c=0;
   int n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++)
      {
         for(j=0;j<n-i;j++)
           {
              if(a[j]>a[j+1])
               {
                  int t=a[j];
                  a[j]=a[j+1];
                  a[j+1]=t;
               }
               c++;
           }
      }
   printf("%d",c);
   printf("Shorted array is: \n");
   for(i=0;i<n;i++)
    
}
*/

//shorting of array
/*void main()
{
   int a[]={5,4,7,4,9,7,6};
   int i,j,c=0;
   int n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++)
      {
         for(j=0;j<n-i;j++)
           {
              if(a[j]>a[j+1])
               {
                  int t=a[j];
                  a[j]=a[j+1];
                  a[j+1]=t;
               }
               c++;
           }
      }
   printf("%d",c);
   printf("Shorted array is: \n");
   for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    
}
//shorted of array
void main()
{
   int i,j,a[8]={4,1,5,8,6,3,9,2};
   for(i=0;i<8;i++)
    {
      for(j=1;j<n-i;j++)
       {
         if(a[j]>a[j+1])
          {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;

          }
       }
    }
    printf("")
}*/
/*struct student 
{
   int rn;
   int marks;
};
void main()
{
   struct student st;
   printf("Enter your roll no and marks ");
   scanf("%d%d",&st.rn,&st.marks);
   printf("Roll Number= %d\nMarks = %d ",st.rn,st.marks);
}
*/
/*struct second 
{
  
   int semester;
   int marks;
};
void main()
{
   struct second s;
   printf("Enter Your semester and marks");
   scanf("%d%d",&s.semester,&s.marks);
   printf("Your are in %d Semester and you have got %d marks ",s.semester,s.marks);
}


void main()  
{  
    int i,a[5]={3,4,5,6,7};  
    //printf("Enter the size of the array: ");  
    //scanf("%d", &n);  
    //printf("Enter the elements: ");  
    //for(i = 0; i < n; i++)  
    //{  
      //  scanf("%d", &arr[i]);  
    //}  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
}  
*/
//#include <stdio.h>

/*    void sum (int,int);
    void main ()
    {
        sum (5,6);   
    }
    
    void sum (int a, int b)
    {
	    int s;
		 s=a+b;
       printf("Sum is = %d",s);
      
    } 
    */
   //Area of rectangle
   /*
  void area(int, int);
  void main()
  {
   area(5,7);

  }
  void area(int a,int b)
  {
   int c;
   c=a*b;
   printf("area is = %d",c);
  }
  */
// Parameter of rectangle 
 /*
 void param(int,int);
 void main()
 {
     param(8,5);
 }
 void param(int a,int b)
 {
   int c;
   c=2*(a+b);
   printf("Parameter is = %d",c);
 }
*/
// swaping two numbers with yhird variable
/*
void swap(int,int);
void main()
{
   swap(4,9);

} 
void swap(int a,int b)
{
   printf("a = %d\nb = %d",a,b);
   int c;
   c=a;
   a=b;
   b=c;
   printf("\n\nAfter Swaping \na = %d\nb = %d",a,b);  
}
*/
//swaping two number without any vriable.
/*
void swap(int,int);
void main()
{
   swap(5,7);
}
void swap(int a,int b)
{
   printf("a = %d\nb = %d",a,b);
   a=a+b,b=a-b,a=a-b;
   printf("\nAfter Swaping\na = %d\vb = %d",a,b);
}

// Parameter of Triangle .
void triP(int,int,int);
void main()
{
   triP(5,8,8);

}
void triP(int a,int b,int c)
{
   int p;
   p=a+b+c;
   printf("a=%d\nb=%d\nc=%d\nParameter of Triangle is = %d",a,b,c,p);
}


void greater(int,int);
void main()
{
   greater(5,8);
}
void greater(int a,int b)
{
   if(a>b)
   
      printf("Greater is a=%d",a);
   
   else
      printf("Greater is b=%d",b);
   
}


void sum()
{
   int a,b,s;
   printf("Enter two number for Sum :\n");
   scanf("%d%d",&a,&b);
   s=a+b;
   printf("Addition of Given number is : %d",s);
   
}
void main()
{
   sum();

}

//Calculatar by Function
void all()
{
   int a,b,c,x,cnt;
   do
   {
   printf("Enter Value of 'a' :");
   scanf("%d",&a);
   printf("Enter Value of 'b' :");
   scanf("%d",&b);   
   printf("\npress a number:\n1 for sum\n2 for substraction\n3 for multiplication\n4 for divide\n5 for swap\n");
   scanf("%d",&x);
   if(x==1)
   {
      c=a+b;
      printf("addition is = %d",c);
   }
   else if(x==2)
   {
      c=a-b;
      printf("Substraction is = %d",c);
   }
   else if(x==3)
   {
      c=a*b;
      printf("Multiplication is = %d",c);
   }
   else if(x==4)
   {
      c=a/b;
      printf("Division is = %d",c);
   }
   else if(x==5)
   {
      c=a;
      a=b;
      b=c;
      printf("After Swaping\na = %d\nb = %d",a,b);
   }
   else{
      printf("Invalid Input!");
   }
      printf("\nPress 1 for Continue : ");
      scanf("%d",&cnt);   
   } while (cnt==1);
   // a=a+b;
   // b=a-b;
   // a=a-b;
   // printf("a=%d\nb=%d",a,b);
}
void main()
{
   all();
   
}

          //minimum Element in Array.
void main()
{
   int a[5]={3,7,5,9,6};
   int i,mini;
   mini=a[0];
   for(i=0;i<5;i++)
   {
      if(a[i]<mini)
      {
         mini=a[i];
      }
   }
   printf("Minimum Element is %d",mini);
}
         //maximum elemnet in array.
void main()
{
   int a[8]={4,7,9,7,5,7,4,9};
   int i,max=a[0];
   for (i=0;i<8;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
      }
   }
   printf("maximum Element is %d",max);

}
*/
        //Sum of Element of Array
/*
void main()
{
   int a[9]={4,3,2,6,8,5,9,8};
   int i,s=0;
   for(i=0;i<9;i++)
   {
      s=s+a[i];
   }
   printf("Sum of all Elements of array is %d",s);
}
*/
         //Found any Element in Array
/*
void main()
{
   int a[10]={2,5,8,8,7,3,5,1,6,2};
   int i,f=0,k;
   printf("Enter Element Which you want to found ");
   scanf("%d",&k);
   for (i=0;i<10;i++)
   {
      if(a[i]==k)
      {
         f=1;
         break;
      }
   }
   if(f==1)
      printf("Element found at position %d",i+1);
   else
      printf("Element Not found !");
}
*/
// Structure
/*
struct student
{
   char name[50];
   int rn;
   float pr;

};
void main()
{
   struct student st;

   printf("Enter your Name\nRoll No\nPercentage\n");
   scanf("%s,%d,%f",&st.name,&st.rn,&st.pr);
   printf("Student Detail :\nName = %s\nRoll No = %d\nPercentage = %f",st.name,st.rn,st.pr);
   
}
*/
void main()
{
   int a[][];
   int i,j,x,y;
   printf("Enter the size of Row of Array : ");
   scanf("%d",&a[x]);
   printf("Enter the Size of Column of array : ");
   scanf("%d",&a[y]);
   printf("Enter the element of Array :\n");
   for(i=0;i<x;i++)
   {
      for(j=0;j<y;j++)
      {
         scanf("%d",&a[i][j]);
      }
   } 
}

void main()
{
   
}