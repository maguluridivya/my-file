customername=input("enter the name")
foodbilamount=float(input("enter the foodbillamount"))
numberofpeople=int(input("enter the number"))
weekend=input("enter is it weekend")
customertype=input("enter the customer type")
gst=foodbilamount*5/1000
totalloyaltydiscount=0
finaltotalbill=0
loyaltypoints1=0
gst=foodbilamount*5/100
print("the gst is",gst)
finaltotalbill=foodbilamount
print("the final totalbill is:",finaltotalbill)
amountperperson=finaltotalbill/numberofpeople
print("the amount per person is",amountperperson)
if foodbilamount>1000:
  loyaltypoints1=finaltotalbill*20/1000
print("loyalty points are",loyaltypoints1)
if foodbilamount<1000:
  loyaltypoints1=finaltotalbill*10/1000
  print("loyaltypoints are",loyaltypoints1)



if customertype.lower()=="loyalty": 
 loyaltydiscount=foodbilamount*8/100
 print("the loyaltydiscount is ",loyaltydiscount)
if weekend=="yes":
 weekendsurcharge=foodbilamount*10/100
 print("the weekend surcharge is:",weekendsurcharge)
 finaltotalbill=foodbilamount-totalloyaltydiscount+gst+weekendsurcharge
 print ("the finalamount is",finaltotalbill)
 amountperperson=finaltotalbill/numberofpeople
 print("amount per person is",amountperperson)
 amountperperson=finaltotalbill/numberofpeople
 print("amount of person is",amountperperson)
 
 


