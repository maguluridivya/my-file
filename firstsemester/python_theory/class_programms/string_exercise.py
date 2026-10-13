#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
name=naveen   KUMAR
email=naveen.kumar@COMPANY.com
phone=+91-98765-43210



"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print(name.strip().title().replace("  "," "))
print(email.lower())
print(phone.replace("-","").repalce("+91987654","*****"))
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print(" domain:comapny.com")
if len(phone)==12:
    print("valid:true")

 




first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()