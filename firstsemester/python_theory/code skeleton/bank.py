
 
balance=0
while True:
  print("1.deposit")
  print("2.withdraw")
  print("3.accountdetails")
  print("4.exit")
  choice=input("enter the choice")
  if choice=="1":
      amount=float(input("enter the deposit amount"))
      if amount>0:
        balance=balance+amount
        print("the deposition is succesful")
        print("amount   deposited:",amount)
        print("the current balance",balance)
      elif amount<0:
         print("error depositamount is negative")
      else:
         print("deposition is not succsesful")
  elif choice=="2":
    withdrawamount=float(input("enter the withdraw amount"))
    if withdrawamount>balance:
        print("insufficient balance")
    elif withdrawamount==0:
       print("invalid withdraw anmount must be greater than zero")
    else:
        withdraw=balance-withdrawamount
        print("the withdraw is succesful:")
        print("the amount after withdrawl",withdraw)
        print("the current balance is:",balance)
  elif choice=="3":
    print("ACCOUNT DETAILS\n")
    print("the balance is:",balance)
  elif choice=="4":
     print("exit")
     break
  else:
     print("inmvalid choice")