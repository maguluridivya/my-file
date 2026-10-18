total=0
avearage=0
percenatge=0
firstsubject=float(input("enter the firstsubject marks"))
secondsubject=float(input("enter the secondsubjectmarks"))
thirdsubject=float(input("enter the thirdsubjectmarks"))
if (firstsubject<0 or firstsubject>100 )or (secondsubject<0 or secondsubject>100) or (thirdsubject<0 or thirdsubject>100):
    print("invalid marks marks must be between 0 and 100")
else:
    total=firstsubject+secondsubject+thirdsubject

    print("the total is:",total)
    avearage=total/3
    print("the avearage is:",avearage)
    percentage=total*100/300
    print("the percentage:",percentage)
    if percentage>=70:
        print("the grade is distinction")
     
    elif percentage>=60 and percentage<70:
        print("the garde is firstclass")
    elif percentage>=40 and percentage<60:
        print("the grade is secondclass")
    else: 
         print("fail")
         