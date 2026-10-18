
regularprice=500



day=input("enter the day:")
show_timing=input("enter the timing:")
age=int(input("enter the age"))
if  day== "monday" "tuesday" "wenesday" "thursday" "friday" :
    ticketprice =  regularprice 
    
else:

    ticketprice=regularprice+(regularprice*0.25)
print("the ticketprice:",ticketprice)

if show_timing =="morning" :
    price = regularprice
    print("the price is:",price)
elif show_timing=="afternoon":
    price=ticketprice+(regularprice*0.10)
else:
    price=ticketprice+(regularprice*0.30)


print("the price is:",price)
if age<=5:
    discount=0.50
elif age<=59 or age>5:
    discount=0.0
elif age>=60:
    discount=0.10


finalprice=price-(regularprice*discount)
print("final price:",finalprice)
    








    



