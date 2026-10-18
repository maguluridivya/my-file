print("----ELECTRICITY BILL----")
print("calculate household current bill")
duedate=21/7/26
category=input("enter the category")
if category=="1":
    print("commercial")
    unitsconsumed=int(input("enter the number of units consumed"))
    if unitsconsumed<=100:
        bill=unitsconsumed*100
    elif unitsconsumed<=300:
        bill=unitsconsumed*12
    elif unitsconsumed>300:
        bill=unitsconsumed*15
    print("the billa after units consumed is:",bill)
    peakthreshold=input("is peakthreshold is found")
    if peakthreshold=="yes":
        penalitybill=bill+100
    else:
        penalitybill=bill
    print("the bill after threshold frequency",penalitybill)
    billpaydate=int(input("enter the  date for the bill payed"))
    if billpaydate=="duedate":
        print("the discount is available")
    else:
        print("the discount is unavailable")
else:
    category=="0"
    print("non commercial")
    unitsconsumed=int(input("enter the number of units consumed"))
    if unitsconsumed<=100:
            bill1=unitsconsumed*5
    elif unitsconsumed<=300:
            bill1=unitsconsumed*6
    elif unitsconsumed>300:
            bill1=unitsconsumed*8
    print("the billa after units consumed is:",bill1)
    peakthreshold=input("is peakthreshold is found")
    if peakthreshold=="yes":
            penalitybill1=bill1+100
    else:
            penalitybill1=bill1
    print("the bill after threshold frequency",penalitybill1)
    billpaydate=int(input("enter the  date for the bill payed"))
    if billpaydate=="duedate":
            print("the discount is available")
    else:
            print("the discount is unavailable")