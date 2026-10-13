
def read_data():
    details=[]
    balance=int(input("enter the balance"))
    pannumner=int(input("enter the pan number"))
    dob=int(input("enter the date of birth"))
    accountnumber=1000
    tuple=()
    name=input("enter the name of the accountant")
    emailid=input("enter the email")
    phoneno=int(input("enter teh phone no"))
    adress=input("enter teh adress")
    balance=int(input("enter the balance"))
    details.append((pannumner,dob,accountnumber))
    details.append([phoneno,adress,balance,pannumner])


    print("the bank details are:",details)

read_data()