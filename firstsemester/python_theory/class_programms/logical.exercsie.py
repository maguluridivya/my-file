base=100
category=input("enter the category")
unit=int(input("enter the unit:"))

if category =="commercial":
     if unit <=100:
      base=100
      bill=unit*10
     
     elif unit <300:
        mid= unit-base
        bill=(mid*12)+(base*10)
     else:
        high=unit-(100+(unit-100))
        mid=unit-(100+high)
        bill=(high*15)+(mid*12+(100*10))
print("the totalbill is:",bill)
 
            
if category=="non commercial":
     if unit <100:
            bills= unit * 6
            print("the bill is:",bills)
     elif unit >100:
            bills = unit * 7
            print("the bill is:",bills)
     elif unit <300:
            bills=unit * 7
threshold=int(input("enter the threshold"))
payment=input("enter the payment due date")
if category=="comercial" and threshold==1:
          bill=bill+100
if payment==1:
          bill=bill-50

          print("the totalbill is:",bill)
       

            
     

