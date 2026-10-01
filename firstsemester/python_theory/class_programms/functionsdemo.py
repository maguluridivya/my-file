rollno=0
subject1marks=0
subject2marks=0
subject3marks=0
total=0
def readdata():
  global rollno, subject1marks,subject2marks,subject3marks
   
  rollno=int(input("enter the roll no"))
  subject1marks=int(input("enter the subject1marks"))
  subject2marks=int(input("enter the subject2 marks"))
  subject3marks=int(input("enter the subject3marks"))


def total ():
   global totalmarks
   totalmarks=subject1marks+subject2marks+subject3marks
   print("the total is",totalmarks)
def avg():
   global avg
   avg=totalmarks/3
   print("the avg is",avg)
def percentage():
  global percentage
  percentage=totalmarks*100/300
  print("the percentage is:",percentage)
  
def grade():
   global grade
   if percentage>=65 and percentage<75:
     print("firstclass")
   elif percentage>75:
     print("distinction")
   else:
     print("fail")
     return grade


 
  
for i in range(1,4): 
 readdata()
 total()
 avg()
 percentage()
 grade()
