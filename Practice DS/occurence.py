n=int(input("Enter the no of elements : "))
a=[]
st=[]
print("Enter those elements : ")
for i in range (n):
    a.append(input("Enter the element"))
for i in a:
    if i in st:
        print("The required no is : ",i)
        break;
    else:
        st.append(i)

