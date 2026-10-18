details=(("pannumner","dob","accountnumber"),["name","emailid","phone","adress","balance"])
details=(("pannumner","dob","accountnumber"),["name","emailid","phone","adress","balance"])
pannumner=int(input("enter the pan number"))
dob=int(input("enter the date of birth"))
accountnumber=1000
name=input("enter the name of the accountant")
emailid=input("enter the email")
phoneno=int(input("enter teh phone no"))
adress=input("enter teh adress")
balance=int(input("enter the balance"))#details.append[name,emailid,phoneno,adress,balance] #details.append(pannumner,dob,accountnumber)
details=((pannumner,dob,accountnumber),[name,emailid,phoneno,adress,balance])#append is used to add the elements later starting
details[1][4]=balance
depositamount=int(input("enter the new deposit amount"))
balance=balance+depositamount
print("the current balance is:",balance)
details=((pannumner,dob,accountnumber),[name,emailid,phoneno,adress,balance])#append is used to add the elements later starting
print(details) 
