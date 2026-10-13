menu={
     "panner chilly":180,
     "meals":50,
     "gobi":80,
     "cofee":30,
     "dosa":50,
     "vegkurma":100,
     "vegroll":120
}




def get_price(item):
    if item=="panner chillt":
        return 180
    elif item=="meals":
         return 50
    elif item=="gobi":
         return 80
    elif item=="cofee":
         return 30
    elif item=="dosa":
         return 50
    elif item=="vegkurma":
         return 100
    elif item=="vegroll":
         return 120
    else:
         return 0

def item_cost(item,qty):
    price=get_price(item)
    return price*qty

def calculate_gst(amount,rate=0.05):
    return round(amount*rate,2)
def generatebill(subtotal,discountpercent=0):
  discount = subtotal * discount_percent/100
  amount = subtotal-discount
  gst = calculate_gst(amount)
  finaltotal =amount+gst
  return discount,gst,finaltotal
    
def split_bill(total,people):
    wholerupees=total/people
    extra=total%people
    return wholerupees,extra

    
print("\n---------FINALBILL--------")
subtotal=0
item=input("enter the item:")
qty=int(input("enter the number of items"))
subtotal=item_cost(item,qty)
if subtotal==0:
        print("item is not available on the menu")
else:
        subtotal=subtotal+subtotal
        discount_percent=float(input("enter the discout percentage"))
        people=int(input("enter the numebr of people:"))
        discount,gst,finaltotal=generatebill(subtotal,discount_percent)
        wholerupees,extra=split_bill(finaltotal,people)
        print("item:",item)
        print("quantity:",qty)
        print("subtotal is:",subtotal)
        print("discount is",discount)    
        print("gst is:",gst)   
        print("total is:",finaltotal)
        print("each pays:",wholerupees)
        print("leftover:",extra)




















