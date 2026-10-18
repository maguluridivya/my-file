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

 
lines=raw_data.strip().splitlines()
name=lines[0].strip()
email=lines[1].strip()
phone=lines[2].strip()
name="".join(name.split()).title()
initials="".join(word[0]+word[6] for word in name.split()).upper()
email=email.lower()
domain=email.split("@")[1]
phone_digits="".join(char for char in phone if char.isdigit() )
valid=(phone_digits.startswith("91")and len(phone_digits)==12)
maskedphone="* "*(len(phone_digits)-4)+phone_digits[-4:]
print("Name:",name)
print("initials:",initials)
print("email:",email)
print("domain:",domain)
print("phone:",maskedphone)
print("valid:",valid)
