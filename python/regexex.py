# email = input("waht's your email ?").strip()
# username ,  domain = email.split("@")
# if username and domain.endswith("com"):
#     print("valid")
# else:
    # print("the email is not valid")
#this can be made better

# import re
# email=input("what's you mail?").strip()

# if re.search(".+@.+",email):#(.)means any charaacter and (+)mean 1 or more
#     #so it means we have something before @ and something after it
#     print("valid ")

# else :
#     print("invalid")



# import re
# email=input("what's you mail?").strip()

# if re.search(r".+@.+\.com",email):#it means tha the mail should end with .com only
    
#     print("valid ")

# else :
#     print("invalid")

    #to be more precise we can do

# import re
# email=input("what's you mail?").strip()

# if re.search(r"^.+@.+\.com$",email):#it means tha the mail should end with .com only
    
#     print("valid ")

# else :
#     print("invalid")


# ^        → start of string
# \w+      → letters/numbers (username)
# @        → must have @
# (\w+\.)? → optional subdomain (like cs.)
# \w+      → domain name
# \.edu    → must end with .edu
# $        → end of string
import re
email=input("what's your email ?")
if re.search(r"^\w+@(\w+\.)?\w+\.edu$",email,re.IGNORECASE):
    print("valid")
else:
    print("invalid")
