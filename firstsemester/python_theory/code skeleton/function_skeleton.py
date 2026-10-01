def get_price(item):#get price(dosa)
    if item == "idli":
        return 30
    elif item == "dosa":
        return 20
    elif item=="vada":
        return 50
    elif item=="cofee":
        return 55
    else:
        return 0



def item_cost(item,qty):
    price=get_price(item)
    return price * qty

    
def calculate_gst(amount, rate=0.05):
    GST= amount *  0.05  
    return round( GST,2)


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal-discount
    gst = calculate_gst(amount_after_discount)
    total =amount_after_discount+gst
    return discount,gst,total
    

def split_bill(total, people):
    each_pays = total/people
    left_over = total%people
    return each_pays,round(left_over,2)
    


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 = item_cost("dosa",2)
subtotal2=item_cost("cofee",3)
discount1, gst1, total1 =generate_bill(subtotal1,0.10)
each, extra = split_bill(total1,3)
discount2,gst2,total2=generate_bill(subtotal2,0.10)
each,extra=split_bill(total2+total1,3)


print("Subtotal of dosa  :", subtotal1)
print("Discount  of dosa:", discount1)
print("GST   :", gst1)
print("Total    :", total1)
print("subtotal:",subtotal2)
print("discount:",discount2)
print("subtotal2:",subtotal2)
print("discount:",discount2)
print("gst:",gst2)
print("total:",total2)
print("Each pays:", each, "| Left over", extra)
#regular code to write regular code like total marks