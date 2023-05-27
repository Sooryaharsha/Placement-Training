vowel="aeiou"
str=input("enter the string ")
#str ="AaaAnciob"
str=str.lower()
print(str)
i=0
temp=""
temp2=""
while(i<len(str)):
    if str[i] in vowel:
        temp=temp+str[i]
    else:
        temp2 = temp2 if len(temp2)>len(temp) else temp 
        temp=""
    i=i+1

print(temp2)